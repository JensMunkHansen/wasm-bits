// JavaScript wrapper for vtkPointPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPointPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPointPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointPicker.h"

template<> void emscripten::internal::raw_destructor<vtkPointPicker>(vtkPointPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointPicker_class) {
  emscripten::class_<vtkPointPicker, emscripten::base<vtkPicker>>("vtkPointPicker")
    .smart_ptr<vtkSmartPointer<vtkPointPicker>>("vtkSmartPointer<vtkPointPicker>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPointId", &vtkPointPicker::GetPointId)
    .function("SetUseCells", &vtkPointPicker::SetUseCells)
    .function("GetUseCells", &vtkPointPicker::GetUseCells)
    .function("UseCellsOn", &vtkPointPicker::UseCellsOn)
    .function("UseCellsOff", &vtkPointPicker::UseCellsOff);
}
