// JavaScript wrapper for vtkXMLDataElement with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkXMLDataElementEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkXMLDataElement.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLDataElement.h"

template<> void emscripten::internal::raw_destructor<vtkXMLDataElement>(vtkXMLDataElement * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLDataElement_class) {
  emscripten::class_<vtkXMLDataElement, emscripten::base<vtkObject>>("vtkXMLDataElement")
    .smart_ptr<vtkSmartPointer<vtkXMLDataElement>>("vtkSmartPointer<vtkXMLDataElement>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLDataElement>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataElement::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLDataElement::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLDataElement::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataElement::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetName", emscripten::optional_override([](vtkXMLDataElement& self) -> std::string {  return self.GetName();}))
    .function("SetName", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> void {  return self.SetName( arg_0.c_str());}))
    .function("GetId", emscripten::optional_override([](vtkXMLDataElement& self) -> std::string {  return self.GetId();}))
    .function("SetId", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> void {  return self.SetId( arg_0.c_str());}))
    .function("GetAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> std::string {  return self.GetAttribute( arg_0.c_str());}))
    .function("SetAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.SetAttribute( arg_0.c_str(), arg_1.c_str());}))
    .function("SetCharacterData", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1) -> void {  return self.SetCharacterData( arg_0.c_str(), arg_1);}))
    .function("AddCharacterData", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, size_t arg_1) -> void {  return self.AddCharacterData( arg_0.c_str(), arg_1);}))
    .function("GetCharacterData", emscripten::optional_override([](vtkXMLDataElement& self) -> std::string {  return self.GetCharacterData();}))
    .function("SetIntAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1) -> void {  return self.SetIntAttribute( arg_0.c_str(), arg_1);}))
    .function("SetFloatAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, float arg_1) -> void {  return self.SetFloatAttribute( arg_0.c_str(), arg_1);}))
    .function("SetDoubleAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, double arg_1) -> void {  return self.SetDoubleAttribute( arg_0.c_str(), arg_1);}))
    .function("SetUnsignedLongAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, unsigned long arg_1) -> void {  return self.SetUnsignedLongAttribute( arg_0.c_str(), arg_1);}))
    .function("GetVectorAttribute", emscripten::select_overload<int(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.GetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int))); }))
    .function("GetVectorAttribute", emscripten::select_overload<int(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.GetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float))); }))
    .function("GetVectorAttribute", emscripten::select_overload<int(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.GetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("GetVectorAttribute", emscripten::select_overload<int(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.GetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<long*>(arg_2 * sizeof(long))); }))
    .function("GetVectorAttribute", emscripten::select_overload<int(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.GetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<unsigned long*>(arg_2 * sizeof(unsigned long))); }))
    .function("GetVectorAttribute", emscripten::select_overload<int(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.GetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<long long*>(arg_2 * sizeof(long long))); }))
    .function("GetVectorAttribute", emscripten::select_overload<int(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> int { return self.GetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<unsigned long long*>(arg_2 * sizeof(unsigned long long))); }))
    .function("SetVectorAttribute", emscripten::select_overload<void(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<int*>(arg_2 * sizeof(int))); }))
    .function("SetVectorAttribute", emscripten::select_overload<void(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float))); }))
    .function("SetVectorAttribute", emscripten::select_overload<void(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("SetVectorAttribute", emscripten::select_overload<void(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<unsigned long*>(arg_2 * sizeof(unsigned long))); }))
    .function("SetVectorAttribute", emscripten::select_overload<void(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<long long*>(arg_2 * sizeof(long long))); }))
    .function("SetVectorAttribute", emscripten::select_overload<void(vtkXMLDataElement&, const std::string &, int, std::uintptr_t)>([](vtkXMLDataElement& self, const std::string & arg_0, int arg_1, std::uintptr_t arg_2) -> void { return self.SetVectorAttribute( arg_0.c_str(), arg_1,reinterpret_cast<unsigned long long*>(arg_2 * sizeof(unsigned long long))); }))
    .function("GetNumberOfAttributes", &vtkXMLDataElement::GetNumberOfAttributes)
    .function("GetAttributeName", emscripten::optional_override([](vtkXMLDataElement& self, int arg_0) -> std::string {  return self.GetAttributeName( arg_0);}))
    .function("GetAttributeValue", emscripten::optional_override([](vtkXMLDataElement& self, int arg_0) -> std::string {  return self.GetAttributeValue( arg_0);}))
    .function("RemoveAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> void {  return self.RemoveAttribute( arg_0.c_str());}))
    .function("RemoveAllAttributes", &vtkXMLDataElement::RemoveAllAttributes)
    .function("GetParent", &vtkXMLDataElement::GetParent, emscripten::allow_raw_pointers())
    .function("SetParent", &vtkXMLDataElement::SetParent, emscripten::allow_raw_pointers())
    .function("GetRoot", &vtkXMLDataElement::GetRoot, emscripten::allow_raw_pointers())
    .function("GetNumberOfNestedElements", &vtkXMLDataElement::GetNumberOfNestedElements)
    .function("GetNestedElement", &vtkXMLDataElement::GetNestedElement, emscripten::allow_raw_pointers())
    .function("AddNestedElement", &vtkXMLDataElement::AddNestedElement, emscripten::allow_raw_pointers())
    .function("RemoveNestedElement", &vtkXMLDataElement::RemoveNestedElement, emscripten::allow_raw_pointers())
    .function("RemoveAllNestedElements", &vtkXMLDataElement::RemoveAllNestedElements)
    .function("FindNestedElement", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> vtkXMLDataElement* {  return self.FindNestedElement( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("FindNestedElementWithName", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> vtkXMLDataElement* {  return self.FindNestedElementWithName( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("FindNestedElementWithNameAndId", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, const std::string & arg_1) -> vtkXMLDataElement* {  return self.FindNestedElementWithNameAndId( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("FindNestedElementWithNameAndAttribute", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0, const std::string & arg_1, const std::string & arg_2) -> vtkXMLDataElement* {  return self.FindNestedElementWithNameAndAttribute( arg_0.c_str(), arg_1.c_str(), arg_2.c_str());}), emscripten::allow_raw_pointers())
    .function("LookupElementWithName", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> vtkXMLDataElement* {  return self.LookupElementWithName( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("LookupElement", emscripten::optional_override([](vtkXMLDataElement& self, const std::string & arg_0) -> vtkXMLDataElement* {  return self.LookupElement( arg_0.c_str());}), emscripten::allow_raw_pointers())
    .function("GetXMLByteIndex", &vtkXMLDataElement::GetXMLByteIndex)
    .function("SetXMLByteIndex", &vtkXMLDataElement::SetXMLByteIndex)
    .function("IsEqualTo", &vtkXMLDataElement::IsEqualTo, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkXMLDataElement::DeepCopy, emscripten::allow_raw_pointers())
    .function("SetAttributeEncoding", &vtkXMLDataElement::SetAttributeEncoding)
    .function("GetAttributeEncodingMinValue", &vtkXMLDataElement::GetAttributeEncodingMinValue)
    .function("GetAttributeEncodingMaxValue", &vtkXMLDataElement::GetAttributeEncodingMaxValue)
    .function("GetAttributeEncoding", &vtkXMLDataElement::GetAttributeEncoding)
    .function("PrintXML", emscripten::select_overload<void(vtkXMLDataElement&, const std::string &)>([](vtkXMLDataElement& self, const std::string & arg_0) -> void { return self.PrintXML( arg_0.c_str()); }))
    .function("GetCharacterDataWidth", &vtkXMLDataElement::GetCharacterDataWidth)
    .function("SetCharacterDataWidth", &vtkXMLDataElement::SetCharacterDataWidth);
}
