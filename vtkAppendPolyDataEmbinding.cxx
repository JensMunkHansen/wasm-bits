// JavaScript wrapper for vtkAppendPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAppendPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAppendPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkAlgorithmOutput.h"
#include "vtkAppendPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkAppendPolyData>(vtkAppendPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendPolyData_class) {
  emscripten::class_<vtkAppendPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkAppendPolyData")
    .smart_ptr<vtkSmartPointer<vtkAppendPolyData>>("vtkSmartPointer<vtkAppendPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAppendPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetUserManagedInputs", &vtkAppendPolyData::SetUserManagedInputs)
    .function("GetUserManagedInputs", &vtkAppendPolyData::GetUserManagedInputs)
    .function("UserManagedInputsOn", &vtkAppendPolyData::UserManagedInputsOn)
    .function("UserManagedInputsOff", &vtkAppendPolyData::UserManagedInputsOff)
    .function("AddInputData", emscripten::select_overload<void(vtkAppendPolyData&, vtkPolyData*)>([](vtkAppendPolyData& self, vtkPolyData* arg_0) -> void { return self.AddInputData( arg_0); }), emscripten::allow_raw_pointers())
    .function("RemoveInputData", &vtkAppendPolyData::RemoveInputData, emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkAppendPolyData&, int)>([](vtkAppendPolyData& self, int arg_0) -> vtkPolyData* { return self.GetInput( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInput", emscripten::select_overload<vtkPolyData*(vtkAppendPolyData&)>([](vtkAppendPolyData& self) -> vtkPolyData* { return self.GetInput(); }), emscripten::allow_raw_pointers())
    .function("SetNumberOfInputs", &vtkAppendPolyData::SetNumberOfInputs)
    .function("SetInputConnectionByNumber", &vtkAppendPolyData::SetInputConnectionByNumber, emscripten::allow_raw_pointers())
    .function("SetInputDataByNumber", &vtkAppendPolyData::SetInputDataByNumber, emscripten::allow_raw_pointers())
    .function("SetParallelStreaming", &vtkAppendPolyData::SetParallelStreaming)
    .function("GetParallelStreaming", &vtkAppendPolyData::GetParallelStreaming)
    .function("ParallelStreamingOn", &vtkAppendPolyData::ParallelStreamingOn)
    .function("ParallelStreamingOff", &vtkAppendPolyData::ParallelStreamingOff)
    .function("SetOutputPointsPrecision", &vtkAppendPolyData::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkAppendPolyData::GetOutputPointsPrecision);
}
