// JavaScript wrapper for vtkImageImportExecutive with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkImageImportExecutiveEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkImageImportExecutive.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageImportExecutive.h"

template<> void emscripten::internal::raw_destructor<vtkImageImportExecutive>(vtkImageImportExecutive * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageImportExecutive_class) {
  emscripten::class_<vtkImageImportExecutive, emscripten::base<vtkStreamingDemandDrivenPipeline>>("vtkImageImportExecutive")
    .smart_ptr<vtkSmartPointer<vtkImageImportExecutive>>("vtkSmartPointer<vtkImageImportExecutive>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageImportExecutive>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageImportExecutive::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageImportExecutive& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageImportExecutive::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageImportExecutive::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageImportExecutive::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageImportExecutive& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
