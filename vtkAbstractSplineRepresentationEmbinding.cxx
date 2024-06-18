// JavaScript wrapper for vtkAbstractSplineRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkAbstractSplineRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkAbstractSplineRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkParametricSpline.h"
#include "vtkDoubleArray.h"
#include "vtkAbstractSplineRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkAbstractSplineRepresentation>(vtkAbstractSplineRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAbstractSplineRepresentation_class) {
  emscripten::class_<vtkAbstractSplineRepresentation, emscripten::base<vtkCurveRepresentation>>("vtkAbstractSplineRepresentation")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractSplineRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAbstractSplineRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAbstractSplineRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAbstractSplineRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAbstractSplineRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAbstractSplineRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPolyData", &vtkAbstractSplineRepresentation::GetPolyData, emscripten::allow_raw_pointers())
    .function("SetResolution", &vtkAbstractSplineRepresentation::SetResolution)
    .function("GetResolution", &vtkAbstractSplineRepresentation::GetResolution)
    .function("GetParametricSpline", &vtkAbstractSplineRepresentation::GetParametricSpline, emscripten::allow_raw_pointers())
    .function("SetParametricSpline", &vtkAbstractSplineRepresentation::SetParametricSpline, emscripten::allow_raw_pointers())
    .function("GetHandlePositions", &vtkAbstractSplineRepresentation::GetHandlePositions, emscripten::allow_raw_pointers())
    .function("GetSummedLength", &vtkAbstractSplineRepresentation::GetSummedLength);
}
