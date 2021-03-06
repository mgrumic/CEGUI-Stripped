// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "ImagePropertyDim.pypp.hpp"

namespace bp = boost::python;

struct ImagePropertyDim_wrapper : CEGUI::ImagePropertyDim, bp::wrapper< CEGUI::ImagePropertyDim > {

    ImagePropertyDim_wrapper(CEGUI::ImagePropertyDim const & arg)
    : CEGUI::ImagePropertyDim(arg)
    , bp::wrapper< CEGUI::ImagePropertyDim >() {
        // copy constructor

    }

    ImagePropertyDim_wrapper()
    : CEGUI::ImagePropertyDim()
    , bp::wrapper< CEGUI::ImagePropertyDim >() {
        // null constructor

    }

    ImagePropertyDim_wrapper(::CEGUI::String const & property_name, ::CEGUI::DimensionType dim)
    : CEGUI::ImagePropertyDim(boost::ref(property_name), dim)
    , bp::wrapper< CEGUI::ImagePropertyDim >() {
        // constructor

    }

    virtual ::CEGUI::BaseDim * clone() const {
        if (bp::override func_clone = this->get_override("clone"))
            return func_clone();
        else {
            return this->CEGUI::ImagePropertyDim::clone();
        }
    }

    ::CEGUI::BaseDim * default_clone() const {
        return CEGUI::ImagePropertyDim::clone();
    }

    virtual ::CEGUI::Image const * getSourceImage(::CEGUI::Window const & wnd) const {
        if (bp::override func_getSourceImage = this->get_override("getSourceImage"))
            return func_getSourceImage(boost::ref(wnd));
        else {
            return this->CEGUI::ImagePropertyDim::getSourceImage(boost::ref(wnd));
        }
    }

    virtual ::CEGUI::Image const * default_getSourceImage(::CEGUI::Window const & wnd) const {
        return CEGUI::ImagePropertyDim::getSourceImage(boost::ref(wnd));
    }

    virtual void writeXMLElementAttributes_impl(::CEGUI::XMLSerializer & xml_stream) const {
        if (bp::override func_writeXMLElementAttributes_impl = this->get_override("writeXMLElementAttributes_impl"))
            func_writeXMLElementAttributes_impl(boost::ref(xml_stream));
        else {
            this->CEGUI::ImagePropertyDim::writeXMLElementAttributes_impl(boost::ref(xml_stream));
        }
    }

    virtual void default_writeXMLElementAttributes_impl(::CEGUI::XMLSerializer & xml_stream) const {
        CEGUI::ImagePropertyDim::writeXMLElementAttributes_impl(boost::ref(xml_stream));
    }

    virtual void writeXMLElementName_impl(::CEGUI::XMLSerializer & xml_stream) const {
        if (bp::override func_writeXMLElementName_impl = this->get_override("writeXMLElementName_impl"))
            func_writeXMLElementName_impl(boost::ref(xml_stream));
        else {
            this->CEGUI::ImagePropertyDim::writeXMLElementName_impl(boost::ref(xml_stream));
        }
    }

    virtual void default_writeXMLElementName_impl(::CEGUI::XMLSerializer & xml_stream) const {
        CEGUI::ImagePropertyDim::writeXMLElementName_impl(boost::ref(xml_stream));
    }

    virtual bool handleFontRenderSizeChange(::CEGUI::Window & window, ::CEGUI::Font const * font) const {
        if (bp::override func_handleFontRenderSizeChange = this->get_override("handleFontRenderSizeChange"))
            return func_handleFontRenderSizeChange(boost::ref(window), boost::python::ptr(font));
        else {
            return this->CEGUI::BaseDim::handleFontRenderSizeChange(boost::ref(window), boost::python::ptr(font));
        }
    }

    bool default_handleFontRenderSizeChange(::CEGUI::Window & window, ::CEGUI::Font const * font) const {
        return CEGUI::BaseDim::handleFontRenderSizeChange(boost::ref(window), boost::python::ptr(font));
    }

    virtual void writeXMLToStream(::CEGUI::XMLSerializer & xml_stream) const {
        if (bp::override func_writeXMLToStream = this->get_override("writeXMLToStream"))
            func_writeXMLToStream(boost::ref(xml_stream));
        else {
            this->CEGUI::BaseDim::writeXMLToStream(boost::ref(xml_stream));
        }
    }

    void default_writeXMLToStream(::CEGUI::XMLSerializer & xml_stream) const {
        CEGUI::BaseDim::writeXMLToStream(boost::ref(xml_stream));
    }

};

