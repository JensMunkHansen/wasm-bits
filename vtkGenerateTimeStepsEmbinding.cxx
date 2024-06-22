// JavaScript wrapper for vtkGenerateTimeSteps with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkGenerateTimeStepsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkGenerateTimeSteps.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenerateTimeSteps.h"

template<> void emscripten::internal::raw_destructor<vtkGenerateTimeSteps>(vtkGenerateTimeSteps * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenerateTimeSteps_class) {
  emscripten::class_<vtkGenerateTimeSteps, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkGenerateTimeSteps")
    .smart_ptr<vtkSmartPointer<vtkGenerateTimeSteps>>("vtkSmartPointer<vtkGenerateTimeSteps>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenerateTimeSteps>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateTimeSteps::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenerateTimeSteps& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenerateTimeSteps::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenerateTimeSteps::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateTimeSteps::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenerateTimeSteps& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfTimeSteps", &vtkGenerateTimeSteps::GetNumberOfTimeSteps)
    .function("AddTimeStepValue", &vtkGenerateTimeSteps::AddTimeStepValue)
    .function("SetTimeStepValues", emscripten::optional_override([](vtkGenerateTimeSteps& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetTimeStepValues( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("GetTimeStepValues", emscripten::optional_override([](vtkGenerateTimeSteps& self, std::uintptr_t arg_0) -> void {  return self.GetTimeStepValues(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GenerateTimeStepValues", &vtkGenerateTimeSteps::GenerateTimeStepValues)
    .function("ClearTimeStepValues", &vtkGenerateTimeSteps::ClearTimeStepValues);
}
