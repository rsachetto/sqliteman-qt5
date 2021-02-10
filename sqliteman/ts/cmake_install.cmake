# Install script for directory: /home/sachetto/sqliteman-1.2.2/sqliteman/ts

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
   "/usr/local/share/sqliteman/sqliteman_en.qm;/usr/local/share/sqliteman/sqliteman_bg.qm;/usr/local/share/sqliteman/sqliteman_cs.qm;/usr/local/share/sqliteman/sqliteman_de.qm;/usr/local/share/sqliteman/sqliteman_fr.qm;/usr/local/share/sqliteman/sqliteman_it.qm;/usr/local/share/sqliteman/sqliteman_pl.qm;/usr/local/share/sqliteman/sqliteman_ru.qm")
  if(CMAKE_WARN_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(WARNING "ABSOLUTE path INSTALL DESTINATION : ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
  if(CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION)
    message(FATAL_ERROR "ABSOLUTE path INSTALL DESTINATION forbidden (by caller): ${CMAKE_ABSOLUTE_DESTINATION_FILES}")
  endif()
file(INSTALL DESTINATION "/usr/local/share/sqliteman" TYPE FILE FILES
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_en.qm"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_bg.qm"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_cs.qm"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_de.qm"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_fr.qm"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_it.qm"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_pl.qm"
    "/home/sachetto/sqliteman-1.2.2/sqliteman/ts/sqliteman_ru.qm"
    )
endif()

