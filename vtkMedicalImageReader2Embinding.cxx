// JavaScript wrapper for vtkMedicalImageReader2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkMedicalImageReader2Embinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkMedicalImageReader2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMedicalImageProperties.h"
#include "vtkMedicalImageReader2.h"

template<> void emscripten::internal::raw_destructor<vtkMedicalImageReader2>(vtkMedicalImageReader2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMedicalImageReader2_class) {
  emscripten::class_<vtkMedicalImageReader2, emscripten::base<vtkImageReader2>>("vtkMedicalImageReader2")
    .smart_ptr<vtkSmartPointer<vtkMedicalImageReader2>>("vtkSmartPointer<vtkMedicalImageReader2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMedicalImageReader2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMedicalImageReader2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMedicalImageReader2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMedicalImageReader2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMedicalImageReader2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMedicalImageProperties", &vtkMedicalImageReader2::GetMedicalImageProperties, emscripten::allow_raw_pointers())
    .function("SetPatientName", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> void {  return self.SetPatientName( arg_0.c_str());}))
    .function("GetPatientName", emscripten::optional_override([](vtkMedicalImageReader2& self) -> std::string {  return self.GetPatientName();}))
    .function("SetPatientID", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> void {  return self.SetPatientID( arg_0.c_str());}))
    .function("GetPatientID", emscripten::optional_override([](vtkMedicalImageReader2& self) -> std::string {  return self.GetPatientID();}))
    .function("SetDate", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> void {  return self.SetDate( arg_0.c_str());}))
    .function("GetDate", emscripten::optional_override([](vtkMedicalImageReader2& self) -> std::string {  return self.GetDate();}))
    .function("SetSeries", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> void {  return self.SetSeries( arg_0.c_str());}))
    .function("GetSeries", emscripten::optional_override([](vtkMedicalImageReader2& self) -> std::string {  return self.GetSeries();}))
    .function("SetStudy", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> void {  return self.SetStudy( arg_0.c_str());}))
    .function("GetStudy", emscripten::optional_override([](vtkMedicalImageReader2& self) -> std::string {  return self.GetStudy();}))
    .function("SetImageNumber", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> void {  return self.SetImageNumber( arg_0.c_str());}))
    .function("GetImageNumber", emscripten::optional_override([](vtkMedicalImageReader2& self) -> std::string {  return self.GetImageNumber();}))
    .function("SetModality", emscripten::optional_override([](vtkMedicalImageReader2& self, const std::string & arg_0) -> void {  return self.SetModality( arg_0.c_str());}))
    .function("GetModality", emscripten::optional_override([](vtkMedicalImageReader2& self) -> std::string {  return self.GetModality();}));
}
