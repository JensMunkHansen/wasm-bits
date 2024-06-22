// JavaScript wrapper for vtkXYZMolReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkXYZMolReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkXYZMolReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXYZMolReader.h"

template<> void emscripten::internal::raw_destructor<vtkXYZMolReader>(vtkXYZMolReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXYZMolReader_class) {
  emscripten::class_<vtkXYZMolReader, emscripten::base<vtkMoleculeReaderBase>>("vtkXYZMolReader")
    .smart_ptr<vtkSmartPointer<vtkXYZMolReader>>("vtkSmartPointer<vtkXYZMolReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXYZMolReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYZMolReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXYZMolReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXYZMolReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXYZMolReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXYZMolReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXYZMolReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CanReadFile", emscripten::optional_override([](vtkXYZMolReader& self, const std::string & arg_0) -> int {  return self.CanReadFile( arg_0.c_str());}))
    .function("SetTimeStep", &vtkXYZMolReader::SetTimeStep)
    .function("GetTimeStep", &vtkXYZMolReader::GetTimeStep)
    .function("GetMaxTimeStep", &vtkXYZMolReader::GetMaxTimeStep);
}
