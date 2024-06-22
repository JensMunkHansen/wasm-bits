// JavaScript wrapper for vtkDrawTexturedElements with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkDrawTexturedElementsEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkDrawTexturedElements.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkShader.h"
#include "vtkStringToken.h"
#include "vtkDataArray.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkMapper.h"
#include "vtkWindow.h"
#include "vtkShaderProgram.h"
#include "vtkCollection.h"
#include "vtkDrawTexturedElements.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkDrawTexturedElements_class_enums) {
}

EMSCRIPTEN_BINDINGS(vtkDrawTexturedElements_class) {
  using ElementShape=vtkDrawTexturedElements::ElementShape;
  using PatchShape=vtkDrawTexturedElements::PatchShape;
  emscripten::class_<vtkDrawTexturedElements>("vtkDrawTexturedElements")
    .smart_ptr<std::shared_ptr<vtkDrawTexturedElements>>("std::shared_ptr<vtkDrawTexturedElements>")
    .constructor(&std::make_shared<vtkDrawTexturedElements>)
    .function("GetShader", &vtkDrawTexturedElements::GetShader, emscripten::allow_raw_pointers())
    .function("BindArrayToTexture", &vtkDrawTexturedElements::BindArrayToTexture, emscripten::allow_raw_pointers())
    .function("AppendArrayToTexture", &vtkDrawTexturedElements::AppendArrayToTexture, emscripten::allow_raw_pointers())
    .function("UnbindArray", &vtkDrawTexturedElements::UnbindArray)
    .function("GetNumberOfInstances", &vtkDrawTexturedElements::GetNumberOfInstances)
    .function("SetNumberOfInstances", &vtkDrawTexturedElements::SetNumberOfInstances)
    .function("GetNumberOfElements", &vtkDrawTexturedElements::GetNumberOfElements)
    .function("SetNumberOfElements", &vtkDrawTexturedElements::SetNumberOfElements)
    .function("GetElementType", &vtkDrawTexturedElements::GetElementType)
    .function("SetElementType", &vtkDrawTexturedElements::SetElementType)
    .function("GetPatchType", &vtkDrawTexturedElements::GetPatchType)
    .function("SetPatchType", &vtkDrawTexturedElements::SetPatchType)
    .function("GetIncludeColormap", &vtkDrawTexturedElements::GetIncludeColormap)
    .function("SetIncludeColormap", &vtkDrawTexturedElements::SetIncludeColormap)
    .function("DrawInstancedElements", &vtkDrawTexturedElements::DrawInstancedElements, emscripten::allow_raw_pointers())
    .function("ReleaseResources", &vtkDrawTexturedElements::ReleaseResources, emscripten::allow_raw_pointers())
    .function("GetShaderProgram", &vtkDrawTexturedElements::GetShaderProgram, emscripten::allow_raw_pointers())
    .function("GetGLSLModCollection", &vtkDrawTexturedElements::GetGLSLModCollection, emscripten::allow_raw_pointers())
    .class_function("PatchVertexCountFromPrimitive", &vtkDrawTexturedElements::PatchVertexCountFromPrimitive);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkDrawTexturedElements_0_2_constants) {
    typedef vtkDrawTexturedElements::ElementShape cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkDrawTexturedElements_ElementShape_Point", vtkDrawTexturedElements::Point },
      { "vtkDrawTexturedElements_ElementShape_Line", vtkDrawTexturedElements::Line },
      { "vtkDrawTexturedElements_ElementShape_LineStrip", vtkDrawTexturedElements::LineStrip },
      { "vtkDrawTexturedElements_ElementShape_Triangle", vtkDrawTexturedElements::Triangle },
      { "vtkDrawTexturedElements_ElementShape_TriangleStrip", vtkDrawTexturedElements::TriangleStrip },
      { "vtkDrawTexturedElements_ElementShape_TriangleFan", vtkDrawTexturedElements::TriangleFan },
      { "vtkDrawTexturedElements_ElementShape_AbstractPatches", vtkDrawTexturedElements::AbstractPatches },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkDrawTexturedElements_1_2_constants) {
    typedef vtkDrawTexturedElements::PatchShape cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkDrawTexturedElements_PatchShape_PatchLine", vtkDrawTexturedElements::PatchLine },
      { "vtkDrawTexturedElements_PatchShape_PatchTriangle", vtkDrawTexturedElements::PatchTriangle },
      { "vtkDrawTexturedElements_PatchShape_PatchQuadrilateral", vtkDrawTexturedElements::PatchQuadrilateral },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
