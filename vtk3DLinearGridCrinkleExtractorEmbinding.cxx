// JavaScript wrapper for vtk3DLinearGridCrinkleExtractor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtk3DLinearGridCrinkleExtractorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtk3DLinearGridCrinkleExtractor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImplicitFunction.h"
#include "vtkDataObject.h"
#include "vtk3DLinearGridCrinkleExtractor.h"

template<> void emscripten::internal::raw_destructor<vtk3DLinearGridCrinkleExtractor>(vtk3DLinearGridCrinkleExtractor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtk3DLinearGridCrinkleExtractor_class) {
  emscripten::class_<vtk3DLinearGridCrinkleExtractor, emscripten::base<vtkDataObjectAlgorithm>>("vtk3DLinearGridCrinkleExtractor")
    .smart_ptr<vtkSmartPointer<vtk3DLinearGridCrinkleExtractor>>("vtkSmartPointer<vtk3DLinearGridCrinkleExtractor>")
    .constructor(&vtk::MakeVTKSmartPtr<vtk3DLinearGridCrinkleExtractor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DLinearGridCrinkleExtractor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtk3DLinearGridCrinkleExtractor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtk3DLinearGridCrinkleExtractor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtk3DLinearGridCrinkleExtractor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtk3DLinearGridCrinkleExtractor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtk3DLinearGridCrinkleExtractor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetImplicitFunction", &vtk3DLinearGridCrinkleExtractor::SetImplicitFunction, emscripten::allow_raw_pointers())
    .function("GetImplicitFunction", &vtk3DLinearGridCrinkleExtractor::GetImplicitFunction, emscripten::allow_raw_pointers())
    .function("SetCopyPointData", &vtk3DLinearGridCrinkleExtractor::SetCopyPointData)
    .function("GetCopyPointData", &vtk3DLinearGridCrinkleExtractor::GetCopyPointData)
    .function("CopyPointDataOn", &vtk3DLinearGridCrinkleExtractor::CopyPointDataOn)
    .function("CopyPointDataOff", &vtk3DLinearGridCrinkleExtractor::CopyPointDataOff)
    .function("SetCopyCellData", &vtk3DLinearGridCrinkleExtractor::SetCopyCellData)
    .function("GetCopyCellData", &vtk3DLinearGridCrinkleExtractor::GetCopyCellData)
    .function("CopyCellDataOn", &vtk3DLinearGridCrinkleExtractor::CopyCellDataOn)
    .function("CopyCellDataOff", &vtk3DLinearGridCrinkleExtractor::CopyCellDataOff)
    .function("SetRemoveUnusedPoints", &vtk3DLinearGridCrinkleExtractor::SetRemoveUnusedPoints)
    .function("GetRemoveUnusedPoints", &vtk3DLinearGridCrinkleExtractor::GetRemoveUnusedPoints)
    .function("RemoveUnusedPointsOn", &vtk3DLinearGridCrinkleExtractor::RemoveUnusedPointsOn)
    .function("RemoveUnusedPointsOff", &vtk3DLinearGridCrinkleExtractor::RemoveUnusedPointsOff)
    .function("GetMTime", &vtk3DLinearGridCrinkleExtractor::GetMTime)
    .function("SetOutputPointsPrecision", &vtk3DLinearGridCrinkleExtractor::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtk3DLinearGridCrinkleExtractor::GetOutputPointsPrecision)
    .function("SetSequentialProcessing", &vtk3DLinearGridCrinkleExtractor::SetSequentialProcessing)
    .function("GetSequentialProcessing", &vtk3DLinearGridCrinkleExtractor::GetSequentialProcessing)
    .function("SequentialProcessingOn", &vtk3DLinearGridCrinkleExtractor::SequentialProcessingOn)
    .function("SequentialProcessingOff", &vtk3DLinearGridCrinkleExtractor::SequentialProcessingOff)
    .function("GetNumberOfThreadsUsed", &vtk3DLinearGridCrinkleExtractor::GetNumberOfThreadsUsed)
    .class_function("CanFullyProcessDataObject", &vtk3DLinearGridCrinkleExtractor::CanFullyProcessDataObject, emscripten::allow_raw_pointers());
}
