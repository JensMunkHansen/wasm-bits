// JavaScript wrapper for vtkOpenGLES30PolyDataMapper2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLES30PolyDataMapper2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLES30PolyDataMapper2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkWindow.h"
#include "vtkOpenGLES30PolyDataMapper2D.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLES30PolyDataMapper2D_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLES30PolyDataMapper2D>(vtkOpenGLES30PolyDataMapper2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLES30PolyDataMapper2D_class) {
  using PrimitiveTypes=vtkOpenGLES30PolyDataMapper2D::PrimitiveTypes;
  emscripten::class_<vtkOpenGLES30PolyDataMapper2D, emscripten::base<vtkOpenGLPolyDataMapper2D>>("vtkOpenGLES30PolyDataMapper2D")
    .smart_ptr<vtkSmartPointer<vtkOpenGLES30PolyDataMapper2D>>("vtkSmartPointer<vtkOpenGLES30PolyDataMapper2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOpenGLES30PolyDataMapper2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLES30PolyDataMapper2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLES30PolyDataMapper2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLES30PolyDataMapper2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLES30PolyDataMapper2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLES30PolyDataMapper2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLES30PolyDataMapper2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RenderOverlay", &vtkOpenGLES30PolyDataMapper2D::RenderOverlay, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLES30PolyDataMapper2D::ReleaseGraphicsResources, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLES30PolyDataMapper2D_0_2_constants) {
    typedef vtkOpenGLES30PolyDataMapper2D::PrimitiveTypes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_PrimitiveStart", vtkOpenGLES30PolyDataMapper2D::PrimitiveStart },
      { "vtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_PrimitivePoints", vtkOpenGLES30PolyDataMapper2D::PrimitivePoints },
      { "vtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_PrimitiveLines", vtkOpenGLES30PolyDataMapper2D::PrimitiveLines },
      { "vtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_PrimitiveTris", vtkOpenGLES30PolyDataMapper2D::PrimitiveTris },
      { "vtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_PrimitiveTriStrips", vtkOpenGLES30PolyDataMapper2D::PrimitiveTriStrips },
      { "vtkOpenGLES30PolyDataMapper2D_PrimitiveTypes_PrimitiveEnd", vtkOpenGLES30PolyDataMapper2D::PrimitiveEnd },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
