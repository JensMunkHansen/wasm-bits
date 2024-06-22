// JavaScript wrapper for vtkTreeRingToPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkTreeRingToPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkTreeRingToPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkTreeRingToPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkTreeRingToPolyData>(vtkTreeRingToPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeRingToPolyData_class) {
  emscripten::class_<vtkTreeRingToPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkTreeRingToPolyData")
    .smart_ptr<vtkSmartPointer<vtkTreeRingToPolyData>>("vtkSmartPointer<vtkTreeRingToPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeRingToPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeRingToPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeRingToPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeRingToPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeRingToPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeRingToPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeRingToPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSectorsArrayName", emscripten::optional_override([](vtkTreeRingToPolyData& self, const std::string & arg_0) -> void {  return self.SetSectorsArrayName( arg_0.c_str());}))
    .function("SetShrinkPercentage", &vtkTreeRingToPolyData::SetShrinkPercentage)
    .function("GetShrinkPercentage", &vtkTreeRingToPolyData::GetShrinkPercentage)
    .function("FillInputPortInformation", &vtkTreeRingToPolyData::FillInputPortInformation, emscripten::allow_raw_pointers());
}
