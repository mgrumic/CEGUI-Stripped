// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "USize.pypp.hpp"

namespace bp = boost::python;

void register_USize_class() {

    { //::CEGUI::Size< CEGUI::UDim >
        typedef bp::class_< CEGUI::Size< CEGUI::UDim > > USize_exposer_t;
        USize_exposer_t USize_exposer = USize_exposer_t("USize", bp::init< >());
        bp::scope USize_scope(USize_exposer);
        USize_exposer.def(bp::init< CEGUI::UDim, CEGUI::UDim >((bp::arg("width"), bp::arg("height"))));
        USize_exposer.def(bp::init< CEGUI::Size< CEGUI::UDim > const & >((bp::arg("v"))));
        { //::CEGUI::Size< CEGUI::UDim >::one

            typedef CEGUI::Size< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Size< CEGUI::UDim > (*one_function_type)();

            USize_exposer.def(
                    "one"
                    , one_function_type(&::CEGUI::Size< CEGUI::UDim >::one)
                    , "!  finger saving alias for Size(1, 1)\n");

        }
        { //::CEGUI::Size< CEGUI::UDim >::one_height

            typedef CEGUI::Size< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Size< CEGUI::UDim > (*one_height_function_type)();

            USize_exposer.def(
                    "one_height"
                    , one_height_function_type(&::CEGUI::Size< CEGUI::UDim >::one_height)
                    , "!  finger saving alias for Size(0, 1)\n");

        }
        { //::CEGUI::Size< CEGUI::UDim >::one_width

            typedef CEGUI::Size< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Size< CEGUI::UDim > (*one_width_function_type)();

            USize_exposer.def(
                    "one_width"
                    , one_width_function_type(&::CEGUI::Size< CEGUI::UDim >::one_width)
                    , "!  finger saving alias for Size(1, 0)\n");

        }
        USize_exposer.def(bp::self != bp::self);
        USize_exposer.def(bp::self * bp::other< CEGUI::UDim >());
        USize_exposer.def(bp::self * bp::self);
        USize_exposer.def(bp::self * bp::other< CEGUI::Vector2< float > >());
        USize_exposer.def(bp::self + bp::self);
        USize_exposer.def(bp::self - bp::self);
        USize_exposer.def(bp::self == bp::self);
        { //::CEGUI::Size< CEGUI::UDim >::square

            typedef CEGUI::Size< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Size< CEGUI::UDim > (*square_function_type)(::CEGUI::UDim const);

            USize_exposer.def(
                    "square"
                    , square_function_type(&::CEGUI::Size< CEGUI::UDim >::square)
                    , (bp::arg("side"))
                    , "!  finger saving alias for Size(side, side)\n");

        }
        { //::CEGUI::Size< CEGUI::UDim >::zero

            typedef CEGUI::Size< CEGUI::UDim > exported_class_t;
            typedef ::CEGUI::Size< CEGUI::UDim > (*zero_function_type)();

            USize_exposer.def(
                    "zero"
                    , zero_function_type(&::CEGUI::Size< CEGUI::UDim >::zero)
                    , "!  finger saving alias for Size(0, 0)\n");

        }
        USize_exposer.def_readwrite("d_height", &CEGUI::Size< CEGUI::UDim >::d_height);
        USize_exposer.def_readwrite("d_width", &CEGUI::Size< CEGUI::UDim >::d_width);
        USize_exposer.staticmethod("one");
        USize_exposer.staticmethod("one_height");
        USize_exposer.staticmethod("one_width");
        USize_exposer.staticmethod("square");
        USize_exposer.staticmethod("zero");
    }

}
