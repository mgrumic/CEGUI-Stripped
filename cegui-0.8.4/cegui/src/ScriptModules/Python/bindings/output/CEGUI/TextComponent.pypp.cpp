// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "TextComponent.pypp.hpp"

namespace bp = boost::python;

struct TextComponent_wrapper : CEGUI::TextComponent, bp::wrapper< CEGUI::TextComponent > {

    TextComponent_wrapper()
    : CEGUI::TextComponent()
    , bp::wrapper< CEGUI::TextComponent >() {
        // null constructor

    }

    TextComponent_wrapper(::CEGUI::TextComponent const & obj)
    : CEGUI::TextComponent(boost::ref(obj))
    , bp::wrapper< CEGUI::TextComponent >() {
        // copy constructor

    }

    ::CEGUI::Font const * getFontObject(::CEGUI::Window const & window) const {
        return CEGUI::TextComponent::getFontObject(boost::ref(window));
    }

    virtual bool handleFontRenderSizeChange(::CEGUI::Window & window, ::CEGUI::Font const * font) const {
        if (bp::override func_handleFontRenderSizeChange = this->get_override("handleFontRenderSizeChange"))
            return func_handleFontRenderSizeChange(boost::ref(window), boost::python::ptr(font));
        else {
            return this->CEGUI::TextComponent::handleFontRenderSizeChange(boost::ref(window), boost::python::ptr(font));
        }
    }

    bool default_handleFontRenderSizeChange(::CEGUI::Window & window, ::CEGUI::Font const * font) const {
        return CEGUI::TextComponent::handleFontRenderSizeChange(boost::ref(window), boost::python::ptr(font));
    }

    virtual void render_impl(::CEGUI::Window & srcWindow, ::CEGUI::Rectf & destRect, ::CEGUI::ColourRect const * modColours, ::CEGUI::Rectf const * clipper, bool clipToDisplay) const {
        if (bp::override func_render_impl = this->get_override("render_impl"))
            func_render_impl(boost::ref(srcWindow), boost::ref(destRect), boost::python::ptr(modColours), boost::python::ptr(clipper), clipToDisplay);
        else {
            this->CEGUI::TextComponent::render_impl(boost::ref(srcWindow), boost::ref(destRect), boost::python::ptr(modColours), boost::python::ptr(clipper), clipToDisplay);
        }
    }

    virtual void default_render_impl(::CEGUI::Window & srcWindow, ::CEGUI::Rectf & destRect, ::CEGUI::ColourRect const * modColours, ::CEGUI::Rectf const * clipper, bool clipToDisplay) const {
        CEGUI::TextComponent::render_impl(boost::ref(srcWindow), boost::ref(destRect), boost::python::ptr(modColours), boost::python::ptr(clipper), clipToDisplay);
    }

    void setupStringFormatter(::CEGUI::Window const & window, ::CEGUI::RenderedString const & rendered_string) const {
        CEGUI::TextComponent::setupStringFormatter(boost::ref(window), boost::ref(rendered_string));
    }

    void initColoursRect(::CEGUI::Window const & wnd, ::CEGUI::ColourRect const * modCols, ::CEGUI::ColourRect & cr) const {
        CEGUI::FalagardComponentBase::initColoursRect(boost::ref(wnd), boost::python::ptr(modCols), boost::ref(cr));
    }

    bool writeColoursXML(::CEGUI::XMLSerializer & xml_stream) const {
        return CEGUI::FalagardComponentBase::writeColoursXML(boost::ref(xml_stream));
    }

};

