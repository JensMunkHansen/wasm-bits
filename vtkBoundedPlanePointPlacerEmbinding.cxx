// JavaScript wrapper for vtkBoundedPlanePointPlacer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkBoundedPlanePointPlacerEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkBoundedPlanePointPlacer.h
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
#include "vtkBoundedPlanePointPlacer.h"

template<> void emscripten::internal::raw_destructor<vtkBoundedPlanePointPlacer>(vtkBoundedPlanePointPlacer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoundedPlanePointPlacer_class) {
  emscripten::class_<vtkBoundedPlanePointPlacer, emscripten::base<vtkPointPlacer>>("vtkBoundedPlanePointPlacer")
    .smart_ptr<vtkSmartPointer<vtkBoundedPlanePointPlacer>>("vtkSmartPointer<vtkBoundedPlanePointPlacer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBoundedPlanePointPlacer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoundedPlanePointPlacer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoundedPlanePointPlacer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoundedPlanePointPlacer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoundedPlanePointPlacer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoundedPlanePointPlacer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoundedPlanePointPlacer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetProjectionNormal", &vtkBoundedPlanePointPlacer::SetProjectionNormal)
    .function("GetProjectionNormalMinValue", &vtkBoundedPlanePointPlacer::GetProjectionNormalMinValue)
    .function("GetProjectionNormalMaxValue", &vtkBoundedPlanePointPlacer::GetProjectionNormalMaxValue)
    .function("GetProjectionNormal", emscripten::select_overload<int(vtkBoundedPlanePointPlacer&)>([](vtkBoundedPlanePointPlacer& self) -> int { return self.GetProjectionNormal(); }))
    .function("SetProjectionNormalToXAxis", &vtkBoundedPlanePointPlacer::SetProjectionNormalToXAxis)
    .function("SetProjectionNormalToYAxis", &vtkBoundedPlanePointPlacer::SetProjectionNormalToYAxis)
    .function("SetProjectionNormalToZAxis", &vtkBoundedPlanePointPlacer::SetProjectionNormalToZAxis)
    .function("SetProjectionNormalToOblique", &vtkBoundedPlanePointPlacer::SetProjectionNormalToOblique)
    .function("SetObliquePlane", &vtkBoundedPlanePointPlacer::SetObliquePlane, emscripten::allow_raw_pointers())
    .function("GetObliquePlane", &vtkBoundedPlanePointPlacer::GetObliquePlane, emscripten::allow_raw_pointers())
    .function("SetProjectionPosition", &vtkBoundedPlanePointPlacer::SetProjectionPosition)
    .function("GetProjectionPosition", &vtkBoundedPlanePointPlacer::GetProjectionPosition)
    .function("AddBoundingPlane", &vtkBoundedPlanePointPlacer::AddBoundingPlane, emscripten::allow_raw_pointers())
    .function("RemoveBoundingPlane", &vtkBoundedPlanePointPlacer::RemoveBoundingPlane, emscripten::allow_raw_pointers())
    .function("RemoveAllBoundingPlanes", &vtkBoundedPlanePointPlacer::RemoveAllBoundingPlanes)
    .function("SetBoundingPlanes", emscripten::select_overload<void(vtkBoundedPlanePointPlacer&, vtkPlaneCollection*)>([](vtkBoundedPlanePointPlacer& self, vtkPlaneCollection* arg_0) -> void { return self.SetBoundingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetBoundingPlanes", emscripten::select_overload<void(vtkBoundedPlanePointPlacer&, vtkPlanes*)>([](vtkBoundedPlanePointPlacer& self, vtkPlanes* arg_0) -> void { return self.SetBoundingPlanes( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetBoundingPlanes", &vtkBoundedPlanePointPlacer::GetBoundingPlanes, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkInteractionWidgets_vtkBoundedPlanePointPlacer_0_2_constants) {
  const struct { const char *name; int value; }
    constants[4] = {
      { "vtkBoundedPlanePointPlacer_XAxis", vtkBoundedPlanePointPlacer::XAxis },
      { "vtkBoundedPlanePointPlacer_YAxis", vtkBoundedPlanePointPlacer::YAxis },
      { "vtkBoundedPlanePointPlacer_ZAxis", vtkBoundedPlanePointPlacer::ZAxis },
      { "vtkBoundedPlanePointPlacer_Oblique", vtkBoundedPlanePointPlacer::Oblique },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
