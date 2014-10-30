# Install script for directory: D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/CommonDialogs

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/cegui")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
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

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/lib/libCEGUICommonDialogs-0_d.dll.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/bin/libCEGUICommonDialogs-0_d.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libCEGUICommonDialogs-0_d.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libCEGUICommonDialogs-0_d.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "C:/MinGW/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libCEGUICommonDialogs-0_d.dll")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cegui-0/CEGUI/CommonDialogs" TYPE FILE FILES "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/CommonDialogs/../../include/CEGUI/CommonDialogs/Module.h")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cegui-0/CEGUI/CommonDialogs/ColourPicker" TYPE FILE FILES
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/CommonDialogs/../../include/CEGUI/CommonDialogs/ColourPicker/ColourPicker.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/CommonDialogs/../../include/CEGUI/CommonDialogs/ColourPicker/Controls.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/CommonDialogs/../../include/CEGUI/CommonDialogs/ColourPicker/Conversions.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/CommonDialogs/../../include/CEGUI/CommonDialogs/ColourPicker/Types.h"
    )
endif()

