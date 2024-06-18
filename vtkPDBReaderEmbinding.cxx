// JavaScript wrapper for vtkPDBReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkIOChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOChemistry.js/vtkPDBReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Chemistry/vtkPDBReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPDBReader.h"

template<> void emscripten::internal::raw_destructor<vtkPDBReader>(vtkPDBReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPDBReader_class) {
  emscripten::class_<vtkPDBReader, emscripten::base<vtkMoleculeReaderBase>>("vtkPDBReader")
    .smart_ptr<vtkSmartPointer<vtkPDBReader>>("vtkSmartPointer<vtkPDBReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPDBReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDBReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPDBReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPDBReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPDBReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDBReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPDBReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
