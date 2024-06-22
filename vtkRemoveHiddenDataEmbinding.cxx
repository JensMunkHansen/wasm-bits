// JavaScript wrapper for vtkRemoveHiddenData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkRemoveHiddenDataEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkRemoveHiddenData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRemoveHiddenData.h"

template<> void emscripten::internal::raw_destructor<vtkRemoveHiddenData>(vtkRemoveHiddenData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRemoveHiddenData_class) {
  emscripten::class_<vtkRemoveHiddenData, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkRemoveHiddenData")
    .smart_ptr<vtkSmartPointer<vtkRemoveHiddenData>>("vtkSmartPointer<vtkRemoveHiddenData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRemoveHiddenData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveHiddenData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRemoveHiddenData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRemoveHiddenData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRemoveHiddenData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveHiddenData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRemoveHiddenData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
