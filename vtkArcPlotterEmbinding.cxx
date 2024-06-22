// JavaScript wrapper for vtkArcPlotter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkRenderingAnnotation.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingAnnotation.js/vtkArcPlotterEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Annotation/vtkArcPlotter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCamera.h"
#include "vtkArcPlotter.h"

EMSCRIPTEN_BINDINGS(vtkRenderingAnnotation_vtkArcPlotter_0_1_constants) {
  const struct { const char *name; int value; }
    constants[6] = {
      { "VTK_PLOT_SCALARS", 1 },
      { "VTK_PLOT_VECTORS", 2 },
      { "VTK_PLOT_NORMALS", 3 },
      { "VTK_PLOT_TCOORDS", 4 },
      { "VTK_PLOT_TENSORS", 5 },
      { "VTK_PLOT_FIELD_DATA", 6 },
  };
  for (int c = 0; c < 6; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkArcPlotter>(vtkArcPlotter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArcPlotter_class) {
  emscripten::class_<vtkArcPlotter, emscripten::base<vtkPolyDataAlgorithm>>("vtkArcPlotter")
    .smart_ptr<vtkSmartPointer<vtkArcPlotter>>("vtkSmartPointer<vtkArcPlotter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArcPlotter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArcPlotter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArcPlotter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArcPlotter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArcPlotter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArcPlotter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArcPlotter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCamera", &vtkArcPlotter::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkArcPlotter::GetCamera, emscripten::allow_raw_pointers())
    .function("SetPlotMode", &vtkArcPlotter::SetPlotMode)
    .function("GetPlotMode", &vtkArcPlotter::GetPlotMode)
    .function("SetPlotModeToPlotScalars", &vtkArcPlotter::SetPlotModeToPlotScalars)
    .function("SetPlotModeToPlotVectors", &vtkArcPlotter::SetPlotModeToPlotVectors)
    .function("SetPlotModeToPlotNormals", &vtkArcPlotter::SetPlotModeToPlotNormals)
    .function("SetPlotModeToPlotTCoords", &vtkArcPlotter::SetPlotModeToPlotTCoords)
    .function("SetPlotModeToPlotTensors", &vtkArcPlotter::SetPlotModeToPlotTensors)
    .function("SetPlotModeToPlotFieldData", &vtkArcPlotter::SetPlotModeToPlotFieldData)
    .function("SetPlotComponent", &vtkArcPlotter::SetPlotComponent)
    .function("GetPlotComponent", &vtkArcPlotter::GetPlotComponent)
    .function("SetRadius", &vtkArcPlotter::SetRadius)
    .function("GetRadiusMinValue", &vtkArcPlotter::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkArcPlotter::GetRadiusMaxValue)
    .function("GetRadius", &vtkArcPlotter::GetRadius)
    .function("SetHeight", &vtkArcPlotter::SetHeight)
    .function("GetHeightMinValue", &vtkArcPlotter::GetHeightMinValue)
    .function("GetHeightMaxValue", &vtkArcPlotter::GetHeightMaxValue)
    .function("GetHeight", &vtkArcPlotter::GetHeight)
    .function("SetOffset", &vtkArcPlotter::SetOffset)
    .function("GetOffsetMinValue", &vtkArcPlotter::GetOffsetMinValue)
    .function("GetOffsetMaxValue", &vtkArcPlotter::GetOffsetMaxValue)
    .function("GetOffset", &vtkArcPlotter::GetOffset)
    .function("SetUseDefaultNormal", &vtkArcPlotter::SetUseDefaultNormal)
    .function("GetUseDefaultNormal", &vtkArcPlotter::GetUseDefaultNormal)
    .function("UseDefaultNormalOn", &vtkArcPlotter::UseDefaultNormalOn)
    .function("UseDefaultNormalOff", &vtkArcPlotter::UseDefaultNormalOff)
    .function("SetDefaultNormal", emscripten::select_overload<void(vtkArcPlotter&, float, float, float)>([](vtkArcPlotter& self, float arg_0, float arg_1, float arg_2) -> void { return self.SetDefaultNormal( arg_0, arg_1, arg_2); }))
    .function("SetFieldDataArray", &vtkArcPlotter::SetFieldDataArray)
    .function("GetFieldDataArrayMinValue", &vtkArcPlotter::GetFieldDataArrayMinValue)
    .function("GetFieldDataArrayMaxValue", &vtkArcPlotter::GetFieldDataArrayMaxValue)
    .function("GetFieldDataArray", &vtkArcPlotter::GetFieldDataArray)
    .function("GetMTime", &vtkArcPlotter::GetMTime);
}
