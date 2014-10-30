# Install script for directory: D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/cmake_install.cmake")
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/RendererModules/cmake_install.cmake")
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/XMLParserModules/cmake_install.cmake")
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/ImageCodecModules/cmake_install.cmake")
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/WindowRendererSets/cmake_install.cmake")
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/ScriptModules/cmake_install.cmake")
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/CommonDialogs/cmake_install.cmake")
  include("D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/datafiles/cmake_install.cmake")

endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

file(WRITE "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/${CMAKE_INSTALL_MANIFEST}" "")
foreach(file ${CMAKE_INSTALL_MANIFEST_FILES})
  file(APPEND "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/${CMAKE_INSTALL_MANIFEST}" "${file}\n")
endforeach()
