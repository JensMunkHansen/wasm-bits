// JavaScript wrapper for vtkImageImport with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageImportEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageImport.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageImport.h"

template<> void emscripten::internal::raw_destructor<vtkImageImport>(vtkImageImport * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageImport_class) {
  emscripten::class_<vtkImageImport, emscripten::base<vtkImageAlgorithm>>("vtkImageImport")
    .smart_ptr<vtkSmartPointer<vtkImageImport>>("vtkSmartPointer<vtkImageImport>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageImport>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageImport::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageImport& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageImport::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageImport::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageImport::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageImport& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CopyImportVoidPointer", emscripten::optional_override([](vtkImageImport& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.CopyImportVoidPointer(reinterpret_cast<void*>(arg_0), arg_1);}))
    .function("SetImportVoidPointer", emscripten::select_overload<void(vtkImageImport&, std::uintptr_t)>([](vtkImageImport& self, std::uintptr_t arg_0) -> void { return self.SetImportVoidPointer(reinterpret_cast<void*>(arg_0)); }))
    .function("SetImportVoidPointer", emscripten::select_overload<void(vtkImageImport&, std::uintptr_t, int)>([](vtkImageImport& self, std::uintptr_t arg_0, int arg_1) -> void { return self.SetImportVoidPointer(reinterpret_cast<void*>(arg_0), arg_1); }))
    .function("GetImportVoidPointer", emscripten::optional_override([](vtkImageImport& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetImportVoidPointer());}))
    .function("SetDataScalarType", &vtkImageImport::SetDataScalarType)
    .function("SetDataScalarTypeToDouble", &vtkImageImport::SetDataScalarTypeToDouble)
    .function("SetDataScalarTypeToFloat", &vtkImageImport::SetDataScalarTypeToFloat)
    .function("SetDataScalarTypeToInt", &vtkImageImport::SetDataScalarTypeToInt)
    .function("SetDataScalarTypeToShort", &vtkImageImport::SetDataScalarTypeToShort)
    .function("SetDataScalarTypeToUnsignedShort", &vtkImageImport::SetDataScalarTypeToUnsignedShort)
    .function("SetDataScalarTypeToUnsignedChar", &vtkImageImport::SetDataScalarTypeToUnsignedChar)
    .function("GetDataScalarType", &vtkImageImport::GetDataScalarType)
    .function("GetDataScalarTypeAsString", emscripten::optional_override([](vtkImageImport& self) -> std::string {  return self.GetDataScalarTypeAsString();}))
    .function("SetNumberOfScalarComponents", &vtkImageImport::SetNumberOfScalarComponents)
    .function("GetNumberOfScalarComponents", &vtkImageImport::GetNumberOfScalarComponents)
    .function("SetDataExtent", emscripten::select_overload<void(vtkImageImport&, int, int, int, int, int, int)>([](vtkImageImport& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetDataExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetDataExtentToWholeExtent", &vtkImageImport::SetDataExtentToWholeExtent)
    .function("SetDataSpacing", emscripten::select_overload<void(vtkImageImport&, double, double, double)>([](vtkImageImport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataSpacing( arg_0, arg_1, arg_2); }))
    .function("SetDataOrigin", emscripten::select_overload<void(vtkImageImport&, double, double, double)>([](vtkImageImport& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataOrigin( arg_0, arg_1, arg_2); }))
    .function("SetDataDirection", emscripten::optional_override([](vtkImageImport& self, std::uintptr_t arg_0) -> void {  return self.SetDataDirection(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkImageImport&, int, int, int, int, int, int)>([](vtkImageImport& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetScalarArrayName", emscripten::optional_override([](vtkImageImport& self, const std::string & arg_0) -> void {  return self.SetScalarArrayName( arg_0.c_str());}))
    .function("GetScalarArrayName", emscripten::optional_override([](vtkImageImport& self) -> std::string {  return self.GetScalarArrayName();}))
    .function("SetCallbackUserData", emscripten::optional_override([](vtkImageImport& self, std::uintptr_t arg_0) -> void {  return self.SetCallbackUserData(reinterpret_cast<void*>(arg_0));}))
    .function("GetCallbackUserData", emscripten::optional_override([](vtkImageImport& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCallbackUserData());}))
    .function("InvokePipelineModifiedCallbacks", &vtkImageImport::InvokePipelineModifiedCallbacks)
    .function("InvokeUpdateInformationCallbacks", &vtkImageImport::InvokeUpdateInformationCallbacks)
    .function("InvokeExecuteInformationCallbacks", &vtkImageImport::InvokeExecuteInformationCallbacks)
    .function("InvokeExecuteDataCallbacks", &vtkImageImport::InvokeExecuteDataCallbacks)
    .function("LegacyCheckWholeExtent", &vtkImageImport::LegacyCheckWholeExtent);
}
