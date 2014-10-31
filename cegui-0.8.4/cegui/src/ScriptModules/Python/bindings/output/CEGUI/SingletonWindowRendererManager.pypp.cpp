// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "SingletonWindowRendererManager.pypp.hpp"

namespace bp = boost::python;

void register_SingletonWindowRendererManager_class() {

    { //::CEGUI::Singleton< CEGUI::WindowRendererManager >
        typedef bp::class_< CEGUI::Singleton< CEGUI::WindowRendererManager >, boost::noncopyable > SingletonWindowRendererManager_exposer_t;
        SingletonWindowRendererManager_exposer_t SingletonWindowRendererManager_exposer = SingletonWindowRendererManager_exposer_t("SingletonWindowRendererManager", bp::init< >());
        bp::scope SingletonWindowRendererManager_scope(SingletonWindowRendererManager_exposer);
        { //::CEGUI::Singleton< CEGUI::WindowRendererManager >::getSingleton

            typedef CEGUI::Singleton< CEGUI::WindowRendererManager > exported_class_t;
            typedef ::CEGUI::WindowRendererManager & (*getSingleton_function_type)();

            SingletonWindowRendererManager_exposer.def(
                    "getSingleton"
                    , getSingleton_function_type(&::CEGUI::Singleton< CEGUI::WindowRendererManager >::getSingleton)
                    , bp::return_value_policy< bp::reference_existing_object >());

        }
        SingletonWindowRendererManager_exposer.staticmethod("getSingleton");
    }

}
