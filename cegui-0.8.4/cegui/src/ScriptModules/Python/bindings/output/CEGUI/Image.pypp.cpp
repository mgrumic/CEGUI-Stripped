// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "Image.pypp.hpp"

namespace bp = boost::python;

struct Image_wrapper : CEGUI::Image, bp::wrapper< CEGUI::Image > {

    Image_wrapper()
    : CEGUI::Image()
    , bp::wrapper< CEGUI::Image >() {
        // null constructor

    }

    virtual void elementEndLocal(::CEGUI::String const & element) {
        if (bp::override func_elementEndLocal = this->get_override("elementEndLocal"))
            func_elementEndLocal(boost::ref(element));
        else {
            this->CEGUI::Image::elementEndLocal(boost::ref(element));
        }
    }

    virtual void default_elementEndLocal(::CEGUI::String const & element) {
        CEGUI::Image::elementEndLocal(boost::ref(element));
    }

    virtual void elementStartLocal(::CEGUI::String const & element, ::CEGUI::XMLAttributes const & attributes) {
        if (bp::override func_elementStartLocal = this->get_override("elementStartLocal"))
            func_elementStartLocal(boost::ref(element), boost::ref(attributes));
        else {
            this->CEGUI::Image::elementStartLocal(boost::ref(element), boost::ref(attributes));
        }
    }

    virtual void default_elementStartLocal(::CEGUI::String const & element, ::CEGUI::XMLAttributes const & attributes) {
        CEGUI::Image::elementStartLocal(boost::ref(element), boost::ref(attributes));
    }

    virtual ::CEGUI::String const & getName() const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::Vector2f const & getRenderedOffset() const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual ::CEGUI::Sizef const & getRenderedSize() const {
        throw std::logic_error("warning W1049: This method could not be overriden in Python - method returns reference to local variable!");
    }

    virtual void notifyDisplaySizeChanged(::CEGUI::Sizef const & size) {
        bp::override func_notifyDisplaySizeChanged = this->get_override("notifyDisplaySizeChanged");
        func_notifyDisplaySizeChanged(boost::ref(size));
    }

    virtual void render(::CEGUI::GeometryBuffer & buffer, ::CEGUI::Rectf const & dest_area, ::CEGUI::Rectf const * clip_area, ::CEGUI::ColourRect const & colours) const {
        bp::override func_render = this->get_override("render");
        func_render(boost::ref(buffer), boost::ref(dest_area), boost::python::ptr(clip_area), boost::ref(colours));
    }

    virtual void text(::CEGUI::String const & text) {
        if (bp::override func_text = this->get_override("text"))
            func_text(boost::ref(text));
        else {
            this->CEGUI::XMLHandler::text(boost::ref(text));
        }
    }

    void default_text(::CEGUI::String const & text) {
        CEGUI::XMLHandler::text(boost::ref(text));
    }

};

