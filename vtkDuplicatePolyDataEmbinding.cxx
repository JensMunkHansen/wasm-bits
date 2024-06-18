// JavaScript wrapper for vtkDuplicatePolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkDuplicatePolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkDuplicatePolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkSocketController.h"
#include "vtkDuplicatePolyData.h"

template<> void emscripten::internal::raw_destructor<vtkDuplicatePolyData>(vtkDuplicatePolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDuplicatePolyData_class) {
  emscripten::class_<vtkDuplicatePolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkDuplicatePolyData")
    .smart_ptr<vtkSmartPointer<vtkDuplicatePolyData>>("vtkSmartPointer<vtkDuplicatePolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDuplicatePolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDuplicatePolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDuplicatePolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDuplicatePolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDuplicatePolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDuplicatePolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDuplicatePolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkDuplicatePolyData::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkDuplicatePolyData::GetController, emscripten::allow_raw_pointers())
    .function("InitializeSchedule", &vtkDuplicatePolyData::InitializeSchedule)
    .function("SetSynchronous", &vtkDuplicatePolyData::SetSynchronous)
    .function("GetSynchronous", &vtkDuplicatePolyData::GetSynchronous)
    .function("SynchronousOn", &vtkDuplicatePolyData::SynchronousOn)
    .function("SynchronousOff", &vtkDuplicatePolyData::SynchronousOff)
    .function("GetSocketController", &vtkDuplicatePolyData::GetSocketController, emscripten::allow_raw_pointers())
    .function("SetSocketController", &vtkDuplicatePolyData::SetSocketController, emscripten::allow_raw_pointers())
    .function("SetClientFlag", &vtkDuplicatePolyData::SetClientFlag)
    .function("GetClientFlag", &vtkDuplicatePolyData::GetClientFlag)
    .function("GetMemorySize", &vtkDuplicatePolyData::GetMemorySize);
}
