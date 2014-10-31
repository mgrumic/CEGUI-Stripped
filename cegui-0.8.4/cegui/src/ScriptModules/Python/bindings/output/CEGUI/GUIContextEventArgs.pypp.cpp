// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "GUIContextEventArgs.pypp.hpp"

namespace bp = boost::python;

struct GUIContextEventArgs_wrapper : CEGUI::GUIContextEventArgs, bp::wrapper< CEGUI::GUIContextEventArgs > {

    GUIContextEventArgs_wrapper(CEGUI::GUIContextEventArgs const & arg)
    : CEGUI::GUIContextEventArgs(arg)
    , bp::wrapper< CEGUI::GUIContextEventArgs >() {
        // copy constructor

    }

    GUIContextEventArgs_wrapper(::CEGUI::GUIContext * context)
    : CEGUI::GUIContextEventArgs(boost::python::ptr(context))
    , bp::wrapper< CEGUI::GUIContextEventArgs >() {
        // constructor

    }

    static ::CEGUI::GUIContext * get_context(CEGUI::GUIContextEventArgs const & inst) {
        return inst.context;
    }

    static void set_context(CEGUI::GUIContextEventArgs & inst, ::CEGUI::GUIContext * new_value) {
        inst.context = new_value;
    }

};

void register_GUIContextEventArgs_class() {

    { //::CEGUI::GUIContextEventArgs
        typedef bp::class_< GUIContextEventArgs_wrapper, bp::bases< CEGUI::EventArgs > > GUIContextEventArgs_exposer_t;
        GUIContextEventArgs_exposer_t GUIContextEventArgs_exposer = GUIContextEventArgs_exposer_t("GUIContextEventArgs", "! EventArgs class passed to subscribers for (most) GUIContext events.\n", bp::init< CEGUI::GUIContext * >((bp::arg("context"))));
        bp::scope GUIContextEventArgs_scope(GUIContextEventArgs_exposer);
        bp::implicitly_convertible< CEGUI::GUIContext *, CEGUI::GUIContextEventArgs >();
        GUIContextEventArgs_exposer.add_property("context"
                , bp::make_function((::CEGUI::GUIContext * (*)(::CEGUI::GUIContextEventArgs const &))(&GUIContextEventArgs_wrapper::get_context), bp::return_internal_reference< >())
                , bp::make_function((void (*)(::CEGUI::GUIContextEventArgs &, ::CEGUI::GUIContext *))(&GUIContextEventArgs_wrapper::set_context), bp::with_custodian_and_ward_postcall< 1, 2 >())
                , "! pointer to the GUIContext that triggered the event.\n");
    }

}
