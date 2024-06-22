// JavaScript wrapper for vtkDensifyPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDensifyPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDensifyPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDensifyPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkDensifyPolyData>(vtkDensifyPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDensifyPolyData_class) {
  emscripten::class_<vtkDensifyPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkDensifyPolyData")
    .smart_ptr<vtkSmartPointer<vtkDensifyPolyData>>("vtkSmartPointer<vtkDensifyPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDensifyPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDensifyPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDensifyPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDensifyPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDensifyPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDensifyPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDensifyPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfSubdivisions", &vtkDensifyPolyData::SetNumberOfSubdivisions)
    .function("GetNumberOfSubdivisions", &vtkDensifyPolyData::GetNumberOfSubdivisions);
}
