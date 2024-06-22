// JavaScript wrapper for vtkPPolyDataNormals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkPPolyDataNormalsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkPPolyDataNormals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPPolyDataNormals.h"

template<> void emscripten::internal::raw_destructor<vtkPPolyDataNormals>(vtkPPolyDataNormals * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPPolyDataNormals_class) {
  emscripten::class_<vtkPPolyDataNormals, emscripten::base<vtkPolyDataNormals>>("vtkPPolyDataNormals")
    .smart_ptr<vtkSmartPointer<vtkPPolyDataNormals>>("vtkSmartPointer<vtkPPolyDataNormals>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPPolyDataNormals>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPPolyDataNormals::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPPolyDataNormals& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPPolyDataNormals::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPPolyDataNormals::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPPolyDataNormals::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPPolyDataNormals& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPieceInvariant", &vtkPPolyDataNormals::SetPieceInvariant)
    .function("GetPieceInvariant", &vtkPPolyDataNormals::GetPieceInvariant)
    .function("PieceInvariantOn", &vtkPPolyDataNormals::PieceInvariantOn)
    .function("PieceInvariantOff", &vtkPPolyDataNormals::PieceInvariantOff);
}
