// JavaScript wrapper for vtkSegYReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSegY.js/vtkIOSegY.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSegY.js/vtkSegYReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/SegY/vtkSegYReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSegYReader.h"

EMSCRIPTEN_BINDINGS(vtkIOSegY_vtkSegYReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSegYReader>(vtkSegYReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSegYReader_class) {
  using VTKSegYCoordinateModes=vtkSegYReader::VTKSegYCoordinateModes;
  using VTKSegYVerticalCRS=vtkSegYReader::VTKSegYVerticalCRS;
  emscripten::class_<vtkSegYReader, emscripten::base<vtkDataSetAlgorithm>>("vtkSegYReader")
    .smart_ptr<vtkSmartPointer<vtkSegYReader>>("vtkSmartPointer<vtkSegYReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSegYReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSegYReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSegYReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSegYReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSegYReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSegYReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSegYReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkSegYReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkSegYReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetXYCoordMode", &vtkSegYReader::SetXYCoordMode)
    .function("GetXYCoordModeMinValue", &vtkSegYReader::GetXYCoordModeMinValue)
    .function("GetXYCoordModeMaxValue", &vtkSegYReader::GetXYCoordModeMaxValue)
    .function("GetXYCoordMode", &vtkSegYReader::GetXYCoordMode)
    .function("SetXYCoordModeToSource", &vtkSegYReader::SetXYCoordModeToSource)
    .function("SetXYCoordModeToCDP", &vtkSegYReader::SetXYCoordModeToCDP)
    .function("SetXYCoordModeToCustom", &vtkSegYReader::SetXYCoordModeToCustom)
    .function("SetXCoordByte", &vtkSegYReader::SetXCoordByte)
    .function("GetXCoordByte", &vtkSegYReader::GetXCoordByte)
    .function("SetYCoordByte", &vtkSegYReader::SetYCoordByte)
    .function("GetYCoordByte", &vtkSegYReader::GetYCoordByte)
    .function("SetVerticalCRS", &vtkSegYReader::SetVerticalCRS)
    .function("GetVerticalCRS", &vtkSegYReader::GetVerticalCRS)
    .function("SetStructuredGrid", &vtkSegYReader::SetStructuredGrid)
    .function("GetStructuredGrid", &vtkSegYReader::GetStructuredGrid)
    .function("StructuredGridOn", &vtkSegYReader::StructuredGridOn)
    .function("StructuredGridOff", &vtkSegYReader::StructuredGridOff)
    .function("SetForce2D", &vtkSegYReader::SetForce2D)
    .function("GetForce2D", &vtkSegYReader::GetForce2D)
    .function("Force2DOn", &vtkSegYReader::Force2DOn)
    .function("Force2DOff", &vtkSegYReader::Force2DOff);
}
EMSCRIPTEN_BINDINGS(vtkIOSegY_vtkSegYReader_0_2_constants) {
    typedef vtkSegYReader::VTKSegYCoordinateModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkSegYReader_VTKSegYCoordinateModes_VTK_SEGY_SOURCE", vtkSegYReader::VTK_SEGY_SOURCE },
      { "vtkSegYReader_VTKSegYCoordinateModes_VTK_SEGY_CDP", vtkSegYReader::VTK_SEGY_CDP },
      { "vtkSegYReader_VTKSegYCoordinateModes_VTK_SEGY_CUSTOM", vtkSegYReader::VTK_SEGY_CUSTOM },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOSegY_vtkSegYReader_1_2_constants) {
    typedef vtkSegYReader::VTKSegYVerticalCRS cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkSegYReader_VTKSegYVerticalCRS_VTK_SEGY_VERTICAL_HEIGHTS", vtkSegYReader::VTK_SEGY_VERTICAL_HEIGHTS },
      { "vtkSegYReader_VTKSegYVerticalCRS_VTK_SEGY_VERTICAL_DEPTHS", vtkSegYReader::VTK_SEGY_VERTICAL_DEPTHS },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
