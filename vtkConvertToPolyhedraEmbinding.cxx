// JavaScript wrapper for vtkConvertToPolyhedra with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkConvertToPolyhedraEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkConvertToPolyhedra.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkConvertToPolyhedra.h"

template<> void emscripten::internal::raw_destructor<vtkConvertToPolyhedra>(vtkConvertToPolyhedra * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvertToPolyhedra_class) {
  emscripten::class_<vtkConvertToPolyhedra, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkConvertToPolyhedra")
    .smart_ptr<vtkSmartPointer<vtkConvertToPolyhedra>>("vtkSmartPointer<vtkConvertToPolyhedra>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConvertToPolyhedra>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToPolyhedra::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvertToPolyhedra& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvertToPolyhedra::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvertToPolyhedra::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToPolyhedra::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvertToPolyhedra& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutputAllCells", &vtkConvertToPolyhedra::SetOutputAllCells)
    .function("GetOutputAllCells", &vtkConvertToPolyhedra::GetOutputAllCells)
    .function("OutputAllCellsOn", &vtkConvertToPolyhedra::OutputAllCellsOn)
    .function("OutputAllCellsOff", &vtkConvertToPolyhedra::OutputAllCellsOff);
}
