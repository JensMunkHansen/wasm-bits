// JavaScript wrapper for vtkImageToAMR with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkFiltersAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkImageToAMREmbinding.cxx \
 /home/jmh/github/vtk/Filters/AMR/vtkImageToAMR.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageToAMR.h"

template<> void emscripten::internal::raw_destructor<vtkImageToAMR>(vtkImageToAMR * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageToAMR_class) {
  emscripten::class_<vtkImageToAMR, emscripten::base<vtkOverlappingAMRAlgorithm>>("vtkImageToAMR")
    .smart_ptr<vtkSmartPointer<vtkImageToAMR>>("vtkSmartPointer<vtkImageToAMR>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageToAMR>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToAMR::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageToAMR& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageToAMR::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageToAMR::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToAMR::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageToAMR& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfLevels", &vtkImageToAMR::SetNumberOfLevels)
    .function("GetNumberOfLevelsMinValue", &vtkImageToAMR::GetNumberOfLevelsMinValue)
    .function("GetNumberOfLevelsMaxValue", &vtkImageToAMR::GetNumberOfLevelsMaxValue)
    .function("GetNumberOfLevels", &vtkImageToAMR::GetNumberOfLevels)
    .function("SetRefinementRatio", &vtkImageToAMR::SetRefinementRatio)
    .function("GetRefinementRatioMinValue", &vtkImageToAMR::GetRefinementRatioMinValue)
    .function("GetRefinementRatioMaxValue", &vtkImageToAMR::GetRefinementRatioMaxValue)
    .function("GetRefinementRatio", &vtkImageToAMR::GetRefinementRatio)
    .function("SetMaximumNumberOfBlocks", &vtkImageToAMR::SetMaximumNumberOfBlocks)
    .function("GetMaximumNumberOfBlocksMinValue", &vtkImageToAMR::GetMaximumNumberOfBlocksMinValue)
    .function("GetMaximumNumberOfBlocksMaxValue", &vtkImageToAMR::GetMaximumNumberOfBlocksMaxValue)
    .function("GetMaximumNumberOfBlocks", &vtkImageToAMR::GetMaximumNumberOfBlocks);
}
