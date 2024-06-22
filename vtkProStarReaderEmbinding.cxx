// JavaScript wrapper for vtkProStarReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkIOGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOGeometry.js/vtkProStarReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Geometry/vtkProStarReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProStarReader.h"

EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkProStarReader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkProStarReader>(vtkProStarReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProStarReader_class) {
  using cellType=vtkProStarReader::cellType;
  using shapeType=vtkProStarReader::shapeType;
  emscripten::class_<vtkProStarReader, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkProStarReader")
    .smart_ptr<vtkSmartPointer<vtkProStarReader>>("vtkSmartPointer<vtkProStarReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProStarReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProStarReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProStarReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProStarReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProStarReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProStarReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProStarReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkProStarReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkProStarReader& self) -> std::string {  return self.GetFileName();}))
    .function("SetScaleFactor", &vtkProStarReader::SetScaleFactor)
    .function("GetScaleFactorMinValue", &vtkProStarReader::GetScaleFactorMinValue)
    .function("GetScaleFactorMaxValue", &vtkProStarReader::GetScaleFactorMaxValue)
    .function("GetScaleFactor", &vtkProStarReader::GetScaleFactor);
}
EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkProStarReader_0_2_constants) {
    typedef vtkProStarReader::cellType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[6] = {
      { "vtkProStarReader_cellType_starcdFluidType", vtkProStarReader::starcdFluidType },
      { "vtkProStarReader_cellType_starcdSolidType", vtkProStarReader::starcdSolidType },
      { "vtkProStarReader_cellType_starcdBaffleType", vtkProStarReader::starcdBaffleType },
      { "vtkProStarReader_cellType_starcdShellType", vtkProStarReader::starcdShellType },
      { "vtkProStarReader_cellType_starcdLineType", vtkProStarReader::starcdLineType },
      { "vtkProStarReader_cellType_starcdPointType", vtkProStarReader::starcdPointType },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOGeometry_vtkProStarReader_1_2_constants) {
    typedef vtkProStarReader::shapeType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[8] = {
      { "vtkProStarReader_shapeType_starcdPoint", vtkProStarReader::starcdPoint },
      { "vtkProStarReader_shapeType_starcdLine", vtkProStarReader::starcdLine },
      { "vtkProStarReader_shapeType_starcdShell", vtkProStarReader::starcdShell },
      { "vtkProStarReader_shapeType_starcdHex", vtkProStarReader::starcdHex },
      { "vtkProStarReader_shapeType_starcdPrism", vtkProStarReader::starcdPrism },
      { "vtkProStarReader_shapeType_starcdTet", vtkProStarReader::starcdTet },
      { "vtkProStarReader_shapeType_starcdPyr", vtkProStarReader::starcdPyr },
      { "vtkProStarReader_shapeType_starcdPoly", vtkProStarReader::starcdPoly },
  };
  for (int c = 0; c < 8; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
