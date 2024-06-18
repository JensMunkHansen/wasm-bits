// JavaScript wrapper for vtkThreadedImageAlgorithm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkThreadedImageAlgorithmEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkThreadedImageAlgorithm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageData.h"
#include "vtkThreadedImageAlgorithm.h"

EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkThreadedImageAlgorithm_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkThreadedImageAlgorithm>(vtkThreadedImageAlgorithm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThreadedImageAlgorithm_class) {
  emscripten::class_<vtkThreadedImageAlgorithm, emscripten::base<vtkImageAlgorithm>>("vtkThreadedImageAlgorithm")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreadedImageAlgorithm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThreadedImageAlgorithm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThreadedImageAlgorithm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThreadedImageAlgorithm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThreadedImageAlgorithm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThreadedImageAlgorithm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetEnableSMP", &vtkThreadedImageAlgorithm::GetEnableSMP)
    .function("SetEnableSMP", &vtkThreadedImageAlgorithm::SetEnableSMP)
    .class_function("SetGlobalDefaultEnableSMP", &vtkThreadedImageAlgorithm::SetGlobalDefaultEnableSMP)
    .class_function("GetGlobalDefaultEnableSMP", &vtkThreadedImageAlgorithm::GetGlobalDefaultEnableSMP)
    .function("SetMinimumPieceSize", emscripten::select_overload<void(vtkThreadedImageAlgorithm&, int, int, int)>([](vtkThreadedImageAlgorithm& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetMinimumPieceSize( arg_0, arg_1, arg_2); }))
    .function("SetDesiredBytesPerPiece", &vtkThreadedImageAlgorithm::SetDesiredBytesPerPiece)
    .function("GetDesiredBytesPerPiece", &vtkThreadedImageAlgorithm::GetDesiredBytesPerPiece)
    .function("SetSplitMode", &vtkThreadedImageAlgorithm::SetSplitMode)
    .function("GetSplitModeMinValue", &vtkThreadedImageAlgorithm::GetSplitModeMinValue)
    .function("GetSplitModeMaxValue", &vtkThreadedImageAlgorithm::GetSplitModeMaxValue)
    .function("SetSplitModeToSlab", &vtkThreadedImageAlgorithm::SetSplitModeToSlab)
    .function("SetSplitModeToBeam", &vtkThreadedImageAlgorithm::SetSplitModeToBeam)
    .function("SetSplitModeToBlock", &vtkThreadedImageAlgorithm::SetSplitModeToBlock)
    .function("GetSplitMode", &vtkThreadedImageAlgorithm::GetSplitMode)
    .function("SetNumberOfThreads", &vtkThreadedImageAlgorithm::SetNumberOfThreads)
    .function("GetNumberOfThreadsMinValue", &vtkThreadedImageAlgorithm::GetNumberOfThreadsMinValue)
    .function("GetNumberOfThreadsMaxValue", &vtkThreadedImageAlgorithm::GetNumberOfThreadsMaxValue)
    .function("GetNumberOfThreads", &vtkThreadedImageAlgorithm::GetNumberOfThreads);
}
