/***********************************************************************
    created:    Wed Jun 22 2005
    author:     Paul D Turner <paul@cegui.org.uk>
 *************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2006 Paul D Turner & The CEGUI Development Team
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
#include "CEGUI/WindowRendererSets/Core/Button.h"
#include "CEGUI/falagard/WidgetLookManager.h"
#include "CEGUI/falagard/WidgetLookFeel.h"

// Start of CEGUI namespace section
namespace CEGUI {
    const String FalagardButton::TypeName("Core/Button");

    FalagardButton::FalagardButton(const String& type) :
    WindowRenderer(type) {
    }

    void FalagardButton::render() {
        ButtonBase* w = (ButtonBase*) d_window;
#ifndef PE_NO_LOOK_FEEL
        const WidgetLookFeel& wlf = getLookNFeel();
#endif //PE_NO_LOOK_FEEL        

        bool norm = false;
        String state;

        if (w->isEffectiveDisabled()) {
            state = "Disabled";
        } else if (w->isPushed()) {
            state =
#ifndef PE_NO_MOUSE
                    w->isHovering() ?
#endif //PE_NO_MOUSE
                    "Pushed"
#ifndef PE_NO_MOUSE
                    : "PushedOff"
#endif //PE_NO_MOUSE
                    ;
        }
#ifndef PE_NO_MOUSE
        else if (w->isHovering()) {
            state = "Hover";
        }
#endif //PE_NO_MOUSE
        else {
            state = "Normal";
            norm = true;
        }
#ifndef PE_NO_LOOK_FEEL
        if (!norm && !wlf.isStateImageryPresent(actualStateName(state))) {
            state = "Normal";
        }

        wlf.getStateImagery(actualStateName(state)).render(*w);
#endif //PE_NO_LOOK_FEEL   
    }

} // End of  CEGUI namespace section
