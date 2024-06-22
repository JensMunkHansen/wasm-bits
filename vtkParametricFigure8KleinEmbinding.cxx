// JavaScript wrapper for vtkParametricFigure8Klein with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkCommonComputationalGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonComputationalGeometry.js/vtkParametricFigure8KleinEmbinding.cxx \
 /home/jmh/github/vtk/Common/ComputationalGeometry/vtkParametricFigure8Klein.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkParametricFigure8Klein.h"

template<> void emscripten::internal::raw_destructor<vtkParametricFigure8Klein>(vtkParametricFigure8Klein * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParametricFigure8Klein_class) {
  emscripten::class_<vtkParametricFigure8Klein, emscripten::base<vtkParametricFunction>>("vtkParametricFigure8Klein")
    .smart_ptr<vtkSmartPointer<vtkParametricFigure8Klein>>("vtkSmartPointer<vtkParametricFigure8Klein>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParametricFigure8Klein>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricFigure8Klein::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParametricFigure8Klein& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParametricFigure8Klein::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParametricFigure8Klein::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParametricFigure8Klein::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParametricFigure8Klein& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkParametricFigure8Klein::SetRadius)
    .function("GetRadius", &vtkParametricFigure8Klein::GetRadius)
    .function("GetDimension", &vtkParametricFigure8Klein::GetDimension);
}
