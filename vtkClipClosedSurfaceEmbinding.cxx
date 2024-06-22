// JavaScript wrapper for vtkClipClosedSurface with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkClipClosedSurfaceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkClipClosedSurface.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlaneCollection.h"
#include "vtkPolyData.h"
#include "vtkClipClosedSurface.h"

EMSCRIPTEN_BINDINGS(vtkFiltersGeneral_vtkClipClosedSurface_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_CCS_SCALAR_MODE_NONE", VTK_CCS_SCALAR_MODE_NONE },
      { "VTK_CCS_SCALAR_MODE_COLORS", VTK_CCS_SCALAR_MODE_COLORS },
      { "VTK_CCS_SCALAR_MODE_LABELS", VTK_CCS_SCALAR_MODE_LABELS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkClipClosedSurface>(vtkClipClosedSurface * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClipClosedSurface_class) {
  emscripten::class_<vtkClipClosedSurface, emscripten::base<vtkPolyDataAlgorithm>>("vtkClipClosedSurface")
    .smart_ptr<vtkSmartPointer<vtkClipClosedSurface>>("vtkSmartPointer<vtkClipClosedSurface>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkClipClosedSurface>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipClosedSurface::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClipClosedSurface& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClipClosedSurface::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClipClosedSurface::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipClosedSurface::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClipClosedSurface& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetClippingPlanes", &vtkClipClosedSurface::SetClippingPlanes, emscripten::allow_raw_pointers())
    .function("GetClippingPlanes", &vtkClipClosedSurface::GetClippingPlanes, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkClipClosedSurface::SetTolerance)
    .function("GetTolerance", &vtkClipClosedSurface::GetTolerance)
    .function("SetPassPointData", &vtkClipClosedSurface::SetPassPointData)
    .function("PassPointDataOn", &vtkClipClosedSurface::PassPointDataOn)
    .function("PassPointDataOff", &vtkClipClosedSurface::PassPointDataOff)
    .function("GetPassPointData", &vtkClipClosedSurface::GetPassPointData)
    .function("SetGenerateOutline", &vtkClipClosedSurface::SetGenerateOutline)
    .function("GenerateOutlineOn", &vtkClipClosedSurface::GenerateOutlineOn)
    .function("GenerateOutlineOff", &vtkClipClosedSurface::GenerateOutlineOff)
    .function("GetGenerateOutline", &vtkClipClosedSurface::GetGenerateOutline)
    .function("SetGenerateFaces", &vtkClipClosedSurface::SetGenerateFaces)
    .function("GenerateFacesOn", &vtkClipClosedSurface::GenerateFacesOn)
    .function("GenerateFacesOff", &vtkClipClosedSurface::GenerateFacesOff)
    .function("GetGenerateFaces", &vtkClipClosedSurface::GetGenerateFaces)
    .function("SetScalarMode", &vtkClipClosedSurface::SetScalarMode)
    .function("GetScalarModeMinValue", &vtkClipClosedSurface::GetScalarModeMinValue)
    .function("GetScalarModeMaxValue", &vtkClipClosedSurface::GetScalarModeMaxValue)
    .function("SetScalarModeToNone", &vtkClipClosedSurface::SetScalarModeToNone)
    .function("SetScalarModeToColors", &vtkClipClosedSurface::SetScalarModeToColors)
    .function("SetScalarModeToLabels", &vtkClipClosedSurface::SetScalarModeToLabels)
    .function("GetScalarMode", &vtkClipClosedSurface::GetScalarMode)
    .function("GetScalarModeAsString", emscripten::optional_override([](vtkClipClosedSurface& self) -> std::string {  return self.GetScalarModeAsString();}))
    .function("SetBaseColor", emscripten::select_overload<void(vtkClipClosedSurface&, double, double, double)>([](vtkClipClosedSurface& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetBaseColor( arg_0, arg_1, arg_2); }))
    .function("SetClipColor", emscripten::select_overload<void(vtkClipClosedSurface&, double, double, double)>([](vtkClipClosedSurface& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetClipColor( arg_0, arg_1, arg_2); }))
    .function("SetActivePlaneId", &vtkClipClosedSurface::SetActivePlaneId)
    .function("GetActivePlaneId", &vtkClipClosedSurface::GetActivePlaneId)
    .function("SetActivePlaneColor", emscripten::select_overload<void(vtkClipClosedSurface&, double, double, double)>([](vtkClipClosedSurface& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetActivePlaneColor( arg_0, arg_1, arg_2); }))
    .function("SetTriangulationErrorDisplay", &vtkClipClosedSurface::SetTriangulationErrorDisplay)
    .function("TriangulationErrorDisplayOn", &vtkClipClosedSurface::TriangulationErrorDisplayOn)
    .function("TriangulationErrorDisplayOff", &vtkClipClosedSurface::TriangulationErrorDisplayOff)
    .function("GetTriangulationErrorDisplay", &vtkClipClosedSurface::GetTriangulationErrorDisplay)
    .function("SetInsideOut", &vtkClipClosedSurface::SetInsideOut)
    .function("GetInsideOut", &vtkClipClosedSurface::GetInsideOut)
    .function("InsideOutOn", &vtkClipClosedSurface::InsideOutOn)
    .function("InsideOutOff", &vtkClipClosedSurface::InsideOutOff)
    .function("SetGenerateClipFaceOutput", &vtkClipClosedSurface::SetGenerateClipFaceOutput)
    .function("GetGenerateClipFaceOutput", &vtkClipClosedSurface::GetGenerateClipFaceOutput)
    .function("GenerateClipFaceOutputOn", &vtkClipClosedSurface::GenerateClipFaceOutputOn)
    .function("GenerateClipFaceOutputOff", &vtkClipClosedSurface::GenerateClipFaceOutputOff)
    .function("GetClipFaceOutput", &vtkClipClosedSurface::GetClipFaceOutput, emscripten::allow_raw_pointers());
}
