// JavaScript wrapper for vtkRIBProperty with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkRIBPropertyEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkRIBProperty.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRIBProperty.h"

template<> void emscripten::internal::raw_destructor<vtkRIBProperty>(vtkRIBProperty * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRIBProperty_class) {
  emscripten::class_<vtkRIBProperty, emscripten::base<vtkProperty>>("vtkRIBProperty")
    .smart_ptr<vtkSmartPointer<vtkRIBProperty>>("vtkSmartPointer<vtkRIBProperty>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRIBProperty>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRIBProperty::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRIBProperty::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRIBProperty::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRIBProperty::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSurfaceShaderUsesDefaultParameters", &vtkRIBProperty::SetSurfaceShaderUsesDefaultParameters)
    .function("GetSurfaceShaderUsesDefaultParameters", &vtkRIBProperty::GetSurfaceShaderUsesDefaultParameters)
    .function("SurfaceShaderUsesDefaultParametersOn", &vtkRIBProperty::SurfaceShaderUsesDefaultParametersOn)
    .function("SurfaceShaderUsesDefaultParametersOff", &vtkRIBProperty::SurfaceShaderUsesDefaultParametersOff)
    .function("SetSurfaceShader", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0) -> void {  return self.SetSurfaceShader( arg_0.c_str());}))
    .function("GetSurfaceShader", emscripten::optional_override([](vtkRIBProperty& self) -> std::string {  return self.GetSurfaceShader();}))
    .function("SetDisplacementShader", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0) -> void {  return self.SetDisplacementShader( arg_0.c_str());}))
    .function("GetDisplacementShader", emscripten::optional_override([](vtkRIBProperty& self) -> std::string {  return self.GetDisplacementShader();}))
    .function("SetVariable", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.SetVariable( arg_0.c_str(), arg_1.c_str());}))
    .function("AddVariable", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddVariable( arg_0.c_str(), arg_1.c_str());}))
    .function("GetDeclarations", emscripten::optional_override([](vtkRIBProperty& self) -> std::string {  return self.GetDeclarations();}))
    .function("SetParameter", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.SetParameter( arg_0.c_str(), arg_1.c_str());}))
    .function("AddParameter", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddParameter( arg_0.c_str(), arg_1.c_str());}))
    .function("SetSurfaceShaderParameter", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.SetSurfaceShaderParameter( arg_0.c_str(), arg_1.c_str());}))
    .function("AddSurfaceShaderParameter", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddSurfaceShaderParameter( arg_0.c_str(), arg_1.c_str());}))
    .function("SetDisplacementShaderParameter", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.SetDisplacementShaderParameter( arg_0.c_str(), arg_1.c_str());}))
    .function("AddDisplacementShaderParameter", emscripten::optional_override([](vtkRIBProperty& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddDisplacementShaderParameter( arg_0.c_str(), arg_1.c_str());}))
    .function("GetParameters", emscripten::optional_override([](vtkRIBProperty& self) -> std::string {  return self.GetParameters();}))
    .function("GetSurfaceShaderParameters", emscripten::optional_override([](vtkRIBProperty& self) -> std::string {  return self.GetSurfaceShaderParameters();}))
    .function("GetDisplacementShaderParameters", emscripten::optional_override([](vtkRIBProperty& self) -> std::string {  return self.GetDisplacementShaderParameters();}));
}
