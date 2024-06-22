// JavaScript wrapper for vtkLabelSizeCalculator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabelSizeCalculatorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabelSizeCalculator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkTextProperty.h"
#include "vtkLabelSizeCalculator.h"

template<> void emscripten::internal::raw_destructor<vtkLabelSizeCalculator>(vtkLabelSizeCalculator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabelSizeCalculator_class) {
  emscripten::class_<vtkLabelSizeCalculator, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkLabelSizeCalculator")
    .smart_ptr<vtkSmartPointer<vtkLabelSizeCalculator>>("vtkSmartPointer<vtkLabelSizeCalculator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLabelSizeCalculator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelSizeCalculator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabelSizeCalculator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabelSizeCalculator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabelSizeCalculator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabelSizeCalculator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabelSizeCalculator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFontProperty", &vtkLabelSizeCalculator::SetFontProperty, emscripten::allow_raw_pointers())
    .function("GetFontProperty", &vtkLabelSizeCalculator::GetFontProperty, emscripten::allow_raw_pointers())
    .function("SetLabelSizeArrayName", emscripten::optional_override([](vtkLabelSizeCalculator& self, const std::string & arg_0) -> void {  return self.SetLabelSizeArrayName( arg_0.c_str());}))
    .function("GetLabelSizeArrayName", emscripten::optional_override([](vtkLabelSizeCalculator& self) -> std::string {  return self.GetLabelSizeArrayName();}))
    .function("SetDPI", &vtkLabelSizeCalculator::SetDPI)
    .function("GetDPI", &vtkLabelSizeCalculator::GetDPI);
}
