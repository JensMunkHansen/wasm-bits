// JavaScript wrapper for vtkVectorText with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkRenderingFreeType.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkVectorTextEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/FreeType/vtkVectorText.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVectorText.h"

template<> void emscripten::internal::raw_destructor<vtkVectorText>(vtkVectorText * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVectorText_class) {
  emscripten::class_<vtkVectorText, emscripten::base<vtkPolyDataAlgorithm>>("vtkVectorText")
    .smart_ptr<vtkSmartPointer<vtkVectorText>>("vtkSmartPointer<vtkVectorText>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVectorText>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorText::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVectorText& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVectorText::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVectorText::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorText::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVectorText& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetText", emscripten::optional_override([](vtkVectorText& self, const std::string & arg_0) -> void {  return self.SetText( arg_0.c_str());}))
    .function("GetText", emscripten::optional_override([](vtkVectorText& self) -> std::string {  return self.GetText();}));
}
