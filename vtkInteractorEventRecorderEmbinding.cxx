// JavaScript wrapper for vtkInteractorEventRecorder with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkInteractorEventRecorderEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkInteractorEventRecorder.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkInteractorEventRecorder.h"

EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkInteractorEventRecorder_class_enums) {
  emscripten::enum_<vtkInteractorEventRecorder::vtkEventDataType>("vtkInteractorEventRecorder_vtkEventDataType")
    .value("None", vtkInteractorEventRecorder::vtkEventDataType::None)
    .value("StringArray", vtkInteractorEventRecorder::vtkEventDataType::StringArray);
}
template<> void emscripten::internal::raw_destructor<vtkInteractorEventRecorder>(vtkInteractorEventRecorder * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInteractorEventRecorder_class) {
  using vtkEventDataType=vtkInteractorEventRecorder::vtkEventDataType;
  emscripten::class_<vtkInteractorEventRecorder, emscripten::base<vtkInteractorObserver>>("vtkInteractorEventRecorder")
    .smart_ptr<vtkSmartPointer<vtkInteractorEventRecorder>>("vtkSmartPointer<vtkInteractorEventRecorder>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInteractorEventRecorder>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorEventRecorder::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInteractorEventRecorder& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInteractorEventRecorder::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInteractorEventRecorder::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInteractorEventRecorder::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInteractorEventRecorder& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEnabled", &vtkInteractorEventRecorder::SetEnabled)
    .function("SetInteractor", &vtkInteractorEventRecorder::SetInteractor, emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkInteractorEventRecorder& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkInteractorEventRecorder& self) -> std::string {  return self.GetFileName();}))
    .function("Record", &vtkInteractorEventRecorder::Record)
    .function("Play", &vtkInteractorEventRecorder::Play)
    .function("Stop", &vtkInteractorEventRecorder::Stop)
    .function("Clear", &vtkInteractorEventRecorder::Clear)
    .function("Rewind", &vtkInteractorEventRecorder::Rewind)
    .function("SetReadFromInputString", &vtkInteractorEventRecorder::SetReadFromInputString)
    .function("GetReadFromInputString", &vtkInteractorEventRecorder::GetReadFromInputString)
    .function("ReadFromInputStringOn", &vtkInteractorEventRecorder::ReadFromInputStringOn)
    .function("ReadFromInputStringOff", &vtkInteractorEventRecorder::ReadFromInputStringOff)
    .function("SetInputString", emscripten::optional_override([](vtkInteractorEventRecorder& self, const std::string & arg_0) -> void {  return self.SetInputString( arg_0.c_str());}))
    .function("GetInputString", emscripten::optional_override([](vtkInteractorEventRecorder& self) -> std::string {  return self.GetInputString();}));
}
