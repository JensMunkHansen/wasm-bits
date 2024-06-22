// JavaScript wrapper for vtkVectorDot with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkVectorDotEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkVectorDot.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVectorDot.h"

template<> void emscripten::internal::raw_destructor<vtkVectorDot>(vtkVectorDot * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVectorDot_class) {
  emscripten::class_<vtkVectorDot, emscripten::base<vtkDataSetAlgorithm>>("vtkVectorDot")
    .smart_ptr<vtkSmartPointer<vtkVectorDot>>("vtkSmartPointer<vtkVectorDot>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVectorDot>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorDot::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVectorDot& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVectorDot::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVectorDot::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorDot::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVectorDot& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMapScalars", &vtkVectorDot::SetMapScalars)
    .function("GetMapScalars", &vtkVectorDot::GetMapScalars)
    .function("MapScalarsOn", &vtkVectorDot::MapScalarsOn)
    .function("MapScalarsOff", &vtkVectorDot::MapScalarsOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkVectorDot&, double, double)>([](vtkVectorDot& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }));
}
