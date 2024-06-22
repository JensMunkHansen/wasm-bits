// JavaScript wrapper for vtkGeoProjection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkGeovisCore.js/vtkGeovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkGeovisCore.js/vtkGeoProjectionEmbinding.cxx \
 /home/jmh/github/vtk/Geovis/Core/vtkGeoProjection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkGeoProjection.h"

template<> void emscripten::internal::raw_destructor<vtkGeoProjection>(vtkGeoProjection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeoProjection_class) {
  emscripten::class_<vtkGeoProjection, emscripten::base<vtkObject>>("vtkGeoProjection")
    .smart_ptr<vtkSmartPointer<vtkGeoProjection>>("vtkSmartPointer<vtkGeoProjection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGeoProjection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoProjection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeoProjection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeoProjection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeoProjection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoProjection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeoProjection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetNumberOfProjections", &vtkGeoProjection::GetNumberOfProjections)
    .class_function("GetProjectionName", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkGeoProjection::GetProjectionName( arg_0);}))
    .class_function("GetProjectionDescription", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkGeoProjection::GetProjectionDescription( arg_0);}))
    .function("SetName", emscripten::optional_override([](vtkGeoProjection& self, const std::string & arg_0) -> void {  return self.SetName( arg_0.c_str());}))
    .function("GetName", emscripten::optional_override([](vtkGeoProjection& self) -> std::string {  return self.GetName();}))
    .function("GetIndex", &vtkGeoProjection::GetIndex)
    .function("GetDescription", emscripten::optional_override([](vtkGeoProjection& self) -> std::string {  return self.GetDescription();}))
    .function("SetCentralMeridian", &vtkGeoProjection::SetCentralMeridian)
    .function("GetCentralMeridian", &vtkGeoProjection::GetCentralMeridian)
    .function("SetOptionalParameter", emscripten::optional_override([](vtkGeoProjection& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.SetOptionalParameter( arg_0.c_str(), arg_1.c_str());}))
    .function("RemoveOptionalParameter", emscripten::optional_override([](vtkGeoProjection& self, const std::string & arg_0) -> void {  return self.RemoveOptionalParameter( arg_0.c_str());}))
    .function("GetNumberOfOptionalParameters", &vtkGeoProjection::GetNumberOfOptionalParameters)
    .function("GetOptionalParameterKey", emscripten::optional_override([](vtkGeoProjection& self, int arg_0) -> std::string {  return self.GetOptionalParameterKey( arg_0);}))
    .function("GetOptionalParameterValue", emscripten::optional_override([](vtkGeoProjection& self, int arg_0) -> std::string {  return self.GetOptionalParameterValue( arg_0);}))
    .function("ClearOptionalParameters", &vtkGeoProjection::ClearOptionalParameters)
    .function("SetPROJ4String", emscripten::optional_override([](vtkGeoProjection& self, const std::string & arg_0) -> void {  return self.SetPROJ4String( arg_0.c_str());}))
    .function("GetPROJ4String", emscripten::optional_override([](vtkGeoProjection& self) -> std::string {  return self.GetPROJ4String();}));
}