void register_ImagePropertyDim_class() {

    { //::CEGUI::ImagePropertyDim
        typedef bp::class_< ImagePropertyDim_wrapper > ImagePropertyDim_exposer_t;
        ImagePropertyDim_exposer_t ImagePropertyDim_exposer = ImagePropertyDim_exposer_t("ImagePropertyDim", "! ImageDimBase subclass that accesses an image fetched via a property.\n", bp::init< >());
        bp::scope ImagePropertyDim_scope(ImagePropertyDim_exposer);
        ImagePropertyDim_exposer.def(bp::init< CEGUI::String const &, CEGUI::DimensionType >((bp::arg("property_name"), bp::arg("dim")), "*!\n\
            \n\
                Constructor.\n\
        \n\
            @param property_name\n\
                String holding the name of the property on the target that will be\n\
                accessed to retrieve the name of the image to be accessed by the\n\
                ImageDim.\n\
        \n\
            @param dim\n\
                DimensionType value indicating which dimension of an Image that\n\
                this ImageDim is to represent.\n\
            *\n"));
        { //::CEGUI::ImagePropertyDim::clone

            typedef ::CEGUI::BaseDim * (::CEGUI::ImagePropertyDim::*clone_function_type)() const;
            typedef ::CEGUI::BaseDim * (ImagePropertyDim_wrapper::*default_clone_function_type)() const;

            ImagePropertyDim_exposer.def(
                    "clone"
                    , clone_function_type(&::CEGUI::ImagePropertyDim::clone)
                    , default_clone_function_type(&ImagePropertyDim_wrapper::default_clone)
                    , bp::return_value_policy< bp::reference_existing_object >());

        }
        { //::CEGUI::ImagePropertyDim::getSourceImage

            typedef ::CEGUI::Image const * (ImagePropertyDim_wrapper::*getSourceImage_function_type)(::CEGUI::Window const &) const;

            ImagePropertyDim_exposer.def(
                    "getSourceImage"
                    , getSourceImage_function_type(&ImagePropertyDim_wrapper::default_getSourceImage)
                    , (bp::arg("wnd"))
                    , bp::return_value_policy< bp::reference_existing_object >()
                    , "Implementation  overrides of functions in superclasses\n");

        }
        { //::CEGUI::ImagePropertyDim::getSourceProperty

            typedef ::CEGUI::String const & (::CEGUI::ImagePropertyDim::*getSourceProperty_function_type)() const;

            ImagePropertyDim_exposer.def(
                    "getSourceProperty"
                    , getSourceProperty_function_type(&::CEGUI::ImagePropertyDim::getSourceProperty)
                    , bp::return_value_policy< bp::copy_const_reference >()
                    , "! return the name of the property accessed by this ImagePropertyDim.\n");

        }
        { //::CEGUI::ImagePropertyDim::setSourceProperty

            typedef void ( ::CEGUI::ImagePropertyDim::*setSourceProperty_function_type)(::CEGUI::String const &);

            ImagePropertyDim_exposer.def(
                    "setSourceProperty"
                    , setSourceProperty_function_type(&::CEGUI::ImagePropertyDim::setSourceProperty)
                    , (bp::arg("property_name"))
                    , "! return the name of the property accessed by this ImagePropertyDim.\n\
            ! set the name of the property accessed by this ImagePropertyDim.\n");

        }
        { //::CEGUI::ImagePropertyDim::writeXMLElementAttributes_impl

            typedef void ( ImagePropertyDim_wrapper::*writeXMLElementAttributes_impl_function_type)(::CEGUI::XMLSerializer &) const;

            ImagePropertyDim_exposer.def(
                    "writeXMLElementAttributes_impl"
                    , writeXMLElementAttributes_impl_function_type(&ImagePropertyDim_wrapper::default_writeXMLElementAttributes_impl)
                    , (bp::arg("xml_stream")));

        }
        { //::CEGUI::ImagePropertyDim::writeXMLElementName_impl

            typedef void ( ImagePropertyDim_wrapper::*writeXMLElementName_impl_function_type)(::CEGUI::XMLSerializer &) const;

            ImagePropertyDim_exposer.def(
                    "writeXMLElementName_impl"
                    , writeXMLElementName_impl_function_type(&ImagePropertyDim_wrapper::default_writeXMLElementName_impl)
                    , (bp::arg("xml_stream"))
                    , "Implementation  overrides of functions in superclasses\n");

        }
        { //::CEGUI::BaseDim::handleFontRenderSizeChange

            typedef bool ( ::CEGUI::BaseDim::*handleFontRenderSizeChange_function_type)(::CEGUI::Window &, ::CEGUI::Font const *) const;
            typedef bool ( ImagePropertyDim_wrapper::*default_handleFontRenderSizeChange_function_type)(::CEGUI::Window &, ::CEGUI::Font const *) const;

            ImagePropertyDim_exposer.def(
                    "handleFontRenderSizeChange"
                    , handleFontRenderSizeChange_function_type(&::CEGUI::BaseDim::handleFontRenderSizeChange)
                    , default_handleFontRenderSizeChange_function_type(&ImagePropertyDim_wrapper::default_handleFontRenderSizeChange)
                    , (bp::arg("window"), bp::arg("font")));

        }
        { //::CEGUI::BaseDim::writeXMLToStream

            typedef void ( ::CEGUI::BaseDim::*writeXMLToStream_function_type)(::CEGUI::XMLSerializer &) const;
            typedef void ( ImagePropertyDim_wrapper::*default_writeXMLToStream_function_type)(::CEGUI::XMLSerializer &) const;

            ImagePropertyDim_exposer.def(
                    "writeXMLToStream"
                    , writeXMLToStream_function_type(&::CEGUI::BaseDim::writeXMLToStream)
                    , default_writeXMLToStream_function_type(&ImagePropertyDim_wrapper::default_writeXMLToStream)
                    , (bp::arg("xml_stream")));

        }
    }

}
