// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "SingletonLogger.pypp.hpp"

namespace bp = boost::python;

void register_SingletonLogger_class() {

    { //::CEGUI::Singleton< CEGUI::Logger >
        typedef bp::class_< CEGUI::Singleton< CEGUI::Logger >, boost::noncopyable > SingletonLogger_exposer_t;
        SingletonLogger_exposer_t SingletonLogger_exposer = SingletonLogger_exposer_t("SingletonLogger", bp::init< >());
        bp::scope SingletonLogger_scope(SingletonLogger_exposer);
        { //::CEGUI::Singleton< CEGUI::Logger >::getSingleton

            typedef CEGUI::Singleton< CEGUI::Logger > exported_class_t;
            typedef ::CEGUI::Logger & (*getSingleton_function_type)();

            SingletonLogger_exposer.def(
                    "getSingleton"
                    , getSingleton_function_type(&::CEGUI::Singleton< CEGUI::Logger >::getSingleton)
                    , bp::return_value_policy< bp::reference_existing_object >());

        }
        SingletonLogger_exposer.staticmethod("getSingleton");
    }

}
