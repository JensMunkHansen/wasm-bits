// JavaScript wrapper for vtkClosedSurfacePointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkClosedSurfacePointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkClosedSurfacePointPlacer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkPlaneCollection.h"
#include "vtkPlanes.h"
#include "vtkRenderer.h"
#include "vtkClosedSurfacePointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkClosedSurfacePointPlacer>(vtkClosedSurfacePointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClosedSurfacePointPlacer_class) {
  emscripten::class_<vtkClosedSurfacePointPlacer, emscripten::base<vtkPointPlacer>>("vtkClosedSurfacePointPlacer")
    .smart_ptr<vtkSmartPointer<vtkClosedSurfacePointPlacer>>("vtkSmartPointer<vtkClosedSurfacePointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkClosedSurfacePointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClosedSurfacePointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClosedSurfacePointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClosedSurfacePointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClosedSurfacePointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClosedSurfacePointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClosedSurfacePointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddBoundingPlane", &vtkClosedSurfacePointPlacer::AddBoundingPlane, emscripten::allow_raw_pointers())
    .function("RemoveBoundingPlane", &vtkClosedSurfacePointPlacer::RemoveBoundingPlane, emscripten::allow_raw_pointers())
    .function("RemoveAllBoundingPlanes", &vtkClosedSurfacePointPlacer::RemoveAllBoundingPlanes)
    .function("SetBoundingPlanes", emscripten::select_overload<void(vtkClosedSurfacePointPlacer&, vtkPlaneCollection*)>([](vtkClosedSurfacePointPlacer& self, vtkPlaneCollection* arg_0) -> void { return self.SetBoundingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetBoundingPlanes", emscripten::select_overload<void(vtkClosedSurfacePointPlacer&, vtkPlanes*)>([](vtkClosedSurfacePointPlacer& self, vtkPlanes* arg_0) -> void { return self.SetBoundingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetBoundingPlanes", &vtkClosedSurfacePointPlacer::GetBoundingPlanes, emscripten::allow_raw_pointers())
    .function("SetMinimumDistance", &vtkClosedSurfacePointPlacer::SetMinimumDistance)
    .function("GetMinimumDistanceMinValue", &vtkClosedSurfacePointPlacer::GetMinimumDistanceMinValue)
    .function("GetMinimumDistanceMaxValue", &vtkClosedSurfacePointPlacer::GetMinimumDistanceMaxValue)
    .function("GetMinimumDistance", &vtkClosedSurfacePointPlacer::GetMinimumDistance);
}
