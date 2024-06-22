// JavaScript wrapper for vtkTransferAttributes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTransferAttributesEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTransferAttributes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkTransferAttributes.h"

template<> void emscripten::internal::raw_destructor<vtkTransferAttributes>(vtkTransferAttributes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTransferAttributes_class) {
  emscripten::class_<vtkTransferAttributes, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkTransferAttributes")
    .smart_ptr<vtkSmartPointer<vtkTransferAttributes>>("vtkSmartPointer<vtkTransferAttributes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTransferAttributes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransferAttributes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTransferAttributes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTransferAttributes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTransferAttributes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTransferAttributes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTransferAttributes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDirectMapping", &vtkTransferAttributes::SetDirectMapping)
    .function("GetDirectMapping", &vtkTransferAttributes::GetDirectMapping)
    .function("DirectMappingOn", &vtkTransferAttributes::DirectMappingOn)
    .function("DirectMappingOff", &vtkTransferAttributes::DirectMappingOff)
    .function("GetSourceArrayName", emscripten::optional_override([](vtkTransferAttributes& self) -> std::string {  return self.GetSourceArrayName();}))
    .function("SetSourceArrayName", emscripten::optional_override([](vtkTransferAttributes& self, const std::string & arg_0) -> void {  return self.SetSourceArrayName( arg_0.c_str());}))
    .function("GetTargetArrayName", emscripten::optional_override([](vtkTransferAttributes& self) -> std::string {  return self.GetTargetArrayName();}))
    .function("SetTargetArrayName", emscripten::optional_override([](vtkTransferAttributes& self, const std::string & arg_0) -> void {  return self.SetTargetArrayName( arg_0.c_str());}))
    .function("GetSourceFieldType", &vtkTransferAttributes::GetSourceFieldType)
    .function("SetSourceFieldType", &vtkTransferAttributes::SetSourceFieldType)
    .function("GetTargetFieldType", &vtkTransferAttributes::GetTargetFieldType)
    .function("SetTargetFieldType", &vtkTransferAttributes::SetTargetFieldType)
    .function("GetDefaultValue", &vtkTransferAttributes::GetDefaultValue)
    .function("SetDefaultValue", &vtkTransferAttributes::SetDefaultValue)
    .function("FillInputPortInformation", &vtkTransferAttributes::FillInputPortInformation, emscripten::allow_raw_pointers());
}
