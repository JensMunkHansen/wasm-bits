// JavaScript wrapper for vtkInformationKeyLookup with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkInformationKeyLookupEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkInformationKeyLookup.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationKey.h"
#include "vtkInformationKeyLookup.h"

template<> void emscripten::internal::raw_destructor<vtkInformationKeyLookup>(vtkInformationKeyLookup * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInformationKeyLookup_class) {
  emscripten::class_<vtkInformationKeyLookup, emscripten::base<vtkObject>>("vtkInformationKeyLookup")
    .smart_ptr<vtkSmartPointer<vtkInformationKeyLookup>>("vtkSmartPointer<vtkInformationKeyLookup>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkInformationKeyLookup>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationKeyLookup::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInformationKeyLookup& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInformationKeyLookup::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInformationKeyLookup::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInformationKeyLookup::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInformationKeyLookup& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("Find", &vtkInformationKeyLookup::Find, emscripten::allow_raw_pointers());
}
