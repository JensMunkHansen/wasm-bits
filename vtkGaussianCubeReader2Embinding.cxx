// JavaScript wrapper for vtkGaussianCubeReader2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkGaussianCubeReader2Embinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkGaussianCubeReader2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMolecule.h"
#include "vtkImageData.h"
#include "vtkGaussianCubeReader2.h"

template<> void emscripten::internal::raw_destructor<vtkGaussianCubeReader2>(vtkGaussianCubeReader2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGaussianCubeReader2_class) {
  emscripten::class_<vtkGaussianCubeReader2, emscripten::base<vtkMoleculeAlgorithm>>("vtkGaussianCubeReader2")
    .smart_ptr<vtkSmartPointer<vtkGaussianCubeReader2>>("vtkSmartPointer<vtkGaussianCubeReader2>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGaussianCubeReader2>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianCubeReader2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGaussianCubeReader2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGaussianCubeReader2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGaussianCubeReader2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianCubeReader2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGaussianCubeReader2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetOutput", &vtkGaussianCubeReader2::GetOutput, emscripten::allow_raw_pointers())
    .function("SetOutput", &vtkGaussianCubeReader2::SetOutput, emscripten::allow_raw_pointers())
    .function("GetGridOutput", &vtkGaussianCubeReader2::GetGridOutput, emscripten::allow_raw_pointers())
    .function("SetFileName", emscripten::optional_override([](vtkGaussianCubeReader2& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkGaussianCubeReader2& self) -> std::string {  return self.GetFileName();}));
}
