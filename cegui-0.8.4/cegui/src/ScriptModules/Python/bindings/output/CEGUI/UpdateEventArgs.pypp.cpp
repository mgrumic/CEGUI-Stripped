// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "UpdateEventArgs.pypp.hpp"

namespace bp = boost::python;

void register_UpdateEventArgs_class() {

    { //::CEGUI::UpdateEventArgs
        typedef bp::class_< CEGUI::UpdateEventArgs, bp::bases< CEGUI::WindowEventArgs > > UpdateEventArgs_exposer_t;
        UpdateEventArgs_exposer_t UpdateEventArgs_exposer = UpdateEventArgs_exposer_t("UpdateEventArgs", "*!\n\
        \n\
           WindowEventArgs class that is primarily used by lua scripts\n\
        *\n", bp::init< CEGUI::Window *, float >((bp::arg("window"), bp::arg("tslf"))));
        bp::scope UpdateEventArgs_scope(UpdateEventArgs_exposer);
        UpdateEventArgs_exposer.def_readwrite("d_timeSinceLastFrame", &CEGUI::UpdateEventArgs::d_timeSinceLastFrame);
    }

}
