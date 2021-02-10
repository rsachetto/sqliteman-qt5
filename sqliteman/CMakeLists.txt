ADD_SUBDIRECTORY(icons)
ADD_SUBDIRECTORY(doc)
ADD_SUBDIRECTORY(ts)

SET( SQLITEMAN_SRC
    altertabledialog.cpp
    altertriggerdialog.cpp
    alterviewdialog.cpp
    analyzedialog.cpp
    blobpreviewwidget.cpp
    constraintsdialog.cpp
    createindexdialog.cpp
    createtabledialog.cpp
    createtriggerdialog.cpp
    createviewdialog.cpp
    database.cpp
    dataexportdialog.cpp
    dataviewer.cpp
    helpbrowser.cpp
    importtabledialog.cpp
    importtablelogdialog.cpp
    multieditdialog.cpp
    litemanwindow.cpp
    main.cpp
    populatorcolumnwidget.cpp
    populatordialog.cpp
    preferences.cpp
    preferencesdialog.cpp
    queryeditordialog.cpp
    schemabrowser.cpp
    shortcuteditordialog.cpp
    shortcutmodel.cpp
    sqldelegate.cpp
    sqleditor.cpp
    sqleditorwidget.cpp
    sqliteprocess.cpp
    sqlitemview.cpp
    sqlkeywords.cpp
    sqlmodels.cpp
    tableeditordialog.cpp
    tabletree.cpp
    vacuumdialog.cpp
    utils.cpp
    sqlparser/tosqlparse.h
    sqlparser/tosqlparse.cpp
)

# compiled in icons for windows
IF (WIN32)
    if (MINGW)
        # resource compilation for mingw
        ADD_CUSTOM_COMMAND(OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/sqliteman_rc.o
                           COMMAND windres.exe -I${CMAKE_CURRENT_SOURCE_DIR}
                                           -i${CMAKE_CURRENT_SOURCE_DIR}/icons/sqliteman.rc
                                           -o ${CMAKE_CURRENT_BINARY_DIR}/sqliteman_rc.o)
        SET(SQLITEMAN_SRC ${SQLITEMAN_SRC} ${CMAKE_CURRENT_BINARY_DIR}/sqliteman_rc.o)
    else(MINGW)
        SET (SQLITEMAN_SRC ${SQLITEMAN_SRC} icons/sqliteman.rc)
    endif(MINGW)
ENDIF (WIN32)

SET( SQLITEMAN_MOC
    altertabledialog.h
    altertriggerdialog.h
    alterviewdialog.h
    analyzedialog.h
    blobpreviewwidget.h
    constraintsdialog.h
    createindexdialog.h
    createtabledialog.h
    createtriggerdialog.h
    createviewdialog.h
    dataexportdialog.h
    dataviewer.h
    helpbrowser.h
    importtabledialog.h
    importtablelogdialog.h
    litemanwindow.h
    multieditdialog.h
    populatorcolumnwidget.h
    populatordialog.h
#     populatorstructs.h
    preferences.h
    preferencesdialog.h
    queryeditordialog.h
    schemabrowser.h
    shortcuteditordialog.h
    shortcutmodel.h
    sqldelegate.h
    sqleditor.h
    sqleditorwidget.h
    sqliteprocess.h
    sqlitemview.h
    sqlmodels.h
    tableeditordialog.h
    tabletree.h
    vacuumdialog.h
)

SET( SQLITEMAN_UI
    analyzedialog.ui
    blobpreviewwidget.ui
    constraintsdialog.ui
    createindexdialog.ui
    createtriggerdialog.ui
    createviewdialog.ui
    dataexportdialog.ui
    dataviewer.ui
    helpbrowser.ui
    importtabledialog.ui
    importtablelogdialog.ui
    multieditdialog.ui
    populatorcolumnwidget.ui
    populatordialog.ui
    preferencesdialog.ui
    prefsdatadisplaywidget.ui
    prefslnfwidget.ui
    prefssqleditorwidget.ui
    queryeditordialog.ui
    schemabrowser.ui
    shortcuteditordialog.ui
    sqldelegateui.ui
    sqleditor.ui
    sqlitemview.ui
    tableeditordialog.ui
    vacuumdialog.ui
)

IF (WANT_RESOURCES)
    SET( SQLITEMAN_RCS
        doc/doc.qrc
        icons/icons.qrc
        ts/ts.qrc
    )
ENDIF (WANT_RESOURCES)
SET (SQLITEMAN_RCS ${SQLITEMAN_RCS} api/api.qrc)
QT5_ADD_RESOURCES( SQLITEMAN_RC_RCS ${SQLITEMAN_RCS} )


QT5_WRAP_UI( SQLITEMAN_UI_HDRS ${SQLITEMAN_UI} )

QT5_WRAP_CPP( SQLITEMAN_MOC_SRC ${SQLITEMAN_MOC} )

INCLUDE_DIRECTORIES( ${CMAKE_BINARY_DIR} )
INCLUDE_DIRECTORIES( ${CMAKE_BINARY_DIR}/sqliteman )
INCLUDE_DIRECTORIES( ${Qt5Widgets_INCLUDE_DIRS} )
INCLUDE_DIRECTORIES( ${Qt5Core_INCLUDE_DIRS} )
INCLUDE_DIRECTORIES( ${Qt5Sql_INCLUDE_DIRS} )

# due the "out of base directory" build. E.g. SQLITEMAN_SVN_DIR/mybuild etc.
INCLUDE_DIRECTORIES( . )
# qscintilla2
INCLUDE_DIRECTORIES( ${QSCINTILLA_INCLUDE_DIR} )

IF (MSVC)
    # this is a must to switch off subsystem:console (console window poping up)
    # WinMain wrapper from QT_QTMAIN_LIBRARY is used and liner must be modified
    SET (WIN32_SUBSYSTEM WIN32)
    SET (CMAKE_EXE_LINKER_FLAGS "/NODEFAULTLIB:msvcrt.lib ${CMAKE_EXE_LINKER_FLAGS}")
	LINK_LIBRARIES(${QT_QTMAIN_LIBRARY})
ENDIF (MSVC)


ADD_EXECUTABLE( ${EXE_NAME} ${WIN32_SUBSYSTEM}
		${SQLITEMAN_SRC}
		${SQLITEMAN_MOC_SRC}
        ${SQLITEMAN_UI_HDRS}
		${SQLITEMAN_RC_RCS}
)

TARGET_LINK_LIBRARIES( ${EXE_NAME} ${QT_LIBRARIES} ${QSCINTILLA_LIBRARY} Qt5::Core  Qt5::Widgets  Qt5::Sql  Qt5::Xml)

IF (WIN32)
    # don't use console subsystem
    IF (MINGW)
        TARGET_LINK_LIBRARIES(${EXE_NAME} "-mwindows")
	ENDIF (MINGW)
ENDIF (WIN32)

IF (WIN32)
    INSTALL(TARGETS ${EXE_NAME} RUNTIME DESTINATION .)
ELSE (WIN32)
    INSTALL(TARGETS ${EXE_NAME} RUNTIME DESTINATION bin LIBRARY DESTINATION lib)
ENDIF (WIN32)

