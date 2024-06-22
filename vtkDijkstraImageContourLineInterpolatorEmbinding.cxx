// JavaScript wrapper for vtkDijkstraImageContourLineInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkDijkstraImageContourLineInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkDijkstraImageContourLineInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkContourRepresentation.h"
#include "vtkImageData.h"
#include "vtkDijkstraImageGeodesicPath.h"
#include "vtkDijkstraImageContourLineInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkDijkstraImageContourLineInterpolator>(vtkDijkstraImageContourLineInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDijkstraImageContourLineInterpolator_class) {
  emscripten::class_<vtkDijkstraImageContourLineInterpolator, emscripten::base<vtkContourLineInterpolator>>("vtkDijkstraImageContourLineInterpolator")
    .smart_ptr<vtkSmartPointer<vtkDijkstraImageContourLineInterpolator>>("vtkSmartPointer<vtkDijkstraImageContourLineInterpolator>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDijkstraImageContourLineInterpolator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDijkstraImageContourLineInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDijkstraImageContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDijkstraImageContourLineInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDijkstraImageContourLineInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDijkstraImageContourLineInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDijkstraImageContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InterpolateLine", &vtkDijkstraImageContourLineInterpolator::InterpolateLine, emscripten::allow_raw_pointers())
    .function("SetCostImage", &vtkDijkstraImageContourLineInterpolator::SetCostImage, emscripten::allow_raw_pointers())
    .function("GetCostImage", &vtkDijkstraImageContourLineInterpolator::GetCostImage, emscripten::allow_raw_pointers())
    .function("GetDijkstraImageGeodesicPath", &vtkDijkstraImageContourLineInterpolator::GetDijkstraImageGeodesicPath, emscripten::allow_raw_pointers());
}
