// JavaScript wrapper for vtkCirclePackToPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkCirclePackToPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkCirclePackToPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkCirclePackToPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkCirclePackToPolyData>(vtkCirclePackToPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCirclePackToPolyData_class) {
  emscripten::class_<vtkCirclePackToPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkCirclePackToPolyData")
    .smart_ptr<vtkSmartPointer<vtkCirclePackToPolyData>>("vtkSmartPointer<vtkCirclePackToPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCirclePackToPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackToPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCirclePackToPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCirclePackToPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCirclePackToPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackToPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCirclePackToPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCirclesArrayName", emscripten::optional_override([](vtkCirclePackToPolyData& self, const std::string & arg_0) -> void {  return self.SetCirclesArrayName( arg_0.c_str());}))
    .function("SetResolution", &vtkCirclePackToPolyData::SetResolution)
    .function("GetResolution", &vtkCirclePackToPolyData::GetResolution)
    .function("FillInputPortInformation", &vtkCirclePackToPolyData::FillInputPortInformation, emscripten::allow_raw_pointers());
}
