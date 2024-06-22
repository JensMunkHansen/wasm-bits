// JavaScript wrapper for vtkPointInterpolator2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkPointInterpolator2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkPointInterpolator2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStdString.h"
#include "vtkPointInterpolator2D.h"

template<> void emscripten::internal::raw_destructor<vtkPointInterpolator2D>(vtkPointInterpolator2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointInterpolator2D_class) {
  emscripten::class_<vtkPointInterpolator2D, emscripten::base<vtkPointInterpolator>>("vtkPointInterpolator2D")
    .smart_ptr<vtkSmartPointer<vtkPointInterpolator2D>>("vtkSmartPointer<vtkPointInterpolator2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointInterpolator2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointInterpolator2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointInterpolator2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointInterpolator2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointInterpolator2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointInterpolator2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointInterpolator2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInterpolateZ", &vtkPointInterpolator2D::SetInterpolateZ)
    .function("GetInterpolateZ", &vtkPointInterpolator2D::GetInterpolateZ)
    .function("InterpolateZOn", &vtkPointInterpolator2D::InterpolateZOn)
    .function("InterpolateZOff", &vtkPointInterpolator2D::InterpolateZOff)
    .function("SetZArrayName", &vtkPointInterpolator2D::SetZArrayName)
    .function("GetZArrayName", &vtkPointInterpolator2D::GetZArrayName);
}
