// JavaScript wrapper for vtkConvertSelectionDomain with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkConvertSelectionDomainEmbinding.cxx \
 /home/jmh/github/vtk/Views/Core/vtkConvertSelectionDomain.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConvertSelectionDomain.h"

template<> void emscripten::internal::raw_destructor<vtkConvertSelectionDomain>(vtkConvertSelectionDomain * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvertSelectionDomain_class) {
  emscripten::class_<vtkConvertSelectionDomain, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkConvertSelectionDomain")
    .smart_ptr<vtkSmartPointer<vtkConvertSelectionDomain>>("vtkSmartPointer<vtkConvertSelectionDomain>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkConvertSelectionDomain>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertSelectionDomain::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvertSelectionDomain& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvertSelectionDomain::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvertSelectionDomain::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertSelectionDomain::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvertSelectionDomain& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
