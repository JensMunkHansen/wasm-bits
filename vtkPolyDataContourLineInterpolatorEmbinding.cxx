// JavaScript wrapper for vtkPolyDataContourLineInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolyDataContourLineInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolyDataContourLineInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkContourRepresentation.h"
#include "vtkPolyDataCollection.h"
#include "vtkPolyDataContourLineInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataContourLineInterpolator>(vtkPolyDataContourLineInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataContourLineInterpolator_class) {
  emscripten::class_<vtkPolyDataContourLineInterpolator, emscripten::base<vtkContourLineInterpolator>>("vtkPolyDataContourLineInterpolator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataContourLineInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataContourLineInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataContourLineInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataContourLineInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetPolys", &vtkPolyDataContourLineInterpolator::GetPolys, emscripten::allow_raw_pointers());
}