// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "PropertyDefinitionBase.pypp.hpp"

namespace bp = boost::python;

struct PropertyDefinitionBase_wrapper : CEGUI::PropertyDefinitionBase, bp::wrapper< CEGUI::PropertyDefinitionBase > {

    PropertyDefinitionBase_wrapper(::CEGUI::String const & name, ::CEGUI::String const & help, ::CEGUI::String const & initialValue, bool redrawOnWrite, bool layoutOnWrite, ::CEGUI::String const & fireEvent, ::CEGUI::String const & eventNamespace)
    : CEGUI::PropertyDefinitionBase(boost::ref(name), boost::ref(help), boost::ref(initialValue), redrawOnWrite, layoutOnWrite, boost::ref(fireEvent), boost::ref(eventNamespace))
    , bp::wrapper< CEGUI::PropertyDefinitionBase >() {
        // constructor

    }

    virtual void writeDefinitionXMLAttributes(::CEGUI::XMLSerializer & xml_stream) const {
        if (bp::override func_writeDefinitionXMLAttributes = this->get_override("writeDefinitionXMLAttributes"))
            func_writeDefinitionXMLAttributes(boost::ref(xml_stream));
        else {
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes(boost::ref(xml_stream));
        }
    }

    virtual void default_writeDefinitionXMLAttributes(::CEGUI::XMLSerializer & xml_stream) const {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes(boost::ref(xml_stream));
    }

    virtual void writeDefinitionXMLElementType(::CEGUI::XMLSerializer & xml_stream) const {
        bp::override func_writeDefinitionXMLElementType = this->get_override("writeDefinitionXMLElementType");
        func_writeDefinitionXMLElementType(boost::ref(xml_stream));
    }

    virtual void writeDefinitionXMLToStream(::CEGUI::XMLSerializer & xml_stream) const {
        if (bp::override func_writeDefinitionXMLToStream = this->get_override("writeDefinitionXMLToStream"))
            func_writeDefinitionXMLToStream(boost::ref(xml_stream));
        else {
            this->CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream(boost::ref(xml_stream));
        }
    }

    void default_writeDefinitionXMLToStream(::CEGUI::XMLSerializer & xml_stream) const {
        CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream(boost::ref(xml_stream));
    }

};

void register_PropertyDefinitionBase_class() {

    { //::CEGUI::PropertyDefinitionBase
        typedef bp::class_< PropertyDefinitionBase_wrapper, boost::noncopyable > PropertyDefinitionBase_exposer_t;
        PropertyDefinitionBase_exposer_t PropertyDefinitionBase_exposer = PropertyDefinitionBase_exposer_t("PropertyDefinitionBase", "*!\n\
        \n\
            common base class used for types representing a new property to be\n\
            available on all widgets that use the WidgetLook that the property\n\
            definition is a part of.\n\
        *\n", bp::init < CEGUI::String const &, CEGUI::String const &, CEGUI::String const &, bool, bool, CEGUI::String const &, CEGUI::String const & >((bp::arg("name"), bp::arg("help"), bp::arg("initialValue"), bp::arg("redrawOnWrite"), bp::arg("layoutOnWrite"), bp::arg("fireEvent"), bp::arg("eventNamespace"))));
        bp::scope PropertyDefinitionBase_scope(PropertyDefinitionBase_exposer);
        { //::CEGUI::PropertyDefinitionBase::getEventFiredOnWrite

            typedef ::CEGUI::String const & (::CEGUI::PropertyDefinitionBase::*getEventFiredOnWrite_function_type)() const;

            PropertyDefinitionBase_exposer.def(
                    "getEventFiredOnWrite"
                    , getEventFiredOnWrite_function_type(&::CEGUI::PropertyDefinitionBase::getEventFiredOnWrite)
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::PropertyDefinitionBase::getEventNamespace

            typedef ::CEGUI::String const & (::CEGUI::PropertyDefinitionBase::*getEventNamespace_function_type)() const;

            PropertyDefinitionBase_exposer.def(
                    "getEventNamespace"
                    , getEventNamespace_function_type(&::CEGUI::PropertyDefinitionBase::getEventNamespace)
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::PropertyDefinitionBase::getHelpString

            typedef ::CEGUI::String const & (::CEGUI::PropertyDefinitionBase::*getHelpString_function_type)() const;

            PropertyDefinitionBase_exposer.def(
                    "getHelpString"
                    , getHelpString_function_type(&::CEGUI::PropertyDefinitionBase::getHelpString)
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::PropertyDefinitionBase::getInitialValue

            typedef ::CEGUI::String const & (::CEGUI::PropertyDefinitionBase::*getInitialValue_function_type)() const;

            PropertyDefinitionBase_exposer.def(
                    "getInitialValue"
                    , getInitialValue_function_type(&::CEGUI::PropertyDefinitionBase::getInitialValue)
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::PropertyDefinitionBase::getPropertyName

            typedef ::CEGUI::String const & (::CEGUI::PropertyDefinitionBase::*getPropertyName_function_type)() const;

            PropertyDefinitionBase_exposer.def(
                    "getPropertyName"
                    , getPropertyName_function_type(&::CEGUI::PropertyDefinitionBase::getPropertyName)
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::PropertyDefinitionBase::isLayoutOnWrite

            typedef bool ( ::CEGUI::PropertyDefinitionBase::*isLayoutOnWrite_function_type)() const;

            PropertyDefinitionBase_exposer.def(
                    "isLayoutOnWrite"
                    , isLayoutOnWrite_function_type(&::CEGUI::PropertyDefinitionBase::isLayoutOnWrite));

        }
        { //::CEGUI::PropertyDefinitionBase::isRedrawOnWrite

            typedef bool ( ::CEGUI::PropertyDefinitionBase::*isRedrawOnWrite_function_type)() const;

            PropertyDefinitionBase_exposer.def(
                    "isRedrawOnWrite"
                    , isRedrawOnWrite_function_type(&::CEGUI::PropertyDefinitionBase::isRedrawOnWrite));

        }
        { //::CEGUI::PropertyDefinitionBase::setEventFiredOnWrite

            typedef void ( ::CEGUI::PropertyDefinitionBase::*setEventFiredOnWrite_function_type)(::CEGUI::String const &);

            PropertyDefinitionBase_exposer.def(
                    "setEventFiredOnWrite"
                    , setEventFiredOnWrite_function_type(&::CEGUI::PropertyDefinitionBase::setEventFiredOnWrite)
                    , (bp::arg("eventName")));

        }
        { //::CEGUI::PropertyDefinitionBase::setEventNamespace

            typedef void ( ::CEGUI::PropertyDefinitionBase::*setEventNamespace_function_type)(::CEGUI::String const &);

            PropertyDefinitionBase_exposer.def(
                    "setEventNamespace"
                    , setEventNamespace_function_type(&::CEGUI::PropertyDefinitionBase::setEventNamespace)
                    , (bp::arg("eventNamespace")));

        }
        { //::CEGUI::PropertyDefinitionBase::setHelpString

            typedef void ( ::CEGUI::PropertyDefinitionBase::*setHelpString_function_type)(::CEGUI::String const &);

            PropertyDefinitionBase_exposer.def(
                    "setHelpString"
                    , setHelpString_function_type(&::CEGUI::PropertyDefinitionBase::setHelpString)
                    , (bp::arg("help")));

        }
        { //::CEGUI::PropertyDefinitionBase::setInitialValue

            typedef void ( ::CEGUI::PropertyDefinitionBase::*setInitialValue_function_type)(::CEGUI::String const &);

            PropertyDefinitionBase_exposer.def(
                    "setInitialValue"
                    , setInitialValue_function_type(&::CEGUI::PropertyDefinitionBase::setInitialValue)
                    , (bp::arg("value")));

        }
        { //::CEGUI::PropertyDefinitionBase::setLayoutOnWrite

            typedef void ( ::CEGUI::PropertyDefinitionBase::*setLayoutOnWrite_function_type)(bool);

            PropertyDefinitionBase_exposer.def(
                    "setLayoutOnWrite"
                    , setLayoutOnWrite_function_type(&::CEGUI::PropertyDefinitionBase::setLayoutOnWrite)
                    , (bp::arg("value")));

        }
        { //::CEGUI::PropertyDefinitionBase::setPropertyName

            typedef void ( ::CEGUI::PropertyDefinitionBase::*setPropertyName_function_type)(::CEGUI::String const &);

            PropertyDefinitionBase_exposer.def(
                    "setPropertyName"
                    , setPropertyName_function_type(&::CEGUI::PropertyDefinitionBase::setPropertyName)
                    , (bp::arg("name")));

        }
        { //::CEGUI::PropertyDefinitionBase::setRedrawOnWrite

            typedef void ( ::CEGUI::PropertyDefinitionBase::*setRedrawOnWrite_function_type)(bool);

            PropertyDefinitionBase_exposer.def(
                    "setRedrawOnWrite"
                    , setRedrawOnWrite_function_type(&::CEGUI::PropertyDefinitionBase::setRedrawOnWrite)
                    , (bp::arg("value")));

        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLAttributes

            typedef void ( PropertyDefinitionBase_wrapper::*writeDefinitionXMLAttributes_function_type)(::CEGUI::XMLSerializer &) const;

            PropertyDefinitionBase_exposer.def(
                    "writeDefinitionXMLAttributes"
                    , writeDefinitionXMLAttributes_function_type(&PropertyDefinitionBase_wrapper::default_writeDefinitionXMLAttributes)
                    , (bp::arg("xml_stream"))
                    , "*!\n\
                \n\
                    Write out any xml attributes added in a sub-class.  Note that you\n\
                    should not write the closing '>' character sequence, nor any other\n\
                    information in this function.  You should always call the base class\n\
                    implementation of this function when overriding.\n\
            \n\
                @param xml_stream\n\
                    XMLSerializer where xml data should be output.\n\
                *\n");

        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLElementType

            typedef void ( PropertyDefinitionBase_wrapper::*writeDefinitionXMLElementType_function_type)(::CEGUI::XMLSerializer &) const;

            PropertyDefinitionBase_exposer.def(
                    "writeDefinitionXMLElementType"
                    , writeDefinitionXMLElementType_function_type(&PropertyDefinitionBase_wrapper::writeDefinitionXMLElementType)
                    , (bp::arg("xml_stream"))
                    , "*!\n\
                \n\
                    Write out the text of the XML element type.  Note that you should\n\
                    not write the opening '<' character, nor any other information such\n\
                    as attributes in this function.  The writeExtraAttributes function\n\
                    can be used for writing attributes.\n\
            \n\
                @param xml_stream\n\
                    XMLSerializer where xml data should be output.\n\
                *\n");

        }
        { //::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream

            typedef void ( ::CEGUI::PropertyDefinitionBase::*writeDefinitionXMLToStream_function_type)(::CEGUI::XMLSerializer &) const;
            typedef void ( PropertyDefinitionBase_wrapper::*default_writeDefinitionXMLToStream_function_type)(::CEGUI::XMLSerializer &) const;

            PropertyDefinitionBase_exposer.def(
                    "writeDefinitionXMLToStream"
                    , writeDefinitionXMLToStream_function_type(&::CEGUI::PropertyDefinitionBase::writeDefinitionXMLToStream)
                    , default_writeDefinitionXMLToStream_function_type(&PropertyDefinitionBase_wrapper::default_writeDefinitionXMLToStream)
                    , (bp::arg("xml_stream")));

        }
    }

}
