// JavaScript wrapper for vtkMersenneTwister with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkMersenneTwisterEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkMersenneTwister.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMersenneTwister.h"

template<> void emscripten::internal::raw_destructor<vtkMersenneTwister>(vtkMersenneTwister * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMersenneTwister_class) {
  emscripten::class_<vtkMersenneTwister, emscripten::base<vtkRandomSequence>>("vtkMersenneTwister")
    .smart_ptr<vtkSmartPointer<vtkMersenneTwister>>("vtkSmartPointer<vtkMersenneTwister>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkMersenneTwister>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMersenneTwister::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMersenneTwister& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMersenneTwister::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMersenneTwister::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMersenneTwister::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMersenneTwister& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkMersenneTwister::Initialize)
    .function("InitializeNewSequence", &vtkMersenneTwister::InitializeNewSequence)
    .function("InitializeSequence", &vtkMersenneTwister::InitializeSequence)
    .function("GetValue", emscripten::select_overload<double(vtkMersenneTwister&, unsigned int)>([](vtkMersenneTwister& self, unsigned int arg_0) -> double { return self.GetValue( arg_0); }))
    .function("GetValue", emscripten::select_overload<double(vtkMersenneTwister&)>([](vtkMersenneTwister& self) -> double { return self.GetValue(); }))
    .function("Next", emscripten::select_overload<void(vtkMersenneTwister&, unsigned int)>([](vtkMersenneTwister& self, unsigned int arg_0) -> void { return self.Next( arg_0); }))
    .function("Next", emscripten::select_overload<void(vtkMersenneTwister&)>([](vtkMersenneTwister& self) -> void { return self.Next(); }));
}
