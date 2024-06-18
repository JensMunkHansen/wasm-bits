// JavaScript wrapper for vtkVisibilitySort with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkVisibilitySortEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkVisibilitySort.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdTypeArray.h"
#include "vtkMatrix4x4.h"
#include "vtkCamera.h"
#include "vtkDataSet.h"
#include "vtkVisibilitySort.h"

template<> void emscripten::internal::raw_destructor<vtkVisibilitySort>(vtkVisibilitySort * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVisibilitySort_class) {
  emscripten::class_<vtkVisibilitySort, emscripten::base<vtkObject>>("vtkVisibilitySort")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVisibilitySort::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVisibilitySort& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVisibilitySort::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVisibilitySort::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVisibilitySort::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVisibilitySort& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaxCellsReturned", &vtkVisibilitySort::SetMaxCellsReturned)
    .function("GetMaxCellsReturnedMinValue", &vtkVisibilitySort::GetMaxCellsReturnedMinValue)
    .function("GetMaxCellsReturnedMaxValue", &vtkVisibilitySort::GetMaxCellsReturnedMaxValue)
    .function("GetMaxCellsReturned", &vtkVisibilitySort::GetMaxCellsReturned)
    .function("SetModelTransform", &vtkVisibilitySort::SetModelTransform, emscripten::allow_raw_pointers())
    .function("GetModelTransform", &vtkVisibilitySort::GetModelTransform, emscripten::allow_raw_pointers())
    .function("GetInverseModelTransform", &vtkVisibilitySort::GetInverseModelTransform, emscripten::allow_raw_pointers())
    .function("SetCamera", &vtkVisibilitySort::SetCamera, emscripten::allow_raw_pointers())
    .function("GetCamera", &vtkVisibilitySort::GetCamera, emscripten::allow_raw_pointers())
    .function("SetInput", &vtkVisibilitySort::SetInput, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkVisibilitySort::GetInput, emscripten::allow_raw_pointers())
    .function("GetDirection", &vtkVisibilitySort::GetDirection)
    .function("SetDirection", &vtkVisibilitySort::SetDirection)
    .function("SetDirectionToBackToFront", &vtkVisibilitySort::SetDirectionToBackToFront)
    .function("SetDirectionToFrontToBack", &vtkVisibilitySort::SetDirectionToFrontToBack)
    .function("UsesGarbageCollector", &vtkVisibilitySort::UsesGarbageCollector);
}
EMSCRIPTEN_BINDINGS(vtkRenderingCore_vtkVisibilitySort_0_2_constants) {
  const struct { const char *name; int value; }
    constants[2] = {
      { "vtkVisibilitySort_BACK_TO_FRONT", vtkVisibilitySort::BACK_TO_FRONT },
      { "vtkVisibilitySort_FRONT_TO_BACK", vtkVisibilitySort::FRONT_TO_BACK },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
