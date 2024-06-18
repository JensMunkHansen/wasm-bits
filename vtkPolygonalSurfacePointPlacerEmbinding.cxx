// JavaScript wrapper for vtkPolygonalSurfacePointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolygonalSurfacePointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolygonalSurfacePointPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProp.h"
#include "vtkRenderer.h"
#include "vtkCellPicker.h"
#include "vtkPolyDataCollection.h"
#include "vtkPolygonalSurfacePointPlacer.h"


EMSCRIPTEN_BINDINGS(vtkPolygonalSurfacePointPlacerNode_class) {
  emscripten::class_<vtkPolygonalSurfacePointPlacerNode>("vtkPolygonalSurfacePointPlacerNode");
}
template<> void emscripten::internal::raw_destructor<vtkPolygonalSurfacePointPlacer>(vtkPolygonalSurfacePointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolygonalSurfacePointPlacer_class) {
  emscripten::class_<vtkPolygonalSurfacePointPlacer, emscripten::base<vtkPolyDataPointPlacer>>("vtkPolygonalSurfacePointPlacer")
    .smart_ptr<vtkSmartPointer<vtkPolygonalSurfacePointPlacer>>("vtkSmartPointer<vtkPolygonalSurfacePointPlacer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolygonalSurfacePointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygonalSurfacePointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolygonalSurfacePointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolygonalSurfacePointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolygonalSurfacePointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygonalSurfacePointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolygonalSurfacePointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddProp", &vtkPolygonalSurfacePointPlacer::AddProp, emscripten::allow_raw_pointers())
    .function("RemoveViewProp", &vtkPolygonalSurfacePointPlacer::RemoveViewProp, emscripten::allow_raw_pointers())
    .function("RemoveAllProps", &vtkPolygonalSurfacePointPlacer::RemoveAllProps)
    .function("GetCellPicker", &vtkPolygonalSurfacePointPlacer::GetCellPicker, emscripten::allow_raw_pointers())
    .function("GetPolys", &vtkPolygonalSurfacePointPlacer::GetPolys, emscripten::allow_raw_pointers())
    .function("SetDistanceOffset", &vtkPolygonalSurfacePointPlacer::SetDistanceOffset)
    .function("GetDistanceOffset", &vtkPolygonalSurfacePointPlacer::GetDistanceOffset)
    .function("SetSnapToClosestPoint", &vtkPolygonalSurfacePointPlacer::SetSnapToClosestPoint)
    .function("GetSnapToClosestPoint", &vtkPolygonalSurfacePointPlacer::GetSnapToClosestPoint)
    .function("SnapToClosestPointOn", &vtkPolygonalSurfacePointPlacer::SnapToClosestPointOn)
    .function("SnapToClosestPointOff", &vtkPolygonalSurfacePointPlacer::SnapToClosestPointOff);
}
