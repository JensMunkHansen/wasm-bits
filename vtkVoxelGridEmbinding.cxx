// JavaScript wrapper for vtkVoxelGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkVoxelGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkVoxelGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInterpolationKernel.h"
#include "vtkVoxelGrid.h"

EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkVoxelGrid_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkVoxelGrid>(vtkVoxelGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVoxelGrid_class) {
  using Style=vtkVoxelGrid::Style;
  emscripten::class_<vtkVoxelGrid, emscripten::base<vtkPolyDataAlgorithm>>("vtkVoxelGrid")
    .smart_ptr<vtkSmartPointer<vtkVoxelGrid>>("vtkSmartPointer<vtkVoxelGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVoxelGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxelGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVoxelGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVoxelGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVoxelGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxelGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVoxelGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConfigurationStyle", &vtkVoxelGrid::SetConfigurationStyle)
    .function("GetConfigurationStyle", &vtkVoxelGrid::GetConfigurationStyle)
    .function("SetConfigurationStyleToManual", &vtkVoxelGrid::SetConfigurationStyleToManual)
    .function("SetConfigurationStyleToLeafSize", &vtkVoxelGrid::SetConfigurationStyleToLeafSize)
    .function("SetConfigurationStyleToAutomatic", &vtkVoxelGrid::SetConfigurationStyleToAutomatic)
    .function("SetDivisions", emscripten::select_overload<void(vtkVoxelGrid&, int, int, int)>([](vtkVoxelGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetDivisions( arg_0, arg_1, arg_2); }))
    .function("SetLeafSize", emscripten::select_overload<void(vtkVoxelGrid&, double, double, double)>([](vtkVoxelGrid& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetLeafSize( arg_0, arg_1, arg_2); }))
    .function("SetNumberOfPointsPerBin", &vtkVoxelGrid::SetNumberOfPointsPerBin)
    .function("GetNumberOfPointsPerBinMinValue", &vtkVoxelGrid::GetNumberOfPointsPerBinMinValue)
    .function("GetNumberOfPointsPerBinMaxValue", &vtkVoxelGrid::GetNumberOfPointsPerBinMaxValue)
    .function("GetNumberOfPointsPerBin", &vtkVoxelGrid::GetNumberOfPointsPerBin)
    .function("SetKernel", &vtkVoxelGrid::SetKernel, emscripten::allow_raw_pointers())
    .function("GetKernel", &vtkVoxelGrid::GetKernel, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkFiltersPoints_vtkVoxelGrid_0_2_constants) {
    typedef vtkVoxelGrid::Style cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkVoxelGrid_Style_MANUAL", vtkVoxelGrid::MANUAL },
      { "vtkVoxelGrid_Style_SPECIFY_LEAF_SIZE", vtkVoxelGrid::SPECIFY_LEAF_SIZE },
      { "vtkVoxelGrid_Style_AUTOMATIC", vtkVoxelGrid::AUTOMATIC },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
