// JavaScript wrapper for vtkBase64Utilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkBase64UtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkBase64Utilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBase64Utilities.h"

template<> void emscripten::internal::raw_destructor<vtkBase64Utilities>(vtkBase64Utilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBase64Utilities_class) {
  emscripten::class_<vtkBase64Utilities, emscripten::base<vtkObject>>("vtkBase64Utilities")
    .smart_ptr<vtkSmartPointer<vtkBase64Utilities>>("vtkSmartPointer<vtkBase64Utilities>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBase64Utilities>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBase64Utilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBase64Utilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBase64Utilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBase64Utilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBase64Utilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBase64Utilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("EncodeTriplet", emscripten::optional_override([]( unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5, std::uintptr_t arg_6) -> void {  return vtkBase64Utilities::EncodeTriplet( arg_0, arg_1, arg_2,reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_5 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_6 * sizeof(unsigned char)));}))
    .class_function("EncodePair", emscripten::optional_override([]( unsigned char arg_0, unsigned char arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5) -> void {  return vtkBase64Utilities::EncodePair( arg_0, arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_5 * sizeof(unsigned char)));}))
    .class_function("EncodeSingle", emscripten::optional_override([]( unsigned char arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4) -> void {  return vtkBase64Utilities::EncodeSingle( arg_0,reinterpret_cast<unsigned char*>(arg_1 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)));}))
    .class_function("Encode", emscripten::optional_override([]( std::uintptr_t arg_0, unsigned long arg_1, std::uintptr_t arg_2, int arg_3) -> unsigned long {  return vtkBase64Utilities::Encode(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .class_function("DecodeTriplet", emscripten::optional_override([]( unsigned char arg_0, unsigned char arg_1, unsigned char arg_2, unsigned char arg_3, std::uintptr_t arg_4, std::uintptr_t arg_5, std::uintptr_t arg_6) -> int {  return vtkBase64Utilities::DecodeTriplet( arg_0, arg_1, arg_2, arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_5 * sizeof(unsigned char)),reinterpret_cast<unsigned char*>(arg_6 * sizeof(unsigned char)));}))
    .class_function("DecodeSafely", emscripten::optional_override([]( std::uintptr_t arg_0, size_t arg_1, std::uintptr_t arg_2, size_t arg_3) -> size_t {  return vtkBase64Utilities::DecodeSafely(reinterpret_cast<unsigned char*>(arg_0 * sizeof(unsigned char)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}));
}
