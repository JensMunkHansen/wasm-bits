// JavaScript wrapper for vtkGaussianCubeReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkGaussianCubeReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkGaussianCubeReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTransform.h"
#include "vtkImageData.h"
#include "vtkGaussianCubeReader.h"

template<> void emscripten::internal::raw_destructor<vtkGaussianCubeReader>(vtkGaussianCubeReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGaussianCubeReader_class) {
  emscripten::class_<vtkGaussianCubeReader, emscripten::base<vtkMoleculeReaderBase>>("vtkGaussianCubeReader")
    .smart_ptr<vtkSmartPointer<vtkGaussianCubeReader>>("vtkSmartPointer<vtkGaussianCubeReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGaussianCubeReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianCubeReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGaussianCubeReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGaussianCubeReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGaussianCubeReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGaussianCubeReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGaussianCubeReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetTransform", &vtkGaussianCubeReader::GetTransform, emscripten::allow_raw_pointers())
    .function("GetGridOutput", &vtkGaussianCubeReader::GetGridOutput, emscripten::allow_raw_pointers());
}