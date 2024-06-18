// JavaScript wrapper for vtkContourLineInterpolator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkContourLineInterpolatorEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkContourLineInterpolator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkContourRepresentation.h"
#include "vtkIntArray.h"
#include "vtkContourLineInterpolator.h"

template<> void emscripten::internal::raw_destructor<vtkContourLineInterpolator>(vtkContourLineInterpolator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContourLineInterpolator_class) {
  emscripten::class_<vtkContourLineInterpolator, emscripten::base<vtkObject>>("vtkContourLineInterpolator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourLineInterpolator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContourLineInterpolator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContourLineInterpolator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContourLineInterpolator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContourLineInterpolator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("UpdateNode", emscripten::optional_override([](vtkContourLineInterpolator& self, vtkRenderer* arg_0, vtkContourRepresentation* arg_1, std::uintptr_t arg_2, int arg_3) -> int {  return self.UpdateNode( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double)), arg_3);}), emscripten::allow_raw_pointers())
    .function("GetSpan", &vtkContourLineInterpolator::GetSpan, emscripten::allow_raw_pointers());
}
