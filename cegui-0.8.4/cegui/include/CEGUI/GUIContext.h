/***********************************************************************
    created:    Mon Jan 12 2009
    author:     Paul D Turner
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2012 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#ifndef _CEGUIGUIContext_h_
#define _CEGUIGUIContext_h_

#include "CEGUI/RenderingSurface.h"
#include "CEGUI/InjectedInputReceiver.h"
#ifndef PE_NO_MOUSE
#include "CEGUI/MouseCursor.h"
#endif
#include "CEGUI/SystemKeys.h"

#if defined (_MSC_VER)
#   pragma warning(push)
#   pragma warning(disable : 4251)
#endif

namespace CEGUI
{
#ifndef PE_NO_MOUSE
struct MouseClickTracker;
#endif
//! EventArgs class passed to subscribers for (most) GUIContext events.
class CEGUIEXPORT GUIContextEventArgs : public EventArgs
{
public:
    GUIContextEventArgs(GUIContext* context):
        context(context)
    {}

    //! pointer to the GUIContext that triggered the event.
    GUIContext* context;
};

//! EventArgs class passed for GUIContext RenderTarget related events.
class CEGUIEXPORT GUIContextRenderTargetEventArgs : public GUIContextEventArgs
{
public:
    GUIContextRenderTargetEventArgs(GUIContext* context, RenderTarget* target) :
        GUIContextEventArgs(context),
        renderTarget(target)
    {}

    RenderTarget* renderTarget;
};

class CEGUIEXPORT GUIContext : public RenderingSurface,
                               public InjectedInputReceiver
{
public:
#ifndef PE_NO_MOUSE
    static const float DefaultMouseButtonClickTimeout;
    static const float DefaultMouseButtonMultiClickTimeout;
    static const Sizef DefaultMouseButtonMultiClickTolerance;
#endif
    /** Name of Event fired when the root window is changed to a different
     * Window.
     * Handlers are passed a const WindowEventArgs reference with
     * WindowEventArgs::window set to the @e old root window (the new one is
     * obtained by calling GUIContext::getRootWindow).
     */
    static const String EventRootWindowChanged;
#ifndef PE_NO_MOUSE
    /** Name of Event fired when the mouse movement scaling factor is changed.
     * Handlers are passed a const reference to a GUIContextEventArgs struct.
     */
    static const String EventMouseMoveScalingFactorChanged;
    /** Name of Event fired when the mouse click timeout is changed.
     * Handlers are passed a const reference to a GUIContextEventArgs struct.
     */
    static const String EventMouseButtonClickTimeoutChanged;
    /** Name of Event fired when the mouse multi-click timeout is changed.
     * Handlers are passed a const reference to a GUIContextEventArgs struct.
     */
    static const String EventMouseButtonMultiClickTimeoutChanged;
    /** Name of Event fired when the mouse multi-click movement tolerance area
     * size is changed.
     * Handlers are passed a const reference to a GUIContextEventArgs struct.
     */
    static const String EventMouseButtonMultiClickToleranceChanged;
    /** Name of Event fired when the RenderTarget for the GUIContext is changed.
     * Handlers are passed a const GUIContextRenderTargetEventArgs struct, with
     * the renderTarget member set to the old RenderTarget.
     */
#endif
    static const String EventRenderTargetChanged;
    /** Event fired when the default font changes.
     * Handlers are passed a const reference to a generic EventArgs struct.
     */
	static const String EventDefaultFontChanged;

    GUIContext(RenderTarget& target);
    ~GUIContext();

    Window* getRootWindow() const;
    void setRootWindow(Window* new_root);

    /*!
    \brief
        Internal function to directly set the current modal window.

    \note
        This function is called internally by Window, and should not be called
        by client code.  Doing so will likely not give the expected results.
    */
    void setModalWindow(Window* window);

    //! Return a pointer to the Window that is currently set as modal.
    Window* getModalWindow() const;
#ifndef PE_NO_MOUSE
    Window* getWindowContainingMouse() const;
