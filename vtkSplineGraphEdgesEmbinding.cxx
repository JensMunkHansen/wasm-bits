// JavaScript wrapper for vtkSplineGraphEdges with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkSplineGraphEdgesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkSplineGraphEdges.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSpline.h"
#include "vtkSplineGraphEdges.h"

template<> void emscripten::internal::raw_destructor<vtkSplineGraphEdges>(vtkSplineGraphEdges * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSplineGraphEdges_class) {
  emscripten::class_<vtkSplineGraphEdges, emscripten::base<vtkGraphAlgorithm>>("vtkSplineGraphEdges")
    .smart_ptr<vtkSmartPointer<vtkSplineGraphEdges>>("vtkSmartPointer<vtkSplineGraphEdges>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSplineGraphEdges>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineGraphEdges::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSplineGraphEdges& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSplineGraphEdges::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSplineGraphEdges::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSplineGraphEdges::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSplineGraphEdges& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSpline", &vtkSplineGraphEdges::SetSpline, emscripten::allow_raw_pointers())
    .function("GetSpline", &vtkSplineGraphEdges::GetSpline, emscripten::allow_raw_pointers())
    .function("SetSplineType", &vtkSplineGraphEdges::SetSplineType)
    .function("GetSplineType", &vtkSplineGraphEdges::GetSplineType)
    .function("SetNumberOfSubdivisions", &vtkSplineGraphEdges::SetNumberOfSubdivisions)
    .function("GetNumberOfSubdivisions", &vtkSplineGraphEdges::GetNumberOfSubdivisions);
}
EMSCRIPTEN_BINDINGS(vtkInfovisLayout_vtkSplineGraphEdges_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkSplineGraphEdges_BSPLINE", vtkSplineGraphEdges::BSPLINE },
      { "vtkSplineGraphEdges_CUSTOM", vtkSplineGraphEdges::CUSTOM },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
