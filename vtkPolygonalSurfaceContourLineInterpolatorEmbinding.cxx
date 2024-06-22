// JavaScript wrapper for vtkPolygonalSurfaceContourLineInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolygonalSurfaceContourLineInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolygonalSurfaceContourLineInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkContourRepresentation.h"
#include "vtkIdList.h"
#include "vtkPolygonalSurfaceContourLineInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkPolygonalSurfaceContourLineInterpolator>(vtkPolygonalSurfaceContourLineInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolygonalSurfaceContourLineInterpolator_class) {
  emscripten::class_<vtkPolygonalSurfaceContourLineInterpolator, emscripten::base<vtkPolyDataContourLineInterpolator>>("vtkPolygonalSurfaceContourLineInterpolator")
    .smart_ptr<vtkSmartPointer<vtkPolygonalSurfaceContourLineInterpolator>>("vtkSmartPointer<vtkPolygonalSurfaceContourLineInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolygonalSurfaceContourLineInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygonalSurfaceContourLineInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolygonalSurfaceContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolygonalSurfaceContourLineInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolygonalSurfaceContourLineInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygonalSurfaceContourLineInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolygonalSurfaceContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InterpolateLine", &vtkPolygonalSurfaceContourLineInterpolator::InterpolateLine, emscripten::allow_raw_pointers())
    .function("UpdateNode", emscripten::optional_override([](vtkPolygonalSurfaceContourLineInterpolator& self, vtkRenderer* arg_0, vtkContourRepresentation* arg_1, std::uintptr_t arg_2, int arg_3) -> int {  return self.UpdateNode( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}), emscripten::allow_raw_pointers())
    .function("SetDistanceOffset", &vtkPolygonalSurfaceContourLineInterpolator::SetDistanceOffset)
    .function("GetDistanceOffset", &vtkPolygonalSurfaceContourLineInterpolator::GetDistanceOffset)
    .function("GetContourPointIds", &vtkPolygonalSurfaceContourLineInterpolator::GetContourPointIds, emscripten::allow_raw_pointers());
}
