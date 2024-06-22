// JavaScript wrapper for vtkInformationVector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationVectorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationVector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"

template<> void emscripten::internal::raw_destructor<vtkInformationVector>(vtkInformationVector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationVector_class) {
  emscripten::class_<vtkInformationVector, emscripten::base<vtkObject>>("vtkInformationVector")
    .smart_ptr<vtkSmartPointer<vtkInformationVector>>("vtkSmartPointer<vtkInformationVector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInformationVector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationVector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationVector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationVector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationVector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationVector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationVector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetNumberOfInformationObjects", &vtkInformationVector::GetNumberOfInformationObjects)
    .function("SetNumberOfInformationObjects", &vtkInformationVector::SetNumberOfInformationObjects)
    .function("SetInformationObject", &vtkInformationVector::SetInformationObject, emscripten::allow_raw_pointers())
    .function("GetInformationObject", &vtkInformationVector::GetInformationObject, emscripten::allow_raw_pointers())
    .function("Append", &vtkInformationVector::Append, emscripten::allow_raw_pointers())
    .function("Remove", emscripten::select_overload<void(vtkInformationVector&, vtkInformation*)>([](vtkInformationVector& self, vtkInformation* arg_0) -> void { return self.Remove( arg_0); }), emscripten::allow_raw_pointers())
    .function("Remove", emscripten::select_overload<void(vtkInformationVector&, int)>([](vtkInformationVector& self, int arg_0) -> void { return self.Remove( arg_0); }))
    .function("UsesGarbageCollector", &vtkInformationVector::UsesGarbageCollector)
    .function("Copy", &vtkInformationVector::Copy, emscripten::allow_raw_pointers());
}
