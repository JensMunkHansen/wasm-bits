// JavaScript wrapper for vtkImageDataToUniformGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkImageDataToUniformGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkImageDataToUniformGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageDataToUniformGrid.h"

template<> void emscripten::internal::raw_destructor<vtkImageDataToUniformGrid>(vtkImageDataToUniformGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageDataToUniformGrid_class) {
  emscripten::class_<vtkImageDataToUniformGrid, emscripten::base<vtkDataObjectAlgorithm>>("vtkImageDataToUniformGrid")
    .smart_ptr<vtkSmartPointer<vtkImageDataToUniformGrid>>("vtkSmartPointer<vtkImageDataToUniformGrid>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageDataToUniformGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataToUniformGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageDataToUniformGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageDataToUniformGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageDataToUniformGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageDataToUniformGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageDataToUniformGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetReverse", &vtkImageDataToUniformGrid::SetReverse)
    .function("GetReverseMinValue", &vtkImageDataToUniformGrid::GetReverseMinValue)
    .function("GetReverseMaxValue", &vtkImageDataToUniformGrid::GetReverseMaxValue)
    .function("GetReverse", &vtkImageDataToUniformGrid::GetReverse)
    .function("ReverseOn", &vtkImageDataToUniformGrid::ReverseOn)
    .function("ReverseOff", &vtkImageDataToUniformGrid::ReverseOff);
}