#endif
    const Sizef& getSurfaceSize() const;

    const SystemKeys& getSystemKeys() const;

    //! call to indicate that some redrawing is required.
    void markAsDirty();
    bool isDirty() const;

    /*!
    \brief
        Retrieves MouseCursor used in this GUIContext

    \note
        Please note that each GUIContext has exactly one MouseCursor. The MouseCursor
        class holds position, as well as other properties. If you want to modify
        the MouseCursor (for example change its default image), you can retrieve
        a reference via this method and call a method on the reference
        (in our example that's setDefaultImage).
    */
#ifndef PE_NO_MOUSE
    MouseCursor& getMouseCursor();
    const MouseCursor& getMouseCursor() const;

    void setMouseMoveScalingFactor(float factor);
    float getMouseMoveScalingFactor() const;

    void setMouseButtonClickTimeout(float seconds);
    float getMouseButtonClickTimeout() const;

    void setMouseButtonMultiClickTimeout(float seconds);
    float getMouseButtonMultiClickTimeout() const;

    void setMouseButtonMultiClickTolerance(const Sizef& sz);
    const Sizef& getMouseButtonMultiClickTolerance() const;

    /*!
    \brief
        Set whether automatic mouse button click and multi-click (i.e.
        double-click and treble-click) event generation will occur.

    \param enable
        - true to have mouse button click and multi-click events automatically
        generated by the system from the basic button up and down event
        injections.
        - false if no automatic generation of events should occur.  In this
        instance the user may wish to use the additional event injectors to
        manually inform the system of such events.
    */
    void setMouseClickEventGenerationEnabled(const bool enable);

    /*!
    \brief
        Return whether automatic mouse button click and multi-click (i.e.
        double-click and treble-click) event generation is enabled.

    \return
        - true if mouse button click and multi-click events will be
        automatically generated by the system from the basic button up and down
        event injections.
        - false if no automatic generation of events will occur.  In this
        instance the user may wish to use the additional event injectors to
        manually inform the system of such events.
    */
    bool isMouseClickEventGenerationEnabled() const;

    //! Tell the context to reconsider which window it thinks the mouse is in.
    void updateWindowContainingMouse();
#endif //PE_NO_MOUSE
    Window* getInputCaptureWindow() const;
    void setInputCaptureWindow(Window* window);

#ifndef PE_NO_MOUSE
    /*!
    \brief
        Set the default Tooltip object for this GUIContext. This value may be 0
        to indicate that no default Tooltip object will be available.

    \param tooltip
        Pointer to a valid Tooltip based object which should be used as the
        default tooltip for the GUIContext, or 0 to indicate that no default
        Tooltip is required.

    \note
        When passing a pointer to a Tooltip object, ownership of the Tooltip
        does not pass to the GUIContext.
    */
    void setDefaultTooltipObject(Tooltip* tooltip);

    /*!
    \brief
        Set the default Tooltip to be used by specifying a Window type.

        The GUIContext will internally attempt to create an instance of the
        specified window type (which must be derived from the base Tooltip
        class).  If the Tooltip creation fails, the error is logged and no
        default Tooltip will be available on the GUIContext.

    \param tooltipType
        String holding the name of a Tooltip based Window type.
    */
    void setDefaultTooltipType(const String& tooltip_type);

    //! Returns a pointer to the context's default tooltip object.  May return 0.
    Tooltip* getDefaultTooltipObject() const;
#endif //PE_NO_MOUSE

    void setRenderTarget(RenderTarget& target);

    /*!
    \brief
        Set the default font to be used by the GUIContext

    \param name
        String object containing the name of the font to be used as the
        default for this GUIContext
    */
    void setDefaultFont(const String& name);

    /*!
    \brief
        Set the default font to be used by the GUIContext

    \param font
        Pointer to the font to be used as the default for this GUIContext.
    */
    void setDefaultFont(Font* font);

    /*!
    \brief
        Return a pointer to the default Font for the GUIContext

    \return
        Pointer to a Font object that is the default for this GUIContext.
    */
    Font* getDefaultFont() const;

    // Implementation of InjectedInputReceiver interface
    
    bool injectKeyDown(Key::Scan scan_code);
    bool injectKeyUp(Key::Scan scan_code);
    bool injectChar(String::value_type code_point);
    bool injectTimePulse(float timeElapsed);
