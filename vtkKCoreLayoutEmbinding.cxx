// JavaScript wrapper for vtkKCoreLayout with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkKCoreLayoutEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkKCoreLayout.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkKCoreLayout.h"

template<> void emscripten::internal::raw_destructor<vtkKCoreLayout>(vtkKCoreLayout * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkKCoreLayout_class) {
  emscripten::class_<vtkKCoreLayout, emscripten::base<vtkGraphAlgorithm>>("vtkKCoreLayout")
    .smart_ptr<vtkSmartPointer<vtkKCoreLayout>>("vtkSmartPointer<vtkKCoreLayout>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkKCoreLayout>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKCoreLayout::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkKCoreLayout& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkKCoreLayout::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkKCoreLayout::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkKCoreLayout::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkKCoreLayout& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraphConnection", &vtkKCoreLayout::SetGraphConnection, emscripten::allow_raw_pointers())
    .function("FillInputPortInformation", &vtkKCoreLayout::FillInputPortInformation, emscripten::allow_raw_pointers())
    .function("SetKCoreLabelArrayName", emscripten::optional_override([](vtkKCoreLayout& self, const std::string & arg_0) -> void {  return self.SetKCoreLabelArrayName( arg_0.c_str());}))
    .function("GetPolar", &vtkKCoreLayout::GetPolar)
    .function("SetPolar", &vtkKCoreLayout::SetPolar)
    .function("PolarOn", &vtkKCoreLayout::PolarOn)
    .function("PolarOff", &vtkKCoreLayout::PolarOff)
    .function("GetCartesian", &vtkKCoreLayout::GetCartesian)
    .function("SetCartesian", &vtkKCoreLayout::SetCartesian)
    .function("CartesianOn", &vtkKCoreLayout::CartesianOn)
    .function("CartesianOff", &vtkKCoreLayout::CartesianOff)
    .function("SetPolarCoordsRadiusArrayName", emscripten::optional_override([](vtkKCoreLayout& self, const std::string & arg_0) -> void {  return self.SetPolarCoordsRadiusArrayName( arg_0.c_str());}))
    .function("GetPolarCoordsRadiusArrayName", emscripten::optional_override([](vtkKCoreLayout& self) -> std::string {  return self.GetPolarCoordsRadiusArrayName();}))
    .function("SetPolarCoordsAngleArrayName", emscripten::optional_override([](vtkKCoreLayout& self, const std::string & arg_0) -> void {  return self.SetPolarCoordsAngleArrayName( arg_0.c_str());}))
    .function("GetPolarCoordsAngleArrayName", emscripten::optional_override([](vtkKCoreLayout& self) -> std::string {  return self.GetPolarCoordsAngleArrayName();}))
    .function("SetCartesianCoordsXArrayName", emscripten::optional_override([](vtkKCoreLayout& self, const std::string & arg_0) -> void {  return self.SetCartesianCoordsXArrayName( arg_0.c_str());}))
    .function("GetCartesianCoordsXArrayName", emscripten::optional_override([](vtkKCoreLayout& self) -> std::string {  return self.GetCartesianCoordsXArrayName();}))
    .function("SetCartesianCoordsYArrayName", emscripten::optional_override([](vtkKCoreLayout& self, const std::string & arg_0) -> void {  return self.SetCartesianCoordsYArrayName( arg_0.c_str());}))
    .function("GetCartesianCoordsYArrayName", emscripten::optional_override([](vtkKCoreLayout& self) -> std::string {  return self.GetCartesianCoordsYArrayName();}))
    .function("SetEpsilon", &vtkKCoreLayout::SetEpsilon)
    .function("GetEpsilon", &vtkKCoreLayout::GetEpsilon)
    .function("SetUnitRadius", &vtkKCoreLayout::SetUnitRadius)
    .function("GetUnitRadius", &vtkKCoreLayout::GetUnitRadius);
}
