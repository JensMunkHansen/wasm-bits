// JavaScript wrapper for vtkRecursiveDividingCubes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkRecursiveDividingCubesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkRecursiveDividingCubes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRecursiveDividingCubes.h"

template<> void emscripten::internal::raw_destructor<vtkRecursiveDividingCubes>(vtkRecursiveDividingCubes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRecursiveDividingCubes_class) {
  emscripten::class_<vtkRecursiveDividingCubes, emscripten::base<vtkPolyDataAlgorithm>>("vtkRecursiveDividingCubes")
    .smart_ptr<vtkSmartPointer<vtkRecursiveDividingCubes>>("vtkSmartPointer<vtkRecursiveDividingCubes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRecursiveDividingCubes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRecursiveDividingCubes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRecursiveDividingCubes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRecursiveDividingCubes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRecursiveDividingCubes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRecursiveDividingCubes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRecursiveDividingCubes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetValue", &vtkRecursiveDividingCubes::SetValue)
    .function("GetValue", &vtkRecursiveDividingCubes::GetValue)
    .function("SetDistance", &vtkRecursiveDividingCubes::SetDistance)
    .function("GetDistanceMinValue", &vtkRecursiveDividingCubes::GetDistanceMinValue)
    .function("GetDistanceMaxValue", &vtkRecursiveDividingCubes::GetDistanceMaxValue)
    .function("GetDistance", &vtkRecursiveDividingCubes::GetDistance)
    .function("SetIncrement", &vtkRecursiveDividingCubes::SetIncrement)
    .function("GetIncrementMinValue", &vtkRecursiveDividingCubes::GetIncrementMinValue)
    .function("GetIncrementMaxValue", &vtkRecursiveDividingCubes::GetIncrementMaxValue)
    .function("GetIncrement", &vtkRecursiveDividingCubes::GetIncrement);
}
