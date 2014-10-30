# Install script for directory: D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src

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
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/lib/libCEGUIBase-0_d.dll.a")
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/bin/libCEGUIBase-0_d.dll")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libCEGUIBase-0_d.dll" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libCEGUIBase-0_d.dll")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "C:/MinGW/bin/strip.exe" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/libCEGUIBase-0_d.dll")
    endif()
  endif()
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cegui-0/CEGUI" TYPE FILE FILES
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Affector.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Animation.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/AnimationInstance.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/AnimationManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Animation_xmlHandler.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Base.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/BasicImage.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/BasicRenderedStringParser.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/BidiVisualMapping.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/BoundSlot.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/CEGUI.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/CentredRenderedString.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ChainedXMLHandler.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Clipboard.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Colour.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ColourRect.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/CompositeResourceProvider.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Config.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Config_xmlHandler.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/CoordConverter.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/DataContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/DefaultLogger.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/DefaultRenderedStringParser.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/DefaultResourceProvider.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/DynamicModule.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Element.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Event.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/EventArgs.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/EventSet.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Exceptions.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FactoryModule.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FactoryRegisterer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Font.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FontGlyph.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FontManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Font_xmlHandler.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FormattedRenderedString.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ForwardRefs.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FreeFunctionSlot.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FreeTypeFont.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FribidiVisualMapping.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FunctorCopySlot.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FunctorPointerSlot.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FunctorReferenceBinder.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/FunctorReferenceSlot.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/GeometryBuffer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/GlobalEventSet.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/GUIContext.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/GUILayout_xmlHandler.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/IconvStringTranscoder.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Image.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ImageCodec.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ImageFactory.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ImageManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/InjectedInputReceiver.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/InputEvent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Interpolator.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/IteratorBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/JustifiedRenderedString.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/KeyFrame.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/LeftAlignedRenderedString.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/LinkedEvent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Logger.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MemberFunctionSlot.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MemoryAllocatedObject.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MemoryAllocation.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MemoryOgreAllocator.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MemoryStdAllocator.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MemorySTLWrapper.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MinibidiVisualMapping.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MinizipResourceProvider.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ModuleConfig.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/MouseCursor.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/NamedElement.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/NamedXMLResourceManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/PCRERegexMatcher.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/PixmapFont.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Property.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/PropertyHelper.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/PropertySet.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Quaternion.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Rect.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RefCounted.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RegexMatcher.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderedString.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderedStringComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderedStringImageComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderedStringParser.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderedStringTextComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderedStringWidgetComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderedStringWordWrapper.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderEffect.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderEffectFactory.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderEffectManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Renderer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderingContext.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderingSurface.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderingWindow.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderQueue.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RenderTarget.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ResourceProvider.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/RightAlignedRenderedString.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Scheme.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/SchemeManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Scheme_xmlHandler.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ScriptModule.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/SimpleTimer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Singleton.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Size.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/SlotFunctorBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/String.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/StringTranscoder.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/SubscriberSlot.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/System.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/SystemKeys.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Texture.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TextureTarget.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TextUtils.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplInterpolators.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplProperty.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplWindowFactory.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplWindowFactoryRegisterer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplWindowProperty.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplWindowRendererFactory.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplWindowRendererProperty.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TplWRFactoryRegisterer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/TypedProperty.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/UDim.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Vector.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Version.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Vertex.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Win32StringTranscoder.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Window.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/WindowFactory.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/WindowFactoryManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/WindowManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/WindowRenderer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/WindowRendererManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/XMLAttributes.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/XMLHandler.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/XMLParser.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/XMLSerializer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Config.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/ModuleConfig.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/Version.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cegui-0/CEGUI/widgets" TYPE FILE FILES
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/All.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ButtonBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ClippedContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Combobox.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ComboDropList.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/DefaultWindow.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/DragContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Editbox.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/FrameWindow.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/GridLayoutContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/GroupBox.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/HorizontalLayoutContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ItemEntry.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ItemListBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ItemListbox.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/LayoutCell.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/LayoutContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Listbox.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ListboxItem.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ListboxTextItem.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ListHeader.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ListHeaderSegment.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Menubar.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/MenuBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/MenuItem.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/MultiColumnList.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/MultiLineEditbox.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/PopupMenu.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ProgressBar.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/PushButton.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/RadioButton.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ScrollablePane.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Scrollbar.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ScrolledContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ScrolledItemListBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/SequentialLayoutContainer.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Slider.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Spinner.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/TabButton.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/TabControl.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Thumb.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Titlebar.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/ToggleButton.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Tooltip.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/Tree.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/TreeItem.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/widgets/VerticalLayoutContainer.h"
    )
endif()

if(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/cegui-0/CEGUI/falagard" TYPE FILE FILES
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/ComponentBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/Dimensions.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/Enums.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/EventAction.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/EventLinkDefinition.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/FalagardPropertyBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/FormattingSetting.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/FrameComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/ImageryComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/ImagerySection.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/LayerSpecification.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/NamedArea.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/NamedDefinitionCollator.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/PropertyDefinition.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/PropertyDefinitionBase.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/PropertyInitialiser.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/PropertyLinkDefinition.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/SectionSpecification.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/StateImagery.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/TextComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/WidgetComponent.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/WidgetLookFeel.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/WidgetLookManager.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/XMLEnumHelper.h"
    "D:/projekat/CEGUI/CEGUI-Stripped/cegui-0.8.4/cegui/src/../include/CEGUI/falagard/XMLHandler.h"
    )
endif()

