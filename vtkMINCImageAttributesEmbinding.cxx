// JavaScript wrapper for vtkMINCImageAttributes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkIOMINC.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOMINC.js/vtkMINCImageAttributesEmbinding.cxx \
 /home/jmh/github/vtk/IO/MINC/vtkMINCImageAttributes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkIdTypeArray.h"
#include "vtkDoubleArray.h"
#include "vtkDataArray.h"
#include "vtkMINCImageAttributes.h"

template<> void emscripten::internal::raw_destructor<vtkMINCImageAttributes>(vtkMINCImageAttributes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMINCImageAttributes_class) {
  emscripten::class_<vtkMINCImageAttributes, emscripten::base<vtkObject>>("vtkMINCImageAttributes")
    .smart_ptr<vtkSmartPointer<vtkMINCImageAttributes>>("vtkSmartPointer<vtkMINCImageAttributes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMINCImageAttributes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMINCImageAttributes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMINCImageAttributes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMINCImageAttributes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMINCImageAttributes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reset", &vtkMINCImageAttributes::Reset)
    .function("SetName", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0) -> void {  return self.SetName( arg_0.c_str());}))
    .function("GetName", emscripten::optional_override([](vtkMINCImageAttributes& self) -> std::string {  return self.GetName();}))
    .function("SetDataType", &vtkMINCImageAttributes::SetDataType)
    .function("GetDataType", &vtkMINCImageAttributes::GetDataType)
    .function("AddDimension", emscripten::select_overload<void(vtkMINCImageAttributes&, const std::string &)>([](vtkMINCImageAttributes& self, const std::string & arg_0) -> void { return self.AddDimension( arg_0.c_str()); }))
    .function("AddDimension", emscripten::select_overload<void(vtkMINCImageAttributes&, const std::string &, int)>([](vtkMINCImageAttributes& self, const std::string & arg_0, int arg_1) -> void { return self.AddDimension( arg_0.c_str(), arg_1); }))
    .function("GetDimensionNames", &vtkMINCImageAttributes::GetDimensionNames, emscripten::allow_raw_pointers())
    .function("GetDimensionLengths", &vtkMINCImageAttributes::GetDimensionLengths, emscripten::allow_raw_pointers())
    .function("GetVariableNames", &vtkMINCImageAttributes::GetVariableNames, emscripten::allow_raw_pointers())
    .function("GetAttributeNames", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0) -> vtkStringArray* {  return self.GetAttributeNames( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("SetImageMin", &vtkMINCImageAttributes::SetImageMin, emscripten::allow_raw_pointers())
    .function("SetImageMax", &vtkMINCImageAttributes::SetImageMax, emscripten::allow_raw_pointers())
    .function("GetImageMin", &vtkMINCImageAttributes::GetImageMin, emscripten::allow_raw_pointers())
    .function("GetImageMax", &vtkMINCImageAttributes::GetImageMax, emscripten::allow_raw_pointers())
    .function("GetNumberOfImageMinMaxDimensions", &vtkMINCImageAttributes::GetNumberOfImageMinMaxDimensions)
    .function("SetNumberOfImageMinMaxDimensions", &vtkMINCImageAttributes::SetNumberOfImageMinMaxDimensions)
    .function("HasAttribute", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1) -> int {  return self.HasAttribute( arg_0.c_str(), arg_1.c_str());}))
    .function("SetAttributeValueAsArray", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1, vtkDataArray* arg_2) -> void {  return self.SetAttributeValueAsArray( arg_0.c_str(), arg_1.c_str(), arg_2);}), emscripten::allow_raw_pointers())
    .function("GetAttributeValueAsArray", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1) -> vtkDataArray* {  return self.GetAttributeValueAsArray( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("SetAttributeValueAsString", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> void {  return self.SetAttributeValueAsString( arg_0.c_str(), arg_1.c_str(), arg_2.c_str());}))
    .function("GetAttributeValueAsString", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1) -> std::string {  return self.GetAttributeValueAsString( arg_0.c_str(), arg_1.c_str());}))
    .function("SetAttributeValueAsInt", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1, int arg_2) -> void {  return self.SetAttributeValueAsInt( arg_0.c_str(), arg_1.c_str(), arg_2);}))
    .function("GetAttributeValueAsInt", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1) -> int {  return self.GetAttributeValueAsInt( arg_0.c_str(), arg_1.c_str());}))
    .function("SetAttributeValueAsDouble", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1, double arg_2) -> void {  return self.SetAttributeValueAsDouble( arg_0.c_str(), arg_1.c_str(), arg_2);}))
    .function("GetAttributeValueAsDouble", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1) -> double {  return self.GetAttributeValueAsDouble( arg_0.c_str(), arg_1.c_str());}))
    .function("ValidateAttribute", emscripten::optional_override([](vtkMINCImageAttributes& self, const std::string & arg_0, const std::string & arg_1, vtkDataArray* arg_2) -> int {  return self.ValidateAttribute( arg_0.c_str(), arg_1.c_str(), arg_2);}), emscripten::allow_raw_pointers())
    .function("SetValidateAttributes", &vtkMINCImageAttributes::SetValidateAttributes)
    .function("ValidateAttributesOn", &vtkMINCImageAttributes::ValidateAttributesOn)
    .function("ValidateAttributesOff", &vtkMINCImageAttributes::ValidateAttributesOff)
    .function("GetValidateAttributes", &vtkMINCImageAttributes::GetValidateAttributes)
    .function("ShallowCopy", &vtkMINCImageAttributes::ShallowCopy, emscripten::allow_raw_pointers())
    .function("PrintFileHeader", emscripten::select_overload<void(vtkMINCImageAttributes&)>([](vtkMINCImageAttributes& self) -> void { return self.PrintFileHeader(); }));
}
