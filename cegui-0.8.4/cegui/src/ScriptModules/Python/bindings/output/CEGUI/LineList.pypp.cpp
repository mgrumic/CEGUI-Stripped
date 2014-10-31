// This file has been generated by Py++.

#include "boost/python.hpp"
#include "indexing_suite/container_suite.hpp"
#include "indexing_suite/vector.hpp"
#include "generators/include/python_CEGUI.h"
#include "_LineInfo__value_traits.pypp.hpp"
#include "LineList.pypp.hpp"

namespace bp = boost::python;

void register_LineList_class() {

    { //::std::vector< CEGUI::MultiLineEditbox::LineInfo >
        typedef bp::class_< std::vector< CEGUI::MultiLineEditbox::LineInfo > > LineList_exposer_t;
        LineList_exposer_t LineList_exposer = LineList_exposer_t("LineList");
        bp::scope LineList_scope(LineList_exposer);
        LineList_exposer.def(bp::indexing::vector_suite< std::vector< CEGUI::MultiLineEditbox::LineInfo > >());
    }

}