#ifndef PE_NO_CLIPBOARD
    bool injectCopyRequest();
    bool injectCutRequest();
    bool injectPasteRequest();
#endif  // PE_NO_CLIPBOARD
#ifndef PE_NO_MOUSE
    bool injectMouseMove(float delta_x, float delta_y);
    bool injectMouseLeaves(void);
    bool injectMouseButtonDown(MouseButton button);
    bool injectMouseButtonUp(MouseButton button);    
    bool injectMouseWheelChange(float delta);
    bool injectMousePosition(float x_pos, float y_pos);
    bool injectMouseButtonClick(const MouseButton button);
    bool injectMouseButtonDoubleClick(const MouseButton button);
    bool injectMouseButtonTripleClick(const MouseButton button);
#endif
    // public overrides
    void draw();

protected:
    void updateRootWindowAreaRects() const;
    void drawWindowContentToTarget();
    void renderWindowHierarchyToSurfaces();

#ifndef PE_NO_MOUSE
    void createDefaultTooltipWindowInstance() const;
    void destroyDefaultTooltipWindowInstance();
#endif //PE_NO_MOUSE

    //! notify windows in a hierarchy using default font, when font changes.
    void notifyDefaultFontChanged(Window* hierarchy_root) const;
#ifndef PE_NO_MOUSE
    bool mouseMoveInjection_impl(MouseEventArgs& ma);
    //! call some function for a chain of windows: (top, bottom]
    void notifyMouseTransition(Window* top, Window* bottom,
        void (Window::*func)(MouseEventArgs&),
        MouseEventArgs& args) const;
    //! returns whether the window containing the mouse had changed.
    bool updateWindowContainingMouse_impl() const;
    void resetWindowContainingMouse();
    virtual void onMouseMoveScalingFactorChanged(GUIContextEventArgs& args);
    virtual void onMouseButtonClickTimeoutChanged(GUIContextEventArgs& args);
    virtual void onMouseButtonMultiClickTimeoutChanged(GUIContextEventArgs& args);
    virtual void onMouseButtonMultiClickToleranceChanged(GUIContextEventArgs& args);
#endif

    Window* getTargetWindow(const Vector2f& pt, const bool allow_disabled) const;
    Window* getKeyboardTargetWindow() const;
    Window* getCommonAncestor(Window* w1, Window* w2) const;
    
    bool areaChangedHandler(const EventArgs& args);
    bool windowDestroyedHandler(const EventArgs& args);
    
    

    // event trigger functions.
    virtual void onRootWindowChanged(WindowEventArgs& args);
    
    virtual void onRenderTargetChanged(GUIContextRenderTargetEventArgs& args);
    virtual void onDefaultFontChanged(EventArgs& args);

    // protected overrides
    void drawContent();

    Window* d_rootWindow;
    bool d_isDirty;
#ifndef PE_NO_MOUSE
    MouseCursor d_mouseCursor;

    //! Scaling factor applied to injected mouse move deltas.
    float d_mouseMovementScalingFactor;
    //! should mouse click/multi-click events be automatically generated.
    bool d_generateMouseClickEvents;
    //! Timeout used to when detecting a single-click.
    float d_mouseButtonClickTimeout;
    //! Timeout used when detecting multi-click events.
    float d_mouseButtonMultiClickTimeout;
    //! Movement tolerance used when detecting multi-click events.
    Sizef d_mouseButtonMultiClickTolerance;
    mutable Window* d_windowContainingMouse;
    mutable bool    d_windowContainingMouseIsUpToDate;
    MouseClickTracker* d_mouseClickTrackers;

    mutable Tooltip* d_defaultTooltipObject;
    mutable bool d_weCreatedTooltipObject;
    String d_defaultTooltipType;
#endif

    Font* d_defaultFont;

    //! a cache of the target surface size, allows returning by ref.
    Sizef d_surfaceSize;

   
    Window* d_modalWindow;
    Window* d_captureWindow;

    SystemKeys d_systemKeys;
    

    Event::ScopedConnection d_areaChangedEventConnection;
    Event::ScopedConnection d_windowDestroyedEventConnection;
};

}

#if defined(_MSC_VER)
#   pragma warning(pop)
#endif

#endif

