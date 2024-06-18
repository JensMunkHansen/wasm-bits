// JavaScript wrapper for vtkEnSightReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkIOEnSight.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOEnSight.js/vtkEnSightReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/EnSight/vtkEnSightReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEnSightReader.h"

EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkEnSightReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkEnSightReader>(vtkEnSightReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnSightReader_class) {
  using ElementTypesList=vtkEnSightReader::ElementTypesList;
  using VariableTypesList=vtkEnSightReader::VariableTypesList;
  using SectionTypeList=vtkEnSightReader::SectionTypeList;
  emscripten::class_<vtkEnSightReader, emscripten::base<vtkGenericEnSightReader>>("vtkEnSightReader")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnSightReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnSightReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnSightReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnSightReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnSightReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMeasuredFileName", emscripten::optional_override([](vtkEnSightReader& self) -> std::string {  return self.GetMeasuredFileName();}))
    .function("GetMatchFileName", emscripten::optional_override([](vtkEnSightReader& self) -> std::string {  return self.GetMatchFileName();}))
    .function("GetRigidBodyFileName", emscripten::optional_override([](vtkEnSightReader& self) -> std::string {  return self.GetRigidBodyFileName();}));
}
EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkEnSightReader_0_2_constants) {
    typedef vtkEnSightReader::ElementTypesList cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[18] = {
      { "vtkEnSightReader_ElementTypesList_POINT", vtkEnSightReader::POINT },
      { "vtkEnSightReader_ElementTypesList_BAR2", vtkEnSightReader::BAR2 },
      { "vtkEnSightReader_ElementTypesList_BAR3", vtkEnSightReader::BAR3 },
      { "vtkEnSightReader_ElementTypesList_NSIDED", vtkEnSightReader::NSIDED },
      { "vtkEnSightReader_ElementTypesList_TRIA3", vtkEnSightReader::TRIA3 },
      { "vtkEnSightReader_ElementTypesList_TRIA6", vtkEnSightReader::TRIA6 },
      { "vtkEnSightReader_ElementTypesList_QUAD4", vtkEnSightReader::QUAD4 },
      { "vtkEnSightReader_ElementTypesList_QUAD8", vtkEnSightReader::QUAD8 },
      { "vtkEnSightReader_ElementTypesList_NFACED", vtkEnSightReader::NFACED },
      { "vtkEnSightReader_ElementTypesList_TETRA4", vtkEnSightReader::TETRA4 },
      { "vtkEnSightReader_ElementTypesList_TETRA10", vtkEnSightReader::TETRA10 },
      { "vtkEnSightReader_ElementTypesList_PYRAMID5", vtkEnSightReader::PYRAMID5 },
      { "vtkEnSightReader_ElementTypesList_PYRAMID13", vtkEnSightReader::PYRAMID13 },
      { "vtkEnSightReader_ElementTypesList_HEXA8", vtkEnSightReader::HEXA8 },
      { "vtkEnSightReader_ElementTypesList_HEXA20", vtkEnSightReader::HEXA20 },
      { "vtkEnSightReader_ElementTypesList_PENTA6", vtkEnSightReader::PENTA6 },
      { "vtkEnSightReader_ElementTypesList_PENTA15", vtkEnSightReader::PENTA15 },
      { "vtkEnSightReader_ElementTypesList_NUMBER_OF_ELEMENT_TYPES", vtkEnSightReader::NUMBER_OF_ELEMENT_TYPES },
  };
  for (int c = 0; c < 18; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkEnSightReader_1_2_constants) {
    typedef vtkEnSightReader::VariableTypesList cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[14] = {
      { "vtkEnSightReader_VariableTypesList_SCALAR_PER_NODE", vtkEnSightReader::SCALAR_PER_NODE },
      { "vtkEnSightReader_VariableTypesList_VECTOR_PER_NODE", vtkEnSightReader::VECTOR_PER_NODE },
      { "vtkEnSightReader_VariableTypesList_TENSOR_SYMM_PER_NODE", vtkEnSightReader::TENSOR_SYMM_PER_NODE },
      { "vtkEnSightReader_VariableTypesList_SCALAR_PER_ELEMENT", vtkEnSightReader::SCALAR_PER_ELEMENT },
      { "vtkEnSightReader_VariableTypesList_VECTOR_PER_ELEMENT", vtkEnSightReader::VECTOR_PER_ELEMENT },
      { "vtkEnSightReader_VariableTypesList_TENSOR_SYMM_PER_ELEMENT", vtkEnSightReader::TENSOR_SYMM_PER_ELEMENT },
      { "vtkEnSightReader_VariableTypesList_SCALAR_PER_MEASURED_NODE", vtkEnSightReader::SCALAR_PER_MEASURED_NODE },
      { "vtkEnSightReader_VariableTypesList_VECTOR_PER_MEASURED_NODE", vtkEnSightReader::VECTOR_PER_MEASURED_NODE },
      { "vtkEnSightReader_VariableTypesList_COMPLEX_SCALAR_PER_NODE", vtkEnSightReader::COMPLEX_SCALAR_PER_NODE },
      { "vtkEnSightReader_VariableTypesList_COMPLEX_VECTOR_PER_NODE", vtkEnSightReader::COMPLEX_VECTOR_PER_NODE },
      { "vtkEnSightReader_VariableTypesList_COMPLEX_SCALAR_PER_ELEMENT", vtkEnSightReader::COMPLEX_SCALAR_PER_ELEMENT },
      { "vtkEnSightReader_VariableTypesList_COMPLEX_VECTOR_PER_ELEMENT", vtkEnSightReader::COMPLEX_VECTOR_PER_ELEMENT },
      { "vtkEnSightReader_VariableTypesList_TENSOR_ASYM_PER_NODE", vtkEnSightReader::TENSOR_ASYM_PER_NODE },
      { "vtkEnSightReader_VariableTypesList_TENSOR_ASYM_PER_ELEMENT", vtkEnSightReader::TENSOR_ASYM_PER_ELEMENT },
  };
  for (int c = 0; c < 14; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOEnSight_vtkEnSightReader_2_2_constants) {
    typedef vtkEnSightReader::SectionTypeList cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkEnSightReader_SectionTypeList_COORDINATES", vtkEnSightReader::COORDINATES },
      { "vtkEnSightReader_SectionTypeList_BLOCK", vtkEnSightReader::BLOCK },
      { "vtkEnSightReader_SectionTypeList_ELEMENT", vtkEnSightReader::ELEMENT },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