void register_Image_class() {

    { //::CEGUI::Image
        typedef bp::class_< Image_wrapper, boost::noncopyable > Image_exposer_t;
        Image_exposer_t Image_exposer = Image_exposer_t("Image");
        bp::scope Image_scope(Image_exposer);
        { //::CEGUI::Image::computeScalingFactors

            typedef void ( *computeScalingFactors_function_type)(::CEGUI::AutoScaledMode, ::CEGUI::Sizef const &, ::CEGUI::Sizef const &, float &, float &);

            Image_exposer.def(
                    "computeScalingFactors"
                    , computeScalingFactors_function_type(&::CEGUI::Image::computeScalingFactors)
                    , (bp::arg("mode"), bp::arg("display_size"), bp::arg("native_display_size"), bp::arg("x_scale"), bp::arg("y_scale")));

        }
        { //::CEGUI::Image::elementEndLocal

            typedef void ( Image_wrapper::*elementEndLocal_function_type)(::CEGUI::String const &);

            Image_exposer.def(
                    "elementEndLocal"
                    , elementEndLocal_function_type(&Image_wrapper::default_elementEndLocal)
                    , (bp::arg("element")));

        }
        { //::CEGUI::Image::elementStartLocal

            typedef void ( Image_wrapper::*elementStartLocal_function_type)(::CEGUI::String const &, ::CEGUI::XMLAttributes const &);

            Image_exposer.def(
                    "elementStartLocal"
                    , elementStartLocal_function_type(&Image_wrapper::default_elementStartLocal)
                    , (bp::arg("element"), bp::arg("attributes"))
                    , "implement chained xml handler abstract interface\n");

        }
        { //::CEGUI::Image::getName

            typedef ::CEGUI::String const & (::CEGUI::Image::*getName_function_type)() const;

            Image_exposer.def(
                    "getName"
                    , bp::pure_virtual(getName_function_type(&::CEGUI::Image::getName))
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::Image::getRenderedOffset

            typedef ::CEGUI::Vector2f const & (::CEGUI::Image::*getRenderedOffset_function_type)() const;

            Image_exposer.def(
                    "getRenderedOffset"
                    , bp::pure_virtual(getRenderedOffset_function_type(&::CEGUI::Image::getRenderedOffset))
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::Image::getRenderedSize

            typedef ::CEGUI::Sizef const & (::CEGUI::Image::*getRenderedSize_function_type)() const;

            Image_exposer.def(
                    "getRenderedSize"
                    , bp::pure_virtual(getRenderedSize_function_type(&::CEGUI::Image::getRenderedSize))
                    , bp::return_value_policy< bp::copy_const_reference >());

        }
        { //::CEGUI::Image::notifyDisplaySizeChanged

            typedef void ( ::CEGUI::Image::*notifyDisplaySizeChanged_function_type)(::CEGUI::Sizef const &);

            Image_exposer.def(
                    "notifyDisplaySizeChanged"
                    , bp::pure_virtual(notifyDisplaySizeChanged_function_type(&::CEGUI::Image::notifyDisplaySizeChanged))
                    , (bp::arg("size")));

        }
        { //::CEGUI::Image::render

            typedef void ( ::CEGUI::Image::*render_function_type)(::CEGUI::GeometryBuffer &, ::CEGUI::Rectf const &, ::CEGUI::Rectf const *, ::CEGUI::ColourRect const &) const;

            Image_exposer.def(
                    "render"
                    , bp::pure_virtual(render_function_type(&::CEGUI::Image::render))
                    , (bp::arg("buffer"), bp::arg("dest_area"), bp::arg("clip_area"), bp::arg("colours")));

        }
        { //::CEGUI::Image::render

            typedef void ( ::CEGUI::Image::*render_function_type)(::CEGUI::GeometryBuffer &, ::CEGUI::Vector2f const &, ::CEGUI::Rectf const *) const;

            Image_exposer.def(
                    "render"
                    , render_function_type(&::CEGUI::Image::render)
                    , (bp::arg("buffer"), bp::arg("position"), bp::arg("clip_area") = bp::object()));

        }
        { //::CEGUI::Image::render

            typedef void ( ::CEGUI::Image::*render_function_type)(::CEGUI::GeometryBuffer &, ::CEGUI::Vector2f const &, ::CEGUI::Rectf const *, ::CEGUI::ColourRect const &) const;

            Image_exposer.def(
                    "render"
                    , render_function_type(&::CEGUI::Image::render)
                    , (bp::arg("buffer"), bp::arg("position"), bp::arg("clip_area"), bp::arg("colours")));

        }
        { //::CEGUI::Image::render

            typedef void ( ::CEGUI::Image::*render_function_type)(::CEGUI::GeometryBuffer &, ::CEGUI::Vector2f const &, ::CEGUI::Sizef const &, ::CEGUI::Rectf const *) const;

            Image_exposer.def(
                    "render"
                    , render_function_type(&::CEGUI::Image::render)
                    , (bp::arg("buffer"), bp::arg("position"), bp::arg("size"), bp::arg("clip_area") = bp::object()));

        }
        { //::CEGUI::Image::render

            typedef void ( ::CEGUI::Image::*render_function_type)(::CEGUI::GeometryBuffer &, ::CEGUI::Vector2f const &, ::CEGUI::Sizef const &, ::CEGUI::Rectf const *, ::CEGUI::ColourRect const &) const;

            Image_exposer.def(
                    "render"
                    , render_function_type(&::CEGUI::Image::render)
                    , (bp::arg("buffer"), bp::arg("position"), bp::arg("size"), bp::arg("clip_area"), bp::arg("colours")));

        }
        { //::CEGUI::XMLHandler::text

            typedef void ( ::CEGUI::XMLHandler::*text_function_type)(::CEGUI::String const &);
            typedef void ( Image_wrapper::*default_text_function_type)(::CEGUI::String const &);

            Image_exposer.def(
                    "text"
                    , text_function_type(&::CEGUI::XMLHandler::text)
                    , default_text_function_type(&Image_wrapper::default_text)
                    , (bp::arg("text")));

        }
        Image_exposer.staticmethod("computeScalingFactors");
    }

}
