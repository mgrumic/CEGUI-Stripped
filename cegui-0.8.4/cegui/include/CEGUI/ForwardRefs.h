/***********************************************************************
created: 21/2/2004
author: Paul D Turner
purpose: Forward declares all core system classes
 *************************************************************************/
/***************************************************************************
 * Copyright (C) 2004 - 2009 Paul D Turner & The CEGUI Development Team
 *
 * Permission is hereby granted, free of charge, to any person obtaining
 * a copy of this software and associated documentation files (the
 * "Software"), to deal in the Software without restriction, including
 * without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to
 * permit persons to whom the Software is furnished to do so, subject to
 * the following conditions:
 *
 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 * OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 * ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 * OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#ifndef _CEGUIForwardRefs_h_
#define _CEGUIForwardRefs_h_

#include "Base.h"


// Start of CEGUI namespace section
namespace CEGUI {
    /*************************************************************************
    Forward declare majority of core classes
     *************************************************************************/
#ifndef PE_NO_ANIMATION
    class Affector;
    class Animation;
    class AnimationInstance;
    class AnimationManager;
#endif //PE_NO_ANIMATION
    class BasicRenderedStringParser;
    class BidiVisualMapping;
    class CentredRenderedString;
    class Clipboard;
    class Colour;
    class ColourRect;
    class CoordConverter;
#ifndef PE_NO_LOGGER
    class DefaultLogger;
#endif //PE_NO_LOGGER
    class DefaultRenderedStringParser;
    class DefaultResourceProvider;
    class DynamicModule;
    class Element;
    class ElementEventArgs;
    class Event;
    class EventAction;
    class EventArgs;
    class EventSet;
    class Exception;
    class FactoryModule;
    class Font;
#ifndef PE_NO_FONT_GLYPH
    class FontGlyph;
#endif //PE_NO_FONT_GLYPH
    class FontManager;
    class FormattedRenderedString;
    class GeometryBuffer;
    class GlobalEventSet;
    class GUIContext;
    class Image;
    class ImageCodec;
    class ImageManager;
    class ImagerySection;
    class Interpolator;
    class JustifiedRenderedString;
    class KeyFrame;
    class LeftAlignedRenderedString;
    class LinkedEvent;
    class LinkedEventArgs;
#ifndef PE_NO_LOGGER
    class Logger;
#endif //PE_NO_LOGGER
    class MouseCursor;
    class NamedElement;
    class NamedElementEventArgs;
    class NativeClipboardProvider;
    class Property;
    template<typename T> class PropertyHelper;
    class PropertyReceiver;
    class PropertySet;
#ifndef PE_NO_QUATERNION
    class Quaternion;
#endif //PE_NO_QUATERNION
    class RawDataContainer;
    template<typename T> class Rect;
    class RegexMatcher;
    class RenderedString;
    class RenderedStringComponent;
    class RenderedStringImageComponent;
    class RenderedStringParser;
    class RenderedStringTextComponent;
    class RenderedStringWidgetComponent;
    class Renderer;
#ifndef PE_NO_RENDEREFFECT
    class RenderEffect;
#endif //PE_NO_RENDEREFFECT
    class RenderEffectManager;
    struct RenderingContext;
    class RenderingSurface;
    class RenderingWindow;
    class RenderQueue;
    class RenderTarget;
    class ResourceEventSet;
    class ResourceProvider;
    class RightAlignedRenderedString;
    class Scheme;
    class SchemeManager;
    class ScriptFunctor;
    class ScriptModule;
    template<typename T> class Size;
    class SimpleTimer;
    class StringTranscoder;
    class System;
    class SystemKeys;
    class Texture;
    class TextureTarget;
    class TextUtils;
    class UBox;
    class UDim;
    template<typename T> class Vector2;
#ifndef PE_NO_VECTOR3D
    template<typename T> class Vector3;
