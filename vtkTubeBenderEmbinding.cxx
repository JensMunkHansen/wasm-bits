// JavaScript wrapper for vtkTubeBender with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkTubeBenderEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkTubeBender.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTubeBender.h"

template<> void emscripten::internal::raw_destructor<vtkTubeBender>(vtkTubeBender * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTubeBender_class) {
  emscripten::class_<vtkTubeBender, emscripten::base<vtkPolyDataAlgorithm>>("vtkTubeBender")
    .smart_ptr<vtkSmartPointer<vtkTubeBender>>("vtkSmartPointer<vtkTubeBender>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTubeBender>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTubeBender::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTubeBender& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTubeBender::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTubeBender::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTubeBender::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTubeBender& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkTubeBender::SetRadius)
    .function("GetRadiusMinValue", &vtkTubeBender::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkTubeBender::GetRadiusMaxValue)
    .function("GetRadius", &vtkTubeBender::GetRadius);
}
