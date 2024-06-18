// JavaScript wrapper for vtkConvertToPointCloud with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkConvertToPointCloudEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkConvertToPointCloud.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkConvertToPointCloud.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkConvertToPointCloud_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkConvertToPointCloud>(vtkConvertToPointCloud * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkConvertToPointCloud_class) {
  using CellGeneration=vtkConvertToPointCloud::CellGeneration;
  emscripten::class_<vtkConvertToPointCloud, emscripten::base<vtkPolyDataAlgorithm>>("vtkConvertToPointCloud")
    .smart_ptr<vtkSmartPointer<vtkConvertToPointCloud>>("vtkSmartPointer<vtkConvertToPointCloud>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkConvertToPointCloud>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToPointCloud::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkConvertToPointCloud& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkConvertToPointCloud::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkConvertToPointCloud::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkConvertToPointCloud::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkConvertToPointCloud& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellGenerationMode", &vtkConvertToPointCloud::SetCellGenerationMode)
    .function("GetCellGenerationMode", &vtkConvertToPointCloud::GetCellGenerationMode);
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkConvertToPointCloud_0_2_constants) {
    typedef vtkConvertToPointCloud::CellGeneration cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkConvertToPointCloud_CellGeneration_NO_CELLS", vtkConvertToPointCloud::NO_CELLS },
      { "vtkConvertToPointCloud_CellGeneration_POLYVERTEX_CELL", vtkConvertToPointCloud::POLYVERTEX_CELL },
      { "vtkConvertToPointCloud_CellGeneration_VERTEX_CELLS", vtkConvertToPointCloud::VERTEX_CELLS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
