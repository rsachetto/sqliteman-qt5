# Install script for directory: /home/sachetto/sqliteman-1.2.2/sqliteman/icons

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  list(APPEND CMAKE_ABSOLUTE_DESTINATION_FILES
   "/usr/local/share/sqliteman/icons/blob.png;/usr/local/share/sqliteman/icons/clear_table_contents.png;/usr/local/share/sqliteman/icons/close.png;/usr/local/share/sqliteman/icons/column.png;/usr/local/share/sqliteman/icons/database_commit.png;/usr/local/share/sqliteman/icons/database.png;/usr/local/share/sqliteman/icons/database_rollback.png;/usr/local/share/sqliteman/icons/delete_table_row.png;/usr/local/share/sqliteman/icons/document-export.png;/usr/local/share/sqliteman/icons/document-new.png;/usr/local/share/sqliteman/icons/document-open.png;/usr/local/share/sqliteman/icons/document-save-as.png;/usr/local/share/sqliteman/icons/document-save.png;/usr/local/share/sqliteman/icons/edit.png;/usr/local/share/sqliteman/icons/go-next.png;/usr/local/share/sqliteman/icons/go-previous.png;/usr/local/share/sqliteman/icons/index.png;/usr/local/share/sqliteman/icons/insert_table_row.png;/usr/local/share/sqliteman/icons/kate.png;/usr/local/share/sqliteman/icons/key.png;/usr/local/share/sqliteman/icons/preferences-desktop-display.png;/usr/local/share/sqliteman/icons/runexplain.png;/usr/local/share/sqliteman/icons/runscript.png;/usr/local/share/sqliteman/icons/runsql.png;/usr/local/share/sqliteman/icons/setnull.png;/usr/local/share/sqliteman/icons/snapshot.png;/usr/local/share/sqliteman/icons/sqliteman.png;/usr/local/share/sqliteman/icons/system.png;/usr/local/share/sqliteman/icons/system-search.png;/usr/local/share/sqliteman/icons/table.png;/usr/local/share/sqliteman/icons/trigger.png;/usr/local/share/sqliteman/icons/view.png")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/share/sqliteman/icons" TYPE FILE FILES
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/blob.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/clear_table_contents.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/close.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/column.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/database_commit.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/database.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/database_rollback.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/delete_table_row.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/document-export.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/document-new.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/document-open.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/document-save-as.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/document-save.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/edit.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/go-next.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/go-previous.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/index.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/insert_table_row.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/kate.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/key.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/preferences-desktop-display.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/runexplain.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/runscript.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/runsql.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/setnull.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/snapshot.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/sqliteman.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/system.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/system-search.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/table.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/trigger.png"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/icons/view.png"
    )
endif()

