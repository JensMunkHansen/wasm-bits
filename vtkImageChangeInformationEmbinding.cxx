// JavaScript wrapper for vtkImageChangeInformation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageChangeInformationEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageChangeInformation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkImageChangeInformation.h"

template<> void emscripten::internal::raw_destructor<vtkImageChangeInformation>(vtkImageChangeInformation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageChangeInformation_class) {
  emscripten::class_<vtkImageChangeInformation, emscripten::base<vtkImageAlgorithm>>("vtkImageChangeInformation")
    .smart_ptr<vtkSmartPointer<vtkImageChangeInformation>>("vtkSmartPointer<vtkImageChangeInformation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageChangeInformation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageChangeInformation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageChangeInformation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageChangeInformation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageChangeInformation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageChangeInformation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageChangeInformation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInformationInputData", &vtkImageChangeInformation::SetInformationInputData, emscripten::allow_raw_pointers())
    .function("GetInformationInput", &vtkImageChangeInformation::GetInformationInput, emscripten::allow_raw_pointers())
    .function("SetOutputExtentStart", emscripten::select_overload<void(vtkImageChangeInformation&, int, int, int)>([](vtkImageChangeInformation& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetOutputExtentStart( arg_0, arg_1, arg_2); }))
    .function("SetOutputSpacing", emscripten::select_overload<void(vtkImageChangeInformation&, double, double, double)>([](vtkImageChangeInformation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputSpacing( arg_0, arg_1, arg_2); }))
    .function("SetOutputDirection", emscripten::optional_override([](vtkImageChangeInformation& self, std::uintptr_t arg_0) -> void {  return self.SetOutputDirection(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("SetOutputOrigin", emscripten::select_overload<void(vtkImageChangeInformation&, double, double, double)>([](vtkImageChangeInformation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutputOrigin( arg_0, arg_1, arg_2); }))
    .function("SetCenterImage", &vtkImageChangeInformation::SetCenterImage)
    .function("CenterImageOn", &vtkImageChangeInformation::CenterImageOn)
    .function("CenterImageOff", &vtkImageChangeInformation::CenterImageOff)
    .function("GetCenterImage", &vtkImageChangeInformation::GetCenterImage)
    .function("SetExtentTranslation", emscripten::select_overload<void(vtkImageChangeInformation&, int, int, int)>([](vtkImageChangeInformation& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetExtentTranslation( arg_0, arg_1, arg_2); }))
    .function("SetSpacingScale", emscripten::select_overload<void(vtkImageChangeInformation&, double, double, double)>([](vtkImageChangeInformation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSpacingScale( arg_0, arg_1, arg_2); }))
    .function("SetOriginTranslation", emscripten::select_overload<void(vtkImageChangeInformation&, double, double, double)>([](vtkImageChangeInformation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOriginTranslation( arg_0, arg_1, arg_2); }))
    .function("SetOriginScale", emscripten::select_overload<void(vtkImageChangeInformation&, double, double, double)>([](vtkImageChangeInformation& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOriginScale( arg_0, arg_1, arg_2); }));
}
