// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "AnimationEventArgs.pypp.hpp"

namespace bp = boost::python;

struct AnimationEventArgs_wrapper : CEGUI::AnimationEventArgs, bp::wrapper< CEGUI::AnimationEventArgs > {

    AnimationEventArgs_wrapper(CEGUI::AnimationEventArgs const & arg)
    : CEGUI::AnimationEventArgs(arg)
    , bp::wrapper< CEGUI::AnimationEventArgs >() {
        // copy constructor

    }

    AnimationEventArgs_wrapper(::CEGUI::AnimationInstance * inst)
    : CEGUI::AnimationEventArgs(boost::python::ptr(inst))
    , bp::wrapper< CEGUI::AnimationEventArgs >() {
        // constructor

    }

    static ::CEGUI::AnimationInstance * get_instance(CEGUI::AnimationEventArgs const & inst) {
        return inst.instance;
    }

    static void set_instance(CEGUI::AnimationEventArgs & inst, ::CEGUI::AnimationInstance * new_value) {
        inst.instance = new_value;
    }

};

void register_AnimationEventArgs_class() {

    { //::CEGUI::AnimationEventArgs
        typedef bp::class_< AnimationEventArgs_wrapper, bp::bases< CEGUI::EventArgs > > AnimationEventArgs_exposer_t;
        AnimationEventArgs_exposer_t AnimationEventArgs_exposer = AnimationEventArgs_exposer_t("AnimationEventArgs", "*!\n\
        \n\
            EventArgs based class that holds information about which animation instnace\n\
            fired given event.\n\
        *\n", bp::init< CEGUI::AnimationInstance * >((bp::arg("inst"))));
        bp::scope AnimationEventArgs_scope(AnimationEventArgs_exposer);
        bp::implicitly_convertible< CEGUI::AnimationInstance *, CEGUI::AnimationEventArgs >();
        AnimationEventArgs_exposer.add_property("instance"
                , bp::make_function((::CEGUI::AnimationInstance * (*)(::CEGUI::AnimationEventArgs const &))(&AnimationEventArgs_wrapper::get_instance), bp::return_internal_reference< >())
                , bp::make_function((void (*)(::CEGUI::AnimationEventArgs &, ::CEGUI::AnimationInstance *))(&AnimationEventArgs_wrapper::set_instance), bp::with_custodian_and_ward_postcall< 1, 2 >())
                , "! pointer to a AnimationInstance object of relevance to the event.\n");
    }

}
