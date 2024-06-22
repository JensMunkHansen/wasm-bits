// JavaScript wrapper for vtkExtractDataOverTime with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractDataOverTimeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractDataOverTime.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractDataOverTime.h"

template<> void emscripten::internal::raw_destructor<vtkExtractDataOverTime>(vtkExtractDataOverTime * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractDataOverTime_class) {
  emscripten::class_<vtkExtractDataOverTime, emscripten::base<vtkPointSetAlgorithm>>("vtkExtractDataOverTime")
    .smart_ptr<vtkSmartPointer<vtkExtractDataOverTime>>("vtkSmartPointer<vtkExtractDataOverTime>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractDataOverTime>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractDataOverTime::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractDataOverTime& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractDataOverTime::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractDataOverTime::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractDataOverTime::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractDataOverTime& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointIndex", &vtkExtractDataOverTime::SetPointIndex)
    .function("GetPointIndex", &vtkExtractDataOverTime::GetPointIndex)
    .function("GetNumberOfTimeSteps", &vtkExtractDataOverTime::GetNumberOfTimeSteps);
}
