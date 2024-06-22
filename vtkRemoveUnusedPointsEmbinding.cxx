// JavaScript wrapper for vtkRemoveUnusedPoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkRemoveUnusedPointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkRemoveUnusedPoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRemoveUnusedPoints.h"

template<> void emscripten::internal::raw_destructor<vtkRemoveUnusedPoints>(vtkRemoveUnusedPoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRemoveUnusedPoints_class) {
  emscripten::class_<vtkRemoveUnusedPoints, emscripten::base<vtkUnstructuredGridAlgorithm>>("vtkRemoveUnusedPoints")
    .smart_ptr<vtkSmartPointer<vtkRemoveUnusedPoints>>("vtkSmartPointer<vtkRemoveUnusedPoints>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRemoveUnusedPoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveUnusedPoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRemoveUnusedPoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRemoveUnusedPoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRemoveUnusedPoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveUnusedPoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRemoveUnusedPoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGenerateOriginalPointIds", &vtkRemoveUnusedPoints::SetGenerateOriginalPointIds)
    .function("GetGenerateOriginalPointIds", &vtkRemoveUnusedPoints::GetGenerateOriginalPointIds)
    .function("GenerateOriginalPointIdsOn", &vtkRemoveUnusedPoints::GenerateOriginalPointIdsOn)
    .function("GenerateOriginalPointIdsOff", &vtkRemoveUnusedPoints::GenerateOriginalPointIdsOff)
    .function("SetOriginalPointIdsArrayName", emscripten::optional_override([](vtkRemoveUnusedPoints& self, const std::string & arg_0) -> void {  return self.SetOriginalPointIdsArrayName( arg_0.c_str());}))
    .function("GetOriginalPointIdsArrayName", emscripten::optional_override([](vtkRemoveUnusedPoints& self) -> std::string {  return self.GetOriginalPointIdsArrayName();}));
}
