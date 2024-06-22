// JavaScript wrapper for vtkGaussianRandomSequence with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkGaussianRandomSequenceEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkGaussianRandomSequence.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGaussianRandomSequence.h"

template<> void emscripten::internal::raw_destructor<vtkGaussianRandomSequence>(vtkGaussianRandomSequence * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGaussianRandomSequence_class) {
  emscripten::class_<vtkGaussianRandomSequence, emscripten::base<vtkRandomSequence>>("vtkGaussianRandomSequence")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianRandomSequence::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGaussianRandomSequence& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGaussianRandomSequence::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGaussianRandomSequence::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianRandomSequence::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGaussianRandomSequence& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetScaledValue", &vtkGaussianRandomSequence::GetScaledValue)
    .function("GetNextScaledValue", &vtkGaussianRandomSequence::GetNextScaledValue);
}