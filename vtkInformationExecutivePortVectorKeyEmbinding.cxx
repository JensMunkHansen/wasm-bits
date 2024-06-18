// JavaScript wrapper for vtkInformationExecutivePortVectorKey with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkInformationExecutivePortVectorKeyEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkInformationExecutivePortVectorKey.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkExecutive.h"
#include "vtkGarbageCollector.h"
#include "vtkInformationExecutivePortVectorKey.h"

template<> void emscripten::internal::raw_destructor<vtkInformationExecutivePortVectorKey>(vtkInformationExecutivePortVectorKey * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationExecutivePortVectorKey_class) {
  emscripten::class_<vtkInformationExecutivePortVectorKey, emscripten::base<vtkInformationKey>>("vtkInformationExecutivePortVectorKey")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationExecutivePortVectorKey::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationExecutivePortVectorKey& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationExecutivePortVectorKey::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationExecutivePortVectorKey::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationExecutivePortVectorKey::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationExecutivePortVectorKey& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("MakeKey", emscripten::optional_override([]( const std::string & arg_0, const std::string & arg_1) -> vtkInformationExecutivePortVectorKey* {  return vtkInformationExecutivePortVectorKey::MakeKey( arg_0.c_str(), arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationExecutivePortVectorKey::Append, emscripten::allow_raw_pointers())
    .function("Remove", emscripten::select_overload<void(vtkInformationExecutivePortVectorKey&, vtkInformation*, vtkExecutive*, int)>([](vtkInformationExecutivePortVectorKey& self, vtkInformation* arg_0, vtkExecutive* arg_1, int arg_2) -> void { return self.Remove( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("Remove", emscripten::select_overload<void(vtkInformationExecutivePortVectorKey&, vtkInformation*)>([](vtkInformationExecutivePortVectorKey& self, vtkInformation* arg_0) -> void { return self.Remove( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPorts", emscripten::optional_override([](vtkInformationExecutivePortVectorKey& self, vtkInformation* arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPorts( arg_0)) / sizeof(int);}), emscripten::allow_raw_pointers())
    .function("Length", &vtkInformationExecutivePortVectorKey::Length, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkInformationExecutivePortVectorKey::ShallowCopy, emscripten::allow_raw_pointers())
    .function("Report", &vtkInformationExecutivePortVectorKey::Report, emscripten::allow_raw_pointers());
}
