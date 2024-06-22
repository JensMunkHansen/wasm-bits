// JavaScript wrapper for vtkLabeledDataMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkRenderingLabel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLabel.js/vtkLabeledDataMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Label/vtkLabeledDataMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataSet.h"
#include "vtkTextProperty.h"
#include "vtkViewport.h"
#include "vtkActor2D.h"
#include "vtkWindow.h"
#include "vtkTransform.h"
#include "vtkLabeledDataMapper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabeledDataMapper_0_1_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "VTK_LABEL_IDS", 0 },
      { "VTK_LABEL_SCALARS", 1 },
      { "VTK_LABEL_VECTORS", 2 },
      { "VTK_LABEL_NORMALS", 3 },
      { "VTK_LABEL_TCOORDS", 4 },
      { "VTK_LABEL_TENSORS", 5 },
      { "VTK_LABEL_FIELD_DATA", 6 },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabeledDataMapper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkLabeledDataMapper>(vtkLabeledDataMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLabeledDataMapper_class) {
  using Coordinates=vtkLabeledDataMapper::Coordinates;
  emscripten::class_<vtkLabeledDataMapper, emscripten::base<vtkMapper2D>>("vtkLabeledDataMapper")
    .smart_ptr<vtkSmartPointer<vtkLabeledDataMapper>>("vtkSmartPointer<vtkLabeledDataMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLabeledDataMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledDataMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLabeledDataMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLabeledDataMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLabeledDataMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLabeledDataMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLabeledDataMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLabelFormat", emscripten::optional_override([](vtkLabeledDataMapper& self, const std::string & arg_0) -> void {  return self.SetLabelFormat( arg_0.c_str());}))
    .function("GetLabelFormat", emscripten::optional_override([](vtkLabeledDataMapper& self) -> std::string {  return self.GetLabelFormat();}))
    .function("SetLabeledComponent", &vtkLabeledDataMapper::SetLabeledComponent)
    .function("GetLabeledComponent", &vtkLabeledDataMapper::GetLabeledComponent)
    .function("SetComponentSeparator", &vtkLabeledDataMapper::SetComponentSeparator)
    .function("GetComponentSeparator", &vtkLabeledDataMapper::GetComponentSeparator)
    .function("SetFieldDataArray", &vtkLabeledDataMapper::SetFieldDataArray)
    .function("GetFieldDataArray", &vtkLabeledDataMapper::GetFieldDataArray)
    .function("SetFieldDataName", emscripten::optional_override([](vtkLabeledDataMapper& self, const std::string & arg_0) -> void {  return self.SetFieldDataName( arg_0.c_str());}))
    .function("GetFieldDataName", emscripten::optional_override([](vtkLabeledDataMapper& self) -> std::string {  return self.GetFieldDataName();}))
    .function("SetInputData", &vtkLabeledDataMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkLabeledDataMapper::GetInput, emscripten::allow_raw_pointers())
    .function("SetLabelMode", &vtkLabeledDataMapper::SetLabelMode)
    .function("GetLabelMode", &vtkLabeledDataMapper::GetLabelMode)
    .function("SetLabelModeToLabelIds", &vtkLabeledDataMapper::SetLabelModeToLabelIds)
    .function("SetLabelModeToLabelScalars", &vtkLabeledDataMapper::SetLabelModeToLabelScalars)
    .function("SetLabelModeToLabelVectors", &vtkLabeledDataMapper::SetLabelModeToLabelVectors)
    .function("SetLabelModeToLabelNormals", &vtkLabeledDataMapper::SetLabelModeToLabelNormals)
    .function("SetLabelModeToLabelTCoords", &vtkLabeledDataMapper::SetLabelModeToLabelTCoords)
    .function("SetLabelModeToLabelTensors", &vtkLabeledDataMapper::SetLabelModeToLabelTensors)
    .function("SetLabelModeToLabelFieldData", &vtkLabeledDataMapper::SetLabelModeToLabelFieldData)
    .function("SetLabelTextProperty", emscripten::select_overload<void(vtkLabeledDataMapper&, vtkTextProperty*)>([](vtkLabeledDataMapper& self, vtkTextProperty* arg_0) -> void { return self.SetLabelTextProperty( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetLabelTextProperty", emscripten::select_overload<void(vtkLabeledDataMapper&, vtkTextProperty*, int)>([](vtkLabeledDataMapper& self, vtkTextProperty* arg_0, int arg_1) -> void { return self.SetLabelTextProperty( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", emscripten::select_overload<vtkTextProperty*(vtkLabeledDataMapper&)>([](vtkLabeledDataMapper& self) -> vtkTextProperty* { return self.GetLabelTextProperty(); }), emscripten::allow_raw_pointers())
    .function("GetLabelTextProperty", emscripten::select_overload<vtkTextProperty*(vtkLabeledDataMapper&, int)>([](vtkLabeledDataMapper& self, int arg_0) -> vtkTextProperty* { return self.GetLabelTextProperty( arg_0); }), emscripten::allow_raw_pointers())
    .function("RenderOpaqueGeometry", &vtkLabeledDataMapper::RenderOpaqueGeometry, emscripten::allow_raw_pointers())
    .function("RenderOverlay", &vtkLabeledDataMapper::RenderOverlay, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLabeledDataMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkLabeledDataMapper::GetTransform, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkLabeledDataMapper::SetTransform, emscripten::allow_raw_pointers())
    .function("GetCoordinateSystem", &vtkLabeledDataMapper::GetCoordinateSystem)
    .function("SetCoordinateSystem", &vtkLabeledDataMapper::SetCoordinateSystem)
    .function("GetCoordinateSystemMinValue", &vtkLabeledDataMapper::GetCoordinateSystemMinValue)
    .function("GetCoordinateSystemMaxValue", &vtkLabeledDataMapper::GetCoordinateSystemMaxValue)
    .function("CoordinateSystemWorld", &vtkLabeledDataMapper::CoordinateSystemWorld)
    .function("CoordinateSystemDisplay", &vtkLabeledDataMapper::CoordinateSystemDisplay)
    .function("GetMTime", &vtkLabeledDataMapper::GetMTime)
    .function("GetNumberOfLabels", &vtkLabeledDataMapper::GetNumberOfLabels)
    .function("GetLabelText", emscripten::optional_override([](vtkLabeledDataMapper& self, int arg_0) -> std::string {  return self.GetLabelText( arg_0);}));
}
EMSCRIPTEN_BINDINGS(vtkRenderingLabel_vtkLabeledDataMapper_0_2_constants) {
    typedef vtkLabeledDataMapper::Coordinates cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkLabeledDataMapper_Coordinates_WORLD", vtkLabeledDataMapper::WORLD },
      { "vtkLabeledDataMapper_Coordinates_DISPLAY", vtkLabeledDataMapper::DISPLAY },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
