// JavaScript wrapper for vtkCollectPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkCollectPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkCollectPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkSocketController.h"
#include "vtkCollectPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkCollectPolyData>(vtkCollectPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCollectPolyData_class) {
  emscripten::class_<vtkCollectPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkCollectPolyData")
    .smart_ptr<vtkSmartPointer<vtkCollectPolyData>>("vtkSmartPointer<vtkCollectPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCollectPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCollectPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCollectPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCollectPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollectPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCollectPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkCollectPolyData::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkCollectPolyData::GetController, emscripten::allow_raw_pointers())
    .function("SetSocketController", &vtkCollectPolyData::SetSocketController, emscripten::allow_raw_pointers())
    .function("GetSocketController", &vtkCollectPolyData::GetSocketController, emscripten::allow_raw_pointers())
    .function("SetPassThrough", &vtkCollectPolyData::SetPassThrough)
    .function("GetPassThrough", &vtkCollectPolyData::GetPassThrough)
    .function("PassThroughOn", &vtkCollectPolyData::PassThroughOn)
    .function("PassThroughOff", &vtkCollectPolyData::PassThroughOff);
}