void register_TextComponent_class() {

    { //::CEGUI::TextComponent
        typedef bp::class_< TextComponent_wrapper, bp::bases< CEGUI::FalagardComponentBase > > TextComponent_exposer_t;
        TextComponent_exposer_t TextComponent_exposer = TextComponent_exposer_t("TextComponent", "*!\n\
        \n\
            Class that encapsulates information for a text component.\n\
        *\n", bp::init< >());
        bp::scope TextComponent_scope(TextComponent_exposer);
        TextComponent_exposer.def(bp::init< CEGUI::TextComponent const & >((bp::arg("obj"))));
        { //::CEGUI::TextComponent::getEffectiveFont

            typedef ::CEGUI::String(::CEGUI::TextComponent::*getEffectiveFont_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getEffectiveFont"
                    , getEffectiveFont_function_type(&::CEGUI::TextComponent::getEffectiveFont)
                    , (bp::arg("wnd"))
                    , "*\n\
            \n\
                Return a copy of the name of the font that will actually be used\n\
                when rendering this TextComponent.\n\
            *\n");

        }
        { //::CEGUI::TextComponent::getEffectiveText

            typedef ::CEGUI::String(::CEGUI::TextComponent::*getEffectiveText_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getEffectiveText"
                    , getEffectiveText_function_type(&::CEGUI::TextComponent::getEffectiveText)
                    , (bp::arg("wnd"))
                    , "*\n\
            \n\
                Return a copy of the actual text string that will be used when\n\
                rendering this TextComponent.\n\
            *\n");

        }
        { //::CEGUI::TextComponent::getEffectiveVisualText

            typedef ::CEGUI::String(::CEGUI::TextComponent::*getEffectiveVisualText_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getEffectiveVisualText"
                    , getEffectiveVisualText_function_type(&::CEGUI::TextComponent::getEffectiveVisualText)
                    , (bp::arg("wnd"))
                    , "*\n\
            \n\
                Return a copy of the actual text - with visual ordering - that\n\
                will be used when rendering this TextComponent.\n\
            *\n");

        }
        { //::CEGUI::TextComponent::getFont

            typedef ::CEGUI::String const & (::CEGUI::TextComponent::*getFont_function_type)() const;

            TextComponent_exposer.def(
                    "getFont"
                    , getFont_function_type(&::CEGUI::TextComponent::getFont)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                    \n\
                        Return the name of the font set to be used when rendering this\n\
                        TextComponent.\n\
            \n\
                    \note\n\
                        This returns the name of the font set directly to the TextComponent,\n\
                        which may or may not be the actual font that will be used -\n\
                        since the actual font may be sourced from a property or the main\n\
                        font setting on a window that the TextComponent is rendered to, or\n\
                        the default font. To get the actual font name that will be used,\n\
                        call the getEffectiveFont function instead.\n\
            \n\
                    @return\n\
                        String object containing the name of a font\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::getFontObject

            typedef ::CEGUI::Font const * (TextComponent_wrapper::*getFontObject_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getFontObject"
                    , getFontObject_function_type(&TextComponent_wrapper::getFontObject)
                    , (bp::arg("window"))
                    , bp::return_value_policy< bp::reference_existing_object >()
                    , "! helper to get the font object to use\n");

        }
        { //::CEGUI::TextComponent::getFontPropertySource

            typedef ::CEGUI::String const & (::CEGUI::TextComponent::*getFontPropertySource_function_type)() const;

            TextComponent_exposer.def(
                    "getFontPropertySource"
                    , getFontPropertySource_function_type(&::CEGUI::TextComponent::getFontPropertySource)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                    \n\
                        Return the name of the property that will be used to determine the font to use for\
                        rendering\n\
                        the text string for this TextComponent.\n\
            \n\
                    @return\n\
                        String object holding the name of a Propery.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::getHorizontalFormatting

            typedef ::CEGUI::HorizontalTextFormatting(::CEGUI::TextComponent::*getHorizontalFormatting_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getHorizontalFormatting"
                    , getHorizontalFormatting_function_type(&::CEGUI::TextComponent::getHorizontalFormatting)
                    , (bp::arg("wnd"))
                    , "*!\n\
                    \n\
                        Return the current horizontal formatting setting for this TextComponent.\n\
            \n\
                    @return\n\
                        One of the HorizontalTextFormatting enumerated values.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::getHorizontalTextExtent

            typedef float ( ::CEGUI::TextComponent::*getHorizontalTextExtent_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getHorizontalTextExtent"
                    , getHorizontalTextExtent_function_type(&::CEGUI::TextComponent::getHorizontalTextExtent)
                    , (bp::arg("window"))
                    , "! return the horizontal pixel extent of the formatted rendered string.\n");

        }
        { //::CEGUI::TextComponent::getText

            typedef ::CEGUI::String const & (::CEGUI::TextComponent::*getText_function_type)() const;

            TextComponent_exposer.def(
                    "getText"
                    , getText_function_type(&::CEGUI::TextComponent::getText)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                    \n\
                        Return the text set for this TextComponent.\n\
            \n\
                    \note\n\
                        This returns the text string set directly to the TextComponent,\n\
                        which may or may not be the actual string that will be used -\n\
                        since the actual string may be sourced from a property or the main\n\
                        text string from a window that the TextComponent is rendered to.\n\
                        To get the actual string, call the getEffectiveText function\n\
                        instead.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::getTextPropertySource

            typedef ::CEGUI::String const & (::CEGUI::TextComponent::*getTextPropertySource_function_type)() const;

            TextComponent_exposer.def(
                    "getTextPropertySource"
                    , getTextPropertySource_function_type(&::CEGUI::TextComponent::getTextPropertySource)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                    \n\
                        Return the name of the property that will be used to determine the text string to\
                        render\n\
                        for this TextComponent.\n\
            \n\
                    @return\n\
                        String object holding the name of a Propery.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::getTextVisual

            typedef ::CEGUI::String const & (::CEGUI::TextComponent::*getTextVisual_function_type)() const;

            TextComponent_exposer.def(
                    "getTextVisual"
                    , getTextVisual_function_type(&::CEGUI::TextComponent::getTextVisual)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "*!\n\
                    \n\
                        return text string with  e visual ordering of glyphs.\n\
            \n\
                    \note\n\
                        This returns the visual text derived from the string set directly to\n\
                        the TextComponent, which may or may not be the actual string that\n\
                        will be used - since the actual string may be sourced from a\n\
                        property or the main text string from a window that the\n\
                        TextComponent is rendered to. To get the actual visual string, call\n\
                        the getEffectiveVisualText function instead.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::getVerticalFormatting

            typedef ::CEGUI::VerticalTextFormatting(::CEGUI::TextComponent::*getVerticalFormatting_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getVerticalFormatting"
                    , getVerticalFormatting_function_type(&::CEGUI::TextComponent::getVerticalFormatting)
                    , (bp::arg("wnd"))
                    , "*!\n\
                    \n\
                        Return the current vertical formatting setting for this TextComponent.\n\
            \n\
                    @return\n\
                        One of the VerticalTextFormatting enumerated values.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::getVerticalTextExtent

            typedef float ( ::CEGUI::TextComponent::*getVerticalTextExtent_function_type)(::CEGUI::Window const &) const;

            TextComponent_exposer.def(
                    "getVerticalTextExtent"
                    , getVerticalTextExtent_function_type(&::CEGUI::TextComponent::getVerticalTextExtent)
                    , (bp::arg("window"))
                    , "! return the vertical pixel extent of the formatted rendered string.\n");

        }
        { //::CEGUI::TextComponent::handleFontRenderSizeChange

            typedef bool ( ::CEGUI::TextComponent::*handleFontRenderSizeChange_function_type)(::CEGUI::Window &, ::CEGUI::Font const *) const;
            typedef bool ( TextComponent_wrapper::*default_handleFontRenderSizeChange_function_type)(::CEGUI::Window &, ::CEGUI::Font const *) const;

            TextComponent_exposer.def(
                    "handleFontRenderSizeChange"
                    , handleFontRenderSizeChange_function_type(&::CEGUI::TextComponent::handleFontRenderSizeChange)
                    , default_handleFontRenderSizeChange_function_type(&TextComponent_wrapper::default_handleFontRenderSizeChange)
                    , (bp::arg("window"), bp::arg("font")));

        }
        { //::CEGUI::TextComponent::isFontFetchedFromProperty

            typedef bool ( ::CEGUI::TextComponent::*isFontFetchedFromProperty_function_type)() const;

            TextComponent_exposer.def(
                    "isFontFetchedFromProperty"
                    , isFontFetchedFromProperty_function_type(&::CEGUI::TextComponent::isFontFetchedFromProperty)
                    , "*!\n\
                    \n\
                        Return whether this TextComponent fetches it's font via a property on the target\
                        window.\n\
            \n\
                    @return\n\
                        - true if the font comes via a Propery.\n\
                        - false if the font is defined explicitly, or will come from the target window.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::isTextFetchedFromProperty

            typedef bool ( ::CEGUI::TextComponent::*isTextFetchedFromProperty_function_type)() const;

            TextComponent_exposer.def(
                    "isTextFetchedFromProperty"
                    , isTextFetchedFromProperty_function_type(&::CEGUI::TextComponent::isTextFetchedFromProperty)
                    , "*!\n\
                    \n\
                        Return whether this TextComponent fetches it's text string via a property on the target\
                        window.\n\
            \n\
                    @return\n\
                        - true if the text string comes via a Propery.\n\
                        - false if the text string is defined explicitly, or will come from the target window.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::operator=

            typedef ::CEGUI::TextComponent & (::CEGUI::TextComponent::*assign_function_type)(::CEGUI::TextComponent const &);

            TextComponent_exposer.def(
                    "assign"
                    , assign_function_type(&::CEGUI::TextComponent::operator=)
                    , (bp::arg("other"))
                    , bp::return_self< >());

        }
        { //::CEGUI::TextComponent::render_impl

            typedef void ( TextComponent_wrapper::*render_impl_function_type)(::CEGUI::Window &, ::CEGUI::Rectf &, ::CEGUI::ColourRect const *, ::CEGUI::Rectf const *, bool) const;

            TextComponent_exposer.def(
                    "render_impl"
                    , render_impl_function_type(&TextComponent_wrapper::default_render_impl)
                    , (bp::arg("srcWindow"), bp::arg("destRect"), bp::arg("modColours"), bp::arg("clipper"), bp::arg("clipToDisplay"))
                    , "implemets abstract from base\n");

        }
        { //::CEGUI::TextComponent::setFont

            typedef void ( ::CEGUI::TextComponent::*setFont_function_type)(::CEGUI::String const &);

            TextComponent_exposer.def(
                    "setFont"
                    , setFont_function_type(&::CEGUI::TextComponent::setFont)
                    , (bp::arg("font"))
                    , "*!\n\
                    \n\
                        Set the name of a font to be used when rendering this TextComponent.\n\
            \n\
                    \note\n\
                        Setting this may not set the actual font that will be used\n\
                        when rendering the TextComponent.  The acutal font used will\n\
                        depend upon whether a font source property is set and whether the\n\
                        font name set here is set to the empty string or not.\n\
            \n\
                    @param font\n\
                        String containing name of a font\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::setFontPropertySource

            typedef void ( ::CEGUI::TextComponent::*setFontPropertySource_function_type)(::CEGUI::String const &);

            TextComponent_exposer.def(
                    "setFontPropertySource"
                    , setFontPropertySource_function_type(&::CEGUI::TextComponent::setFontPropertySource)
                    , (bp::arg("property"))
                    , "*!\n\
                    \n\
                        Set the name of the property that will be used to determine the font to use for\
                        rendering\n\
                        the text string of this TextComponent.\n\
            \n\
                    @param property\n\
                        String object holding the name of a Propery.  The property should access a valid font\
                        name.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::setHorizontalFormatting

            typedef void ( ::CEGUI::TextComponent::*setHorizontalFormatting_function_type)(::CEGUI::HorizontalTextFormatting);

            TextComponent_exposer.def(
                    "setHorizontalFormatting"
                    , setHorizontalFormatting_function_type(&::CEGUI::TextComponent::setHorizontalFormatting)
                    , (bp::arg("fmt"))
                    , "*!\n\
                    \n\
                        Set the horizontal formatting setting for this TextComponent.\n\
            \n\
                    @param fmt\n\
                        One of the HorizontalTextFormatting enumerated values.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::setHorizontalFormattingPropertySource

            typedef void ( ::CEGUI::TextComponent::*setHorizontalFormattingPropertySource_function_type)(::CEGUI::String const &);

            TextComponent_exposer.def(
                    "setHorizontalFormattingPropertySource"
                    , setHorizontalFormattingPropertySource_function_type(&::CEGUI::TextComponent::setHorizontalFormattingPropertySource)
                    , (bp::arg("property_name"))
                    , "*!\n\
            \n\
                Set the name of a property that will be used to obtain the horizontal\n\
                formatting to use for this ImageryComponent.\n\
            *\n");

        }
        { //::CEGUI::TextComponent::setText

            typedef void ( ::CEGUI::TextComponent::*setText_function_type)(::CEGUI::String const &);

            TextComponent_exposer.def(
                    "setText"
                    , setText_function_type(&::CEGUI::TextComponent::setText)
                    , (bp::arg("text"))
                    , "*!\n\
                    \n\
                        Set the text string for this TextComponent.\n\
            \n\
                    \note\n\
                        Setting this string may not set the actual string that will be used\n\
                        when rendering the TextComponent.  The acutal string used will\n\
                        depend upon whether a text source property is set and whether this\n\
                        string is set to the empty string or not.\n\
            \n\
                    @param text\n\
                        String containing text to set on the TextComponent.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::setTextPropertySource

            typedef void ( ::CEGUI::TextComponent::*setTextPropertySource_function_type)(::CEGUI::String const &);

            TextComponent_exposer.def(
                    "setTextPropertySource"
                    , setTextPropertySource_function_type(&::CEGUI::TextComponent::setTextPropertySource)
                    , (bp::arg("property"))
                    , "*!\n\
                    \n\
                        Set the name of the property that will be used to determine the text string to render\n\
                        for this TextComponent.\n\
            \n\
                    @param property\n\
                        String object holding the name of a Propery.  The property can contain any text string\
                        to render.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::setVerticalFormatting

            typedef void ( ::CEGUI::TextComponent::*setVerticalFormatting_function_type)(::CEGUI::VerticalTextFormatting);

            TextComponent_exposer.def(
                    "setVerticalFormatting"
                    , setVerticalFormatting_function_type(&::CEGUI::TextComponent::setVerticalFormatting)
                    , (bp::arg("fmt"))
                    , "*!\n\
                    \n\
                        Set the vertical formatting setting for this TextComponent.\n\
            \n\
                    @param fmt\n\
                        One of the VerticalTextFormatting enumerated values.\n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n");

        }
        { //::CEGUI::TextComponent::setVerticalFormattingPropertySource

            typedef void ( ::CEGUI::TextComponent::*setVerticalFormattingPropertySource_function_type)(::CEGUI::String const &);

            TextComponent_exposer.def(
                    "setVerticalFormattingPropertySource"
                    , setVerticalFormattingPropertySource_function_type(&::CEGUI::TextComponent::setVerticalFormattingPropertySource)
                    , (bp::arg("property_name"))
                    , "*!\n\
            \n\
                Set the name of a property that will be used to obtain the vertical\n\
                formatting to use for this ImageryComponent.\n\
            *\n");

        }
        { //::CEGUI::TextComponent::setupStringFormatter

            typedef void ( TextComponent_wrapper::*setupStringFormatter_function_type)(::CEGUI::Window const &, ::CEGUI::RenderedString const &) const;

            TextComponent_exposer.def(
                    "setupStringFormatter"
                    , setupStringFormatter_function_type(&TextComponent_wrapper::setupStringFormatter)
                    , (bp::arg("window"), bp::arg("rendered_string"))
                    , "! helper to set up an appropriate FormattedRenderedString\n");

        }
        { //::CEGUI::TextComponent::writeXMLToStream

            typedef void ( ::CEGUI::TextComponent::*writeXMLToStream_function_type)(::CEGUI::XMLSerializer &) const;

            TextComponent_exposer.def(
                    "writeXMLToStream"
                    , writeXMLToStream_function_type(&::CEGUI::TextComponent::writeXMLToStream)
                    , (bp::arg("xml_stream"))
                    , "*!\n\
                    \n\
                        Writes an xml representation of this TextComponent to  out_stream.\n\
            \n\
                    @param xml_stream\n\
                        Stream where xml data should be output.\n\
            \n\
            \n\
                    @return\n\
                        Nothing.\n\
                    *\n");

        }
        { //::CEGUI::FalagardComponentBase::initColoursRect

            typedef void ( TextComponent_wrapper::*initColoursRect_function_type)(::CEGUI::Window const &, ::CEGUI::ColourRect const *, ::CEGUI::ColourRect &) const;

            TextComponent_exposer.def(
                    "initColoursRect"
                    , initColoursRect_function_type(&TextComponent_wrapper::initColoursRect)
                    , (bp::arg("wnd"), bp::arg("modCols"), bp::arg("cr")));

        }
        { //::CEGUI::FalagardComponentBase::writeColoursXML

            typedef bool ( TextComponent_wrapper::*writeColoursXML_function_type)(::CEGUI::XMLSerializer &) const;

            TextComponent_exposer.def(
                    "writeColoursXML"
                    , writeColoursXML_function_type(&TextComponent_wrapper::writeColoursXML)
                    , (bp::arg("xml_stream"))
                    , "*!\n\
                \n\
                    Writes xml for the colours to a OutStream.\n\
                    Will prefer property colours before explicit.\n\
            \n\
                \note\n\
                    This is intended as a helper function for sub-classes when outputting\n\
                    xml to a stream.\n\
            \n\
                @return\n\
                    - true if xml element was written.\n\
                    - false if nothing was output due to the formatting not being set\n\
                      (sub-class may then choose to do something else.)\n\
                *\n");

        }
    }

}
