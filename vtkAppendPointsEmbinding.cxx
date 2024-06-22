// JavaScript wrapper for vtkAppendPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkAppendPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkAppendPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAppendPoints.h"

template<> void emscripten::internal::raw_destructor<vtkAppendPoints>(vtkAppendPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendPoints_class) {
  emscripten::class_<vtkAppendPoints, emscripten::base<vtkPolyDataAlgorithm>>("vtkAppendPoints")
    .smart_ptr<vtkSmartPointer<vtkAppendPoints>>("vtkSmartPointer<vtkAppendPoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAppendPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetInputIdArrayName", emscripten::optional_override([](vtkAppendPoints& self, const std::string & arg_0) -> void {  return self.SetInputIdArrayName( arg_0.c_str());}))
    .function("GetInputIdArrayName", emscripten::optional_override([](vtkAppendPoints& self) -> std::string {  return self.GetInputIdArrayName();}))
    .function("SetOutputPointsPrecision", &vtkAppendPoints::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkAppendPoints::GetOutputPointsPrecision);
}
