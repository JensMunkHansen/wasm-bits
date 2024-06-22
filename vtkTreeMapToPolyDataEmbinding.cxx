// JavaScript wrapper for vtkTreeMapToPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkTreeMapToPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkTreeMapToPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkTreeMapToPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkTreeMapToPolyData>(vtkTreeMapToPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeMapToPolyData_class) {
  emscripten::class_<vtkTreeMapToPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkTreeMapToPolyData")
    .smart_ptr<vtkSmartPointer<vtkTreeMapToPolyData>>("vtkSmartPointer<vtkTreeMapToPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeMapToPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeMapToPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeMapToPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeMapToPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeMapToPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeMapToPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeMapToPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRectanglesArrayName", emscripten::optional_override([](vtkTreeMapToPolyData& self, const std::string & arg_0) -> void {  return self.SetRectanglesArrayName( arg_0.c_str());}))
    .function("SetLevelArrayName", emscripten::optional_override([](vtkTreeMapToPolyData& self, const std::string & arg_0) -> void {  return self.SetLevelArrayName( arg_0.c_str());}))
    .function("GetLevelDeltaZ", &vtkTreeMapToPolyData::GetLevelDeltaZ)
    .function("SetLevelDeltaZ", &vtkTreeMapToPolyData::SetLevelDeltaZ)
    .function("GetAddNormals", &vtkTreeMapToPolyData::GetAddNormals)
    .function("SetAddNormals", &vtkTreeMapToPolyData::SetAddNormals)
    .function("FillInputPortInformation", &vtkTreeMapToPolyData::FillInputPortInformation, emscripten::allow_raw_pointers());
}
