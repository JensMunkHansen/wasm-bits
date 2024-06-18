// JavaScript wrapper for vtkIncrementalForceLayout with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkIncrementalForceLayoutEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkIncrementalForceLayout.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraph.h"
#include "vtkVector.h"
#include "vtkIncrementalForceLayout.h"

template<> void emscripten::internal::raw_destructor<vtkIncrementalForceLayout>(vtkIncrementalForceLayout * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkIncrementalForceLayout_class) {
  emscripten::class_<vtkIncrementalForceLayout, emscripten::base<vtkObject>>("vtkIncrementalForceLayout")
    .smart_ptr<vtkSmartPointer<vtkIncrementalForceLayout>>("vtkSmartPointer<vtkIncrementalForceLayout>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkIncrementalForceLayout>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalForceLayout::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkIncrementalForceLayout& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkIncrementalForceLayout::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkIncrementalForceLayout::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkIncrementalForceLayout::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkIncrementalForceLayout& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraph", &vtkIncrementalForceLayout::SetGraph, emscripten::allow_raw_pointers())
    .function("GetGraph", &vtkIncrementalForceLayout::GetGraph, emscripten::allow_raw_pointers())
    .function("SetFixed", &vtkIncrementalForceLayout::SetFixed)
    .function("GetFixed", &vtkIncrementalForceLayout::GetFixed)
    .function("SetAlpha", &vtkIncrementalForceLayout::SetAlpha)
    .function("GetAlpha", &vtkIncrementalForceLayout::GetAlpha)
    .function("SetTheta", &vtkIncrementalForceLayout::SetTheta)
    .function("GetTheta", &vtkIncrementalForceLayout::GetTheta)
    .function("SetCharge", &vtkIncrementalForceLayout::SetCharge)
    .function("GetCharge", &vtkIncrementalForceLayout::GetCharge)
    .function("SetStrength", &vtkIncrementalForceLayout::SetStrength)
    .function("GetStrength", &vtkIncrementalForceLayout::GetStrength)
    .function("SetDistance", &vtkIncrementalForceLayout::SetDistance)
    .function("GetDistance", &vtkIncrementalForceLayout::GetDistance)
    .function("SetGravity", &vtkIncrementalForceLayout::SetGravity)
    .function("GetGravity", &vtkIncrementalForceLayout::GetGravity)
    .function("SetFriction", &vtkIncrementalForceLayout::SetFriction)
    .function("GetFriction", &vtkIncrementalForceLayout::GetFriction)
    .function("SetGravityPoint", &vtkIncrementalForceLayout::SetGravityPoint)
    .function("GetGravityPoint", &vtkIncrementalForceLayout::GetGravityPoint)
    .function("UpdatePositions", &vtkIncrementalForceLayout::UpdatePositions);
}
