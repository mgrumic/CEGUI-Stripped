// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "TextComponentIterator.pypp.hpp"

namespace bp = boost::python;

struct ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_TextComponent__greater___greater__wrapper : CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > >, bp::wrapper< CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > > > {

    ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_TextComponent__greater___greater__wrapper(CEGUI::ConstVectorIterator<std::vector<CEGUI::TextComponent, std::allocator<CEGUI::TextComponent> > > const & arg)
    : CEGUI::ConstVectorIterator<std::vector<CEGUI::TextComponent, std::allocator<CEGUI::TextComponent> > >(arg)
    , bp::wrapper< CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > > >() {
        // copy constructor

    }

    ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_TextComponent__greater___greater__wrapper()
    : CEGUI::ConstVectorIterator<std::vector<CEGUI::TextComponent, std::allocator<CEGUI::TextComponent> > >()
    , bp::wrapper< CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > > >() {
        // null constructor

    }

    virtual ::CEGUI::TextComponent getCurrentValue() const {
        if (bp::override func_getCurrentValue = this->get_override("getCurrentValue"))
            return func_getCurrentValue();
        else {
            return this->CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > >::getCurrentValue();
        }
    }

    ::CEGUI::TextComponent default_getCurrentValue() const {
        return CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > >::getCurrentValue();
    }

};

void Iterator_next(::CEGUI::ConstVectorIterator<std::vector<CEGUI::TextComponent, std::allocator<CEGUI::TextComponent> > >& t) {
    t++;
}

void Iterator_previous(::CEGUI::ConstVectorIterator<std::vector<CEGUI::TextComponent, std::allocator<CEGUI::TextComponent> > >& t) {
    t--;
}

void register_TextComponentIterator_class() {

    { //::CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > >
        typedef bp::class_< ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_TextComponent__greater___greater__wrapper, bp::bases< CEGUI::ConstBaseIterator< std::vector< CEGUI::TextComponent >, CEGUI::TextComponent > > > TextComponentIterator_exposer_t;
        TextComponentIterator_exposer_t TextComponentIterator_exposer = TextComponentIterator_exposer_t("TextComponentIterator", bp::no_init);
        bp::scope TextComponentIterator_scope(TextComponentIterator_exposer);
        TextComponentIterator_exposer.def(bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n"));
        { //::CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > >::getCurrentValue

            typedef CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > > exported_class_t;
            typedef ::CEGUI::TextComponent(exported_class_t::*getCurrentValue_function_type)() const;
            typedef ::CEGUI::TextComponent(ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_TextComponent__greater___greater__wrapper::*default_getCurrentValue_function_type)() const;

            TextComponentIterator_exposer.def(
                    "getCurrentValue"
                    , getCurrentValue_function_type(&::CEGUI::ConstVectorIterator< std::vector< CEGUI::TextComponent > >::getCurrentValue)
                    , default_getCurrentValue_function_type(&ConstVectorIterator_less__std_scope_vector_less__CEGUI_scope_TextComponent__greater___greater__wrapper::default_getCurrentValue));

        }
        TextComponentIterator_exposer.def("next", &::Iterator_next);
        TextComponentIterator_exposer.def("previous", &::Iterator_previous);
    }

}
