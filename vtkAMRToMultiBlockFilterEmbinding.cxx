// JavaScript wrapper for vtkAMRToMultiBlockFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkFiltersAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersAMR.js/vtkAMRToMultiBlockFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/AMR/vtkAMRToMultiBlockFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkAMRToMultiBlockFilter.h"

template<> void emscripten::internal::raw_destructor<vtkAMRToMultiBlockFilter>(vtkAMRToMultiBlockFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRToMultiBlockFilter_class) {
  emscripten::class_<vtkAMRToMultiBlockFilter, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkAMRToMultiBlockFilter")
    .smart_ptr<vtkSmartPointer<vtkAMRToMultiBlockFilter>>("vtkSmartPointer<vtkAMRToMultiBlockFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMRToMultiBlockFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRToMultiBlockFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRToMultiBlockFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRToMultiBlockFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRToMultiBlockFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRToMultiBlockFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRToMultiBlockFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkAMRToMultiBlockFilter::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkAMRToMultiBlockFilter::GetController, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkAMRToMultiBlockFilter::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("FillOutputPortInformation", &vtkAMRToMultiBlockFilter::FillOutputPortInformation, emscripten::allow_raw_pointers());
}
