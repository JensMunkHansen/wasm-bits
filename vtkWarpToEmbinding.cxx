// JavaScript wrapper for vtkWarpTo with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkWarpToEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkWarpTo.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkWarpTo.h"

template<> void emscripten::internal::raw_destructor<vtkWarpTo>(vtkWarpTo * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWarpTo_class) {
  emscripten::class_<vtkWarpTo, emscripten::base<vtkPointSetAlgorithm>>("vtkWarpTo")
    .smart_ptr<vtkSmartPointer<vtkWarpTo>>("vtkSmartPointer<vtkWarpTo>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWarpTo>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpTo::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWarpTo& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWarpTo::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWarpTo::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpTo::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWarpTo& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetScaleFactor", &vtkWarpTo::SetScaleFactor)
    .function("GetScaleFactor", &vtkWarpTo::GetScaleFactor)
    .function("SetPosition", emscripten::select_overload<void(vtkWarpTo&, double, double, double)>([](vtkWarpTo& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPosition( arg_0, arg_1, arg_2); }))
    .function("SetAbsolute", &vtkWarpTo::SetAbsolute)
    .function("GetAbsolute", &vtkWarpTo::GetAbsolute)
    .function("AbsoluteOn", &vtkWarpTo::AbsoluteOn)
    .function("AbsoluteOff", &vtkWarpTo::AbsoluteOff)
    .function("FillInputPortInformation", &vtkWarpTo::FillInputPortInformation, emscripten::allow_raw_pointers());
}
