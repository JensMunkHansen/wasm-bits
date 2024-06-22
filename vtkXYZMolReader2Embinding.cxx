// JavaScript wrapper for vtkXYZMolReader2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkXYZMolReader2Embinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkXYZMolReader2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkXYZMolReader2.h"

template<> void emscripten::internal::raw_destructor<vtkXYZMolReader2>(vtkXYZMolReader2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXYZMolReader2_class) {
  emscripten::class_<vtkXYZMolReader2, emscripten::base<vtkMoleculeAlgorithm>>("vtkXYZMolReader2")
    .smart_ptr<vtkSmartPointer<vtkXYZMolReader2>>("vtkSmartPointer<vtkXYZMolReader2>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXYZMolReader2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYZMolReader2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXYZMolReader2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXYZMolReader2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXYZMolReader2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYZMolReader2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXYZMolReader2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", &vtkXYZMolReader2::GetOutput, emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkXYZMolReader2::SetOutput, emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkXYZMolReader2& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkXYZMolReader2& self) -> std::string {  return self.GetFileName();}));
}
