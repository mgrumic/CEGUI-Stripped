/***********************************************************************
    created:    Fri Jan 15 2010
    author:     Eugene Marcotte
*************************************************************************/
/***************************************************************************
 *   Copyright (C) 2004 - 2010 Paul D Turner & The CEGUI Development Team
 *
 *   Permission is hereby granted, free of charge, to any person obtaining
 *   a copy of this software and associated documentation files (the
 *   "Software"), to deal in the Software without restriction, including
 *   without limitation the rights to use, copy, modify, merge, publish,
 *   distribute, sublicense, and/or sell copies of the Software, and to
 *   permit persons to whom the Software is furnished to do so, subject to
 *   the following conditions:
 *
 *   The above copyright notice and this permission notice shall be
 *   included in all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 *   EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 *   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 *   IN NO EVENT SHALL THE AUTHORS BE LIABLE FOR ANY CLAIM, DAMAGES OR
 *   OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
 *   ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
 *   OTHER DEALINGS IN THE SOFTWARE.
 ***************************************************************************/
#ifndef _CEGUINullGeometryBuffer_h_
#define _CEGUINullGeometryBuffer_h_

#include "../../GeometryBuffer.h"
#include "CEGUI/RendererModules/Null/Renderer.h"
#include "../../Rect.h"
#include "../../Colour.h"
#include "../../Vertex.h"
#include "../../Quaternion.h"

#include <utility>
#include <vector>

#if defined(_MSC_VER)
#   pragma warning(push)
#   pragma warning(disable : 4251)
#endif

// Start of CEGUI namespace section
namespace CEGUI
{
//! Implementation of CEGUI::GeometryBuffer for the Null engine
class NULL_GUIRENDERER_API NullGeometryBuffer : public GeometryBuffer
{
public:
    //! Constructor
    NullGeometryBuffer();
    //! Destructor
    virtual ~NullGeometryBuffer();

    // implement CEGUI::GeometryBuffer interface.
    void draw() const;
#ifndef PE_NO_VECTOR3D
    void setTranslation(const Vector3f& v);
#endif  // PE_NO_VECTOR3D
#ifndef PE_NO_QUATERNION
    void setRotation(const Quaternion& r);
#endif //PE_NO_QUATERNION
#ifndef PE_NO_VECTOR3D
    void setPivot(const Vector3f& p);
#endif  // PE_NO_VECTOR3D
    void setClippingRegion(const Rectf& region);
    void appendGeometry(const Vertex* const vbuff, uint vertex_count);
    void appendVertex(const Vertex& vertex);
    void setActiveTexture(Texture* texture);
    void reset();
    Texture* getActiveTexture() const;
    uint getVertexCount() const;
    uint getBatchCount() const;
#ifndef PE_NO_RENDEREFFECT
    void setRenderEffect(RenderEffect* effect);
    RenderEffect* getRenderEffect();
#endif //PE_NO_RENDEREFFECT
    void setClippingActive(const bool active);
    bool isClippingActive() const;

protected:
    //! Texture that is set as active
    NullTexture* d_activeTexture;
    //! rectangular clip region
    Rectf d_clipRect;
    //! whether clipping will be active for the current batch
    bool d_clippingActive;
    //! translation vector
#ifndef PE_NO_VECTOR3D
    Vector3f d_translation;
#endif  // PE_NO_VECTOR3D
#ifndef PE_NO_QUATERNION
    //! rotation quaternion
    Quaternion d_rotation;
#endif //PE_NO_QUATERNION
    //! pivot point for rotation
#ifndef PE_NO_VECTOR3D
    Vector3f d_pivot;
#endif  // PE_NO_VECTOR3D
#ifndef PE_NO_RENDEREFFECT
    //! RenderEffect that will be used by the GeometryBuffer
    RenderEffect* d_effect;
#endif //PE_NO_RENDEREFFECT
    //! type of container used to queue the geometry
    typedef std::vector<Vertex> VertexList;
    //! container where added geometry is stored.
    VertexList d_vertices;
};


} // End of  CEGUI namespace section

#if defined(_MSC_VER)
#   pragma warning(pop)
#endif

#endif  // end of guard _CEGUINullGeometryBuffer_h_
