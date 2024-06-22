// JavaScript wrapper for vtkPOpenFOAMReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkPOpenFOAMReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkPOpenFOAMReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPOpenFOAMReader.h"

EMSCRIPTEN_BINDINGS(vtkIOParallel_vtkPOpenFOAMReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPOpenFOAMReader>(vtkPOpenFOAMReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPOpenFOAMReader_class) {
  using caseType=vtkPOpenFOAMReader::caseType;
  emscripten::class_<vtkPOpenFOAMReader, emscripten::base<vtkOpenFOAMReader>>("vtkPOpenFOAMReader")
    .smart_ptr<vtkSmartPointer<vtkPOpenFOAMReader>>("vtkSmartPointer<vtkPOpenFOAMReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPOpenFOAMReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPOpenFOAMReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPOpenFOAMReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPOpenFOAMReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPOpenFOAMReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPOpenFOAMReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCaseType", &vtkPOpenFOAMReader::SetCaseType)
    .function("GetCaseType", &vtkPOpenFOAMReader::GetCaseType)
    .function("SetController", &vtkPOpenFOAMReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPOpenFOAMReader::GetController, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOParallel_vtkPOpenFOAMReader_0_2_constants) {
    typedef vtkPOpenFOAMReader::caseType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkPOpenFOAMReader_caseType_DECOMPOSED_CASE", vtkPOpenFOAMReader::DECOMPOSED_CASE },
      { "vtkPOpenFOAMReader_caseType_RECONSTRUCTED_CASE", vtkPOpenFOAMReader::RECONSTRUCTED_CASE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
