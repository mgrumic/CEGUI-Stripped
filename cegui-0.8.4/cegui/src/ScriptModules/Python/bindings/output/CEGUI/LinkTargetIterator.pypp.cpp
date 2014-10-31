// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "LinkTargetIterator.pypp.hpp"

namespace bp = boost::python;

struct ConstVectorIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater___greater__wrapper : CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > >, bp::wrapper< CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > > > {

    ConstVectorIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater___greater__wrapper(CEGUI::ConstVectorIterator<std::vector<std::pair<CEGUI::String, CEGUI::String>, std::allocator<std::pair<CEGUI::String, CEGUI::String> > > > const & arg)
    : CEGUI::ConstVectorIterator<std::vector<std::pair<CEGUI::String, CEGUI::String>, std::allocator<std::pair<CEGUI::String, CEGUI::String> > > >(arg)
    , bp::wrapper< CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > > >() {
        // copy constructor

    }

    ConstVectorIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater___greater__wrapper()
    : CEGUI::ConstVectorIterator<std::vector<std::pair<CEGUI::String, CEGUI::String>, std::allocator<std::pair<CEGUI::String, CEGUI::String> > > >()
    , bp::wrapper< CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > > >() {
        // null constructor

    }

    virtual ::std::pair< CEGUI::String, CEGUI::String > getCurrentValue() const {
        if (bp::override func_getCurrentValue = this->get_override("getCurrentValue"))
            return func_getCurrentValue();
        else {
            return this->CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > >::getCurrentValue();
        }
    }

    ::std::pair< CEGUI::String, CEGUI::String > default_getCurrentValue() const {
        return CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > >::getCurrentValue();
    }

};

void Iterator_next(::CEGUI::ConstVectorIterator<std::vector<std::pair<CEGUI::String, CEGUI::String>, std::allocator<std::pair<CEGUI::String, CEGUI::String> > > >& t) {
    t++;
}

void Iterator_previous(::CEGUI::ConstVectorIterator<std::vector<std::pair<CEGUI::String, CEGUI::String>, std::allocator<std::pair<CEGUI::String, CEGUI::String> > > >& t) {
    t--;
}

void register_LinkTargetIterator_class() {

    { //::CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > >
        typedef bp::class_< ConstVectorIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater___greater__wrapper, bp::bases< CEGUI::ConstBaseIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> >, std::pair< CEGUI::String, CEGUI::String > > > > LinkTargetIterator_exposer_t;
        LinkTargetIterator_exposer_t LinkTargetIterator_exposer = LinkTargetIterator_exposer_t("LinkTargetIterator", bp::no_init);
        bp::scope LinkTargetIterator_scope(LinkTargetIterator_exposer);
        LinkTargetIterator_exposer.def(bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n"));
        { //::CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > >::getCurrentValue

            typedef CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > > exported_class_t;
            typedef ::std::pair< CEGUI::String, CEGUI::String > (exported_class_t::*getCurrentValue_function_type)() const;
            typedef ::std::pair< CEGUI::String, CEGUI::String > (ConstVectorIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater___greater__wrapper::*default_getCurrentValue_function_type)() const;

            LinkTargetIterator_exposer.def(
                    "getCurrentValue"
                    , getCurrentValue_function_type(&::CEGUI::ConstVectorIterator< std::vector< std::pair<CEGUI::String, CEGUI::String> > >::getCurrentValue)
                    , default_getCurrentValue_function_type(&ConstVectorIterator_less__std_scope_vector_less__std_scope_pair_less_CEGUI_scope_String_comma__CEGUI_scope_String_greater___greater___greater__wrapper::default_getCurrentValue));

        }
        LinkTargetIterator_exposer.def("next", &::Iterator_next);
        LinkTargetIterator_exposer.def("previous", &::Iterator_previous);
    }

}