#endif  // PE_NO_VECTOR3D
    struct Vertex;
    class WidgetLookFeel;
    class Window;
    class WindowFactory;
    class WindowFactoryManager;
    class WindowManager;
    class WindowRenderer;
    class WindowRendererModule;
    class WRFactoryRegisterer;
    class XMLAttributes;
    class XMLHandler;
    class XMLParser;
    class XMLSerializer;
    /*************************************************************************
    Forward declare window / widget classes.
     *************************************************************************/
    class ButtonBase;
#ifndef PE_NO_WGT_CLIPPED_CONTAINER
    class ClippedContainer;
#endif //PE_NO_WGT_CLIPPED_CONTAINER
#ifndef PE_NO_WGT_COMBOBOX
    class Combobox;
#endif //PE_NO_WGT_COMBOBOX
#ifndef PE_NO_WGT_COMBODROPLIST
    class ComboDropList;
#endif // PE_NO_WGT_COMBODROPLIST
    class DefaultWindow;
#ifndef PE_NO_MOUSE 
    class DragContainer;
#endif //PE_NO_MOUSE 
    class Editbox;
    class FrameWindow;
    class GridLayoutContainer;
    class HorizontalLayoutContainer;
    class ItemEntry;
    class ItemListBase;
    class ItemListbox;
    class LayoutContainer;
    class Listbox;
    class ListboxItem;
    class ListboxTextItem;
    class ListHeader;
    class ListHeaderSegment;
    class Menubar;
    class MenuBase;
    class MenuItem;
    class MultiColumnList;
#ifndef PE_NO_WGT_MULTILINE_EDITBOX
    class MultiLineEditbox;
#endif //PE_NO_WGT_MULTILINE_EDITBOX
#ifndef PE_NO_POPUP_MENU_H
    class PopupMenu;
#endif // PE_NO_POPUP_MENU_H
#ifndef PE_NO_WGT_PROGRESS_BAR
    class ProgressBar;
#endif //PE_NO_WGT_PROGRESS_BAR
    class PushButton;
#ifndef PE_NO_WGT_RADIOBUTTON
    class RadioButton;
#endif //PE_NO_WGT_RADIOBUTTON
    class ScrollablePane;
    class Scrollbar;
    class ScrolledContainer;
    class ScrolledItemListBase;
    class SequentialLayoutContainer;
#ifndef PE_NO_WGT_SLIDER
    class Slider;
#endif // PE_NO_WGT_SLIDER
#ifndef PE_NO_WGT_SPINNER
    class Spinner;
#endif //PE_NO_WGT_SPINNER
#ifndef PE_NO_WGT_TAB_CONTROL
    class TabButton;
    class TabControl;
#endif //PE_NO_WGT_TAB_CONTROL
    class Thumb;
    class Titlebar;
    class ToggleButton;
    class Tooltip;
#ifndef PE_NO_WGT_TREE
    class Tree;
    class TreeItem;
#endif //PE_NO_WGT_TREE
    class VerticalLayoutContainer;
    /*************************************************************************
    Forward declare EventArg based classes.
     *************************************************************************/
    class ActivationEventArgs;
    class DisplayEventArgs;
    class DragDropEventArgs;
    class FontEventArgs;
    class GUIContextEventArgs;
    class HeaderSequenceEventArgs;
    class KeyEventArgs;
    class MouseCursorEventArgs;
    class MouseEventArgs;
#ifndef PE_NO_REGEX_MATCHER
    class RegexMatchStateArgs;
#endif //PE_NO_REGEX_MATCHER
    class RenderQueueEventArgs;
    class RenderTargetEventArgs;
    class ResourceEventArgs;
#ifndef PE_NO_WGT_TREE
    class TreeEventArgs;
#endif //PE_NO_WGT_TREE
    class UpdateEventArgs;
    class WindowEventArgs;

} // End of  CEGUI namespace section

#endif	// end of guard _CEGUIForwardRefs_h_

