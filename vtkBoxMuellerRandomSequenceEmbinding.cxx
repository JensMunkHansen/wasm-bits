// JavaScript wrapper for vtkBoxMuellerRandomSequence with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkBoxMuellerRandomSequenceEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkBoxMuellerRandomSequence.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRandomSequence.h"
#include "vtkBoxMuellerRandomSequence.h"

template<> void emscripten::internal::raw_destructor<vtkBoxMuellerRandomSequence>(vtkBoxMuellerRandomSequence * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoxMuellerRandomSequence_class) {
  emscripten::class_<vtkBoxMuellerRandomSequence, emscripten::base<vtkGaussianRandomSequence>>("vtkBoxMuellerRandomSequence")
    .smart_ptr<vtkSmartPointer<vtkBoxMuellerRandomSequence>>("vtkSmartPointer<vtkBoxMuellerRandomSequence>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBoxMuellerRandomSequence>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxMuellerRandomSequence::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoxMuellerRandomSequence& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoxMuellerRandomSequence::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoxMuellerRandomSequence::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoxMuellerRandomSequence::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoxMuellerRandomSequence& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkBoxMuellerRandomSequence::Initialize)
    .function("GetValue", &vtkBoxMuellerRandomSequence::GetValue)
    .function("Next", &vtkBoxMuellerRandomSequence::Next)
    .function("GetUniformSequence", &vtkBoxMuellerRandomSequence::GetUniformSequence, emscripten::allow_raw_pointers())
    .function("SetUniformSequence", &vtkBoxMuellerRandomSequence::SetUniformSequence, emscripten::allow_raw_pointers());
}
