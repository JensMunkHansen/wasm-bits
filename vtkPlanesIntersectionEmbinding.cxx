// JavaScript wrapper for vtkPlanesIntersection with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPlanesIntersectionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPlanesIntersection.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkCell.h"
#include "vtkPlanesIntersection.h"

template<> void emscripten::internal::raw_destructor<vtkPlanesIntersection>(vtkPlanesIntersection * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlanesIntersection_class) {
  emscripten::class_<vtkPlanesIntersection, emscripten::base<vtkPlanes>>("vtkPlanesIntersection")
    .smart_ptr<vtkSmartPointer<vtkPlanesIntersection>>("vtkSmartPointer<vtkPlanesIntersection>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlanesIntersection>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlanesIntersection::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlanesIntersection& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlanesIntersection::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlanesIntersection::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlanesIntersection::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlanesIntersection& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRegionVertices", emscripten::select_overload<void(vtkPlanesIntersection&, vtkPoints*)>([](vtkPlanesIntersection& self, vtkPoints* arg_0) -> void { return self.SetRegionVertices( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetRegionVertices", emscripten::select_overload<void(vtkPlanesIntersection&, std::uintptr_t, int)>([](vtkPlanesIntersection& self, std::uintptr_t arg_0, int arg_1) -> void { return self.SetRegionVertices(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1); }))
    .function("GetNumberOfRegionVertices", &vtkPlanesIntersection::GetNumberOfRegionVertices)
    .function("GetNumRegionVertices", &vtkPlanesIntersection::GetNumRegionVertices)
    .function("GetRegionVertices", emscripten::optional_override([](vtkPlanesIntersection& self, std::uintptr_t arg_0, int arg_1) -> int {  return self.GetRegionVertices(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}))
    .function("IntersectsRegion", &vtkPlanesIntersection::IntersectsRegion, emscripten::allow_raw_pointers())
    .class_function("Convert3DCell", &vtkPlanesIntersection::Convert3DCell, emscripten::allow_raw_pointers());
}
