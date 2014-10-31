// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "NamedAreaIterator.pypp.hpp"

namespace bp = boost::python;

struct ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_NamedArea_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_NamedArea_greater___greater___greater___greater__wrapper : CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >, bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > > > {

    ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_NamedArea_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_NamedArea_greater___greater___greater___greater__wrapper(CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > > const & arg)
    : CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >(arg)
    , bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > > >() {
        // copy constructor

    }

    ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_NamedArea_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_NamedArea_greater___greater___greater___greater__wrapper()
    : CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >()
    , bp::wrapper< CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > > >() {
        // null constructor

    }

    virtual ::CEGUI::NamedArea getCurrentValue() const {
        if (bp::override func_getCurrentValue = this->get_override("getCurrentValue"))
            return func_getCurrentValue();
        else {
            return this->CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >::getCurrentValue();
        }
    }

    ::CEGUI::NamedArea default_getCurrentValue() const {
        return CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >::getCurrentValue();
    }

};

void Iterator_next(::CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >& t) {
    t++;
}

void Iterator_previous(::CEGUI::ConstMapIterator<std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >& t) {
    t--;
}

void register_NamedAreaIterator_class() {

    { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >
        typedef bp::class_< ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_NamedArea_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_NamedArea_greater___greater___greater___greater__wrapper, bp::bases< CEGUI::ConstBaseIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > >, CEGUI::NamedArea > > > NamedAreaIterator_exposer_t;
        NamedAreaIterator_exposer_t NamedAreaIterator_exposer = NamedAreaIterator_exposer_t("NamedAreaIterator", bp::no_init);
        bp::scope NamedAreaIterator_scope(NamedAreaIterator_exposer);
        NamedAreaIterator_exposer.def(bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n"));
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >::getCurrentKey

            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > > exported_class_t;
            typedef ::CEGUI::String(exported_class_t::*getCurrentKey_function_type)() const;

            NamedAreaIterator_exposer.def(
                    "getCurrentKey"
                    , getCurrentKey_function_type(&::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >::getCurrentKey)
                    , "*!\n\
            \n\
                Return the key for the item at the current iterator position.\n\
            *\n");

        }
        { //::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >::getCurrentValue

            typedef CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > > exported_class_t;
            typedef ::CEGUI::NamedArea(exported_class_t::*getCurrentValue_function_type)() const;
            typedef ::CEGUI::NamedArea(ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_NamedArea_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_NamedArea_greater___greater___greater___greater__wrapper::*default_getCurrentValue_function_type)() const;

            NamedAreaIterator_exposer.def(
                    "getCurrentValue"
                    , getCurrentValue_function_type(&::CEGUI::ConstMapIterator< std::map<CEGUI::String, CEGUI::NamedArea, CEGUI::StringFastLessCompare, std::allocator<std::pair<CEGUI::String const, CEGUI::NamedArea> > > >::getCurrentValue)
                    , default_getCurrentValue_function_type(&ConstMapIterator_less__std_scope_map_less_CEGUI_scope_String_comma__CEGUI_scope_NamedArea_comma__CEGUI_scope_StringFastLessCompare_comma__std_scope_allocator_less_std_scope_pair_less_CEGUI_scope_String_const_comma__CEGUI_scope_NamedArea_greater___greater___greater___greater__wrapper::default_getCurrentValue));

        }
        NamedAreaIterator_exposer.def("next", &::Iterator_next);
        NamedAreaIterator_exposer.def("previous", &::Iterator_previous);
    }

}
