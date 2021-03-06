// This file has been generated by Py++.

#include "boost/python.hpp"
#include "generators/include/python_CEGUI.h"
#include "Vertex.pypp.hpp"

namespace bp = boost::python;

void register_Vertex_class() {

    { //::CEGUI::Vertex
        typedef bp::class_< CEGUI::Vertex > Vertex_exposer_t;
        Vertex_exposer_t Vertex_exposer = Vertex_exposer_t("Vertex");
        bp::scope Vertex_scope(Vertex_exposer);
        Vertex_exposer.def_readwrite("colour_val", &CEGUI::Vertex::colour_val, "! Texture co-ords to be applied to the vertex.\n\
        ! colour to be applied to the vertex.\n");
        Vertex_exposer.def_readwrite("position", &CEGUI::Vertex::position, "! Position of the vertex in 3D space.\n");
        Vertex_exposer.def_readwrite("tex_coords", &CEGUI::Vertex::tex_coords, "! Position of the vertex in 3D space.\n\
        ! Texture co-ords to be applied to the vertex.\n");
    }

}
