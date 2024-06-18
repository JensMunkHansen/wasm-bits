// JavaScript wrapper for vtkImageToStructuredGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkImageToStructuredGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkImageToStructuredGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageToStructuredGrid.h"

template<> void emscripten::internal::raw_destructor<vtkImageToStructuredGrid>(vtkImageToStructuredGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageToStructuredGrid_class) {
  emscripten::class_<vtkImageToStructuredGrid, emscripten::base<vtkStructuredGridAlgorithm>>("vtkImageToStructuredGrid")
    .smart_ptr<vtkSmartPointer<vtkImageToStructuredGrid>>("vtkSmartPointer<vtkImageToStructuredGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageToStructuredGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToStructuredGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageToStructuredGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageToStructuredGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageToStructuredGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageToStructuredGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageToStructuredGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
