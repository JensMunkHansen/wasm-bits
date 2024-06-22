// JavaScript wrapper for vtkSpanSpace with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkSpanSpaceEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkSpanSpace.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkScalarTree.h"
#include "vtkCell.h"
#include "vtkIdList.h"
#include "vtkDataArray.h"
#include "vtkSpanSpace.h"

template<> void emscripten::internal::raw_destructor<vtkSpanSpace>(vtkSpanSpace * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSpanSpace_class) {
  emscripten::class_<vtkSpanSpace, emscripten::base<vtkScalarTree>>("vtkSpanSpace")
    .smart_ptr<vtkSmartPointer<vtkSpanSpace>>("vtkSmartPointer<vtkSpanSpace>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSpanSpace>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpanSpace::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSpanSpace& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSpanSpace::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSpanSpace::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSpanSpace::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSpanSpace& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ShallowCopy", &vtkSpanSpace::ShallowCopy, emscripten::allow_raw_pointers())
    .function("SetScalarRange", emscripten::select_overload<void(vtkSpanSpace&, double, double)>([](vtkSpanSpace& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }))
    .function("SetComputeScalarRange", &vtkSpanSpace::SetComputeScalarRange)
    .function("GetComputeScalarRange", &vtkSpanSpace::GetComputeScalarRange)
    .function("ComputeScalarRangeOn", &vtkSpanSpace::ComputeScalarRangeOn)
    .function("ComputeScalarRangeOff", &vtkSpanSpace::ComputeScalarRangeOff)
    .function("SetResolution", &vtkSpanSpace::SetResolution)
    .function("GetResolutionMinValue", &vtkSpanSpace::GetResolutionMinValue)
    .function("GetResolutionMaxValue", &vtkSpanSpace::GetResolutionMaxValue)
    .function("GetResolution", &vtkSpanSpace::GetResolution)
    .function("SetComputeResolution", &vtkSpanSpace::SetComputeResolution)
    .function("GetComputeResolution", &vtkSpanSpace::GetComputeResolution)
    .function("ComputeResolutionOn", &vtkSpanSpace::ComputeResolutionOn)
    .function("ComputeResolutionOff", &vtkSpanSpace::ComputeResolutionOff)
    .function("SetNumberOfCellsPerBucket", &vtkSpanSpace::SetNumberOfCellsPerBucket)
    .function("GetNumberOfCellsPerBucketMinValue", &vtkSpanSpace::GetNumberOfCellsPerBucketMinValue)
    .function("GetNumberOfCellsPerBucketMaxValue", &vtkSpanSpace::GetNumberOfCellsPerBucketMaxValue)
    .function("GetNumberOfCellsPerBucket", &vtkSpanSpace::GetNumberOfCellsPerBucket)
    .function("Initialize", &vtkSpanSpace::Initialize)
    .function("BuildTree", &vtkSpanSpace::BuildTree)
    .function("InitTraversal", &vtkSpanSpace::InitTraversal)
    .function("GetNumberOfCellBatches", &vtkSpanSpace::GetNumberOfCellBatches)
    .function("SetBatchSize", &vtkSpanSpace::SetBatchSize)
    .function("GetBatchSizeMinValue", &vtkSpanSpace::GetBatchSizeMinValue)
    .function("GetBatchSizeMaxValue", &vtkSpanSpace::GetBatchSizeMaxValue)
    .function("GetBatchSize", &vtkSpanSpace::GetBatchSize);
}
