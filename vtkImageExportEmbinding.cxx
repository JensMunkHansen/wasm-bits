// JavaScript wrapper for vtkImageExport with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageExportEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageExport.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkImageExport.h"

template<> void emscripten::internal::raw_destructor<vtkImageExport>(vtkImageExport * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageExport_class) {
  emscripten::class_<vtkImageExport, emscripten::base<vtkImageAlgorithm>>("vtkImageExport")
    .smart_ptr<vtkSmartPointer<vtkImageExport>>("vtkSmartPointer<vtkImageExport>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageExport>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageExport::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageExport& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageExport::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageExport::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageExport::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageExport& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataMemorySize", &vtkImageExport::GetDataMemorySize)
    .function("GetDataDimensions", emscripten::select_overload<void(vtkImageExport&, std::uintptr_t)>([](vtkImageExport& self, std::uintptr_t arg_0) -> void { return self.GetDataDimensions(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("GetDataNumberOfScalarComponents", &vtkImageExport::GetDataNumberOfScalarComponents)
    .function("GetDataScalarType", &vtkImageExport::GetDataScalarType)
    .function("GetDataScalarTypeAsString", emscripten::optional_override([](vtkImageExport& self) -> std::string {  return self.GetDataScalarTypeAsString();}))
    .function("GetDataExtent", emscripten::select_overload<void(vtkImageExport&, std::uintptr_t)>([](vtkImageExport& self, std::uintptr_t arg_0) -> void { return self.GetDataExtent(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("GetDataSpacing", emscripten::select_overload<void(vtkImageExport&, std::uintptr_t)>([](vtkImageExport& self, std::uintptr_t arg_0) -> void { return self.GetDataSpacing(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetDataOrigin", emscripten::select_overload<void(vtkImageExport&, std::uintptr_t)>([](vtkImageExport& self, std::uintptr_t arg_0) -> void { return self.GetDataOrigin(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetDataDirection", emscripten::select_overload<void(vtkImageExport&, std::uintptr_t)>([](vtkImageExport& self, std::uintptr_t arg_0) -> void { return self.GetDataDirection(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("GetInput", &vtkImageExport::GetInput, emscripten::allow_raw_pointers())
    .function("ImageLowerLeftOn", &vtkImageExport::ImageLowerLeftOn)
    .function("ImageLowerLeftOff", &vtkImageExport::ImageLowerLeftOff)
    .function("GetImageLowerLeft", &vtkImageExport::GetImageLowerLeft)
    .function("SetImageLowerLeft", &vtkImageExport::SetImageLowerLeft)
    .function("SetExportVoidPointer", emscripten::optional_override([](vtkImageExport& self, std::uintptr_t arg_0) -> void {  return self.SetExportVoidPointer(reinterpret_cast<void*>(arg_0));}))
    .function("GetExportVoidPointer", emscripten::optional_override([](vtkImageExport& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetExportVoidPointer());}))
    .function("Export", emscripten::select_overload<void(vtkImageExport&)>([](vtkImageExport& self) -> void { return self.Export(); }))
    .function("Export", emscripten::select_overload<void(vtkImageExport&, std::uintptr_t)>([](vtkImageExport& self, std::uintptr_t arg_0) -> void { return self.Export(reinterpret_cast<void*>(arg_0)); }))
    .function("GetPointerToData", emscripten::optional_override([](vtkImageExport& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPointerToData());}))
    .function("GetCallbackUserData", emscripten::optional_override([](vtkImageExport& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCallbackUserData());}));
}
