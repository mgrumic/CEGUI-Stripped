// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb.pypp.hpp"

namespace bp = boost::python;

struct ConstBaseIterator_less__std_scope_vector_less__CEGUI_scope_EventAction__greater__comma__CEGUI_scope_EventAction__greater__wrapper : CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >, bp::wrapper< CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > > {

    ConstBaseIterator_less__std_scope_vector_less__CEGUI_scope_EventAction__greater__comma__CEGUI_scope_EventAction__greater__wrapper()
    : CEGUI::ConstBaseIterator<std::vector<CEGUI::EventAction, std::allocator<CEGUI::EventAction> >, CEGUI::EventAction>()
    , bp::wrapper< CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > >() {
        // null constructor

    }

    virtual ::CEGUI::EventAction getCurrentValue() const {
        bp::override func_getCurrentValue = this->get_override("getCurrentValue");
        return func_getCurrentValue();
    }

};

void register_ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_class() {

    { //::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >
        typedef bp::class_< ConstBaseIterator_less__std_scope_vector_less__CEGUI_scope_EventAction__greater__comma__CEGUI_scope_EventAction__greater__wrapper, boost::noncopyable > ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer_t;
        ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer_t ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer = ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer_t("ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb", bp::no_init);
        bp::scope ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_scope(ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer);
        ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(bp::init< >("*************************************************************************\n\
           No default construction available\n\
        *************************************************************************\n"));
        { //::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::getCurrentValue

            typedef CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > exported_class_t;
            typedef ::CEGUI::EventAction(exported_class_t::*getCurrentValue_function_type)() const;

            ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(
                    "getCurrentValue"
                    , bp::pure_virtual(getCurrentValue_function_type(&::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::getCurrentValue))
                    , "*!\n\
            \n\
               Return the value for the item at the current iterator position.\n\
            *\n");

        }
        { //::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::isAtEnd

            typedef CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > exported_class_t;
            typedef bool ( exported_class_t::*isAtEnd_function_type)() const;

            ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(
                    "isAtEnd"
                    , isAtEnd_function_type(&::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::isAtEnd)
                    , "*!\n\
            \n\
               Return whether the current iterator position is at the end of the iterators range.\n\
            *\n");

        }
        { //::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::isAtStart

            typedef CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > exported_class_t;
            typedef bool ( exported_class_t::*isAtStart_function_type)() const;

            ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(
                    "isAtStart"
                    , isAtStart_function_type(&::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::isAtStart)
                    , "*!\n\
            \n\
               Return whether the current iterator position is at the start of the iterators range.\n\
            *\n");

        }
        ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(bp::self != bp::self);
        { //::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::operator=

            typedef CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > exported_class_t;
            typedef ::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > & (exported_class_t::*assign_function_type)(::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > const &);

            ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(
                    "assign"
                    , assign_function_type(&::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::operator=)
                    , (bp::arg("rhs"))
                    , bp::return_self< >()
                    , "*!\n\
            \n\
               ConstBaseIterator assignment operator\n\
            *\n");

        }
        ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(bp::self == bp::self);
        { //::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::toEnd

            typedef CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > exported_class_t;
            typedef void ( exported_class_t::*toEnd_function_type)();

            ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(
                    "toEnd"
                    , toEnd_function_type(&::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::toEnd)
                    , "*!\n\
            \n\
               Set the iterator current position to the end position.\n\
            *\n");

        }
        { //::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::toStart

            typedef CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction > exported_class_t;
            typedef void ( exported_class_t::*toStart_function_type)();

            ConstBaseIterator_6318b664b630c5a4e45127a69c6748cb_exposer.def(
                    "toStart"
                    , toStart_function_type(&::CEGUI::ConstBaseIterator< std::vector< CEGUI::EventAction >, CEGUI::EventAction >::toStart)
                    , "*!\n\
            \n\
               Set the iterator current position to the start position.\n\
            *\n");

        }
    }

}
