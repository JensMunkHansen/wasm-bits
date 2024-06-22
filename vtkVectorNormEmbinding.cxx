// JavaScript wrapper for vtkVectorNorm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkVectorNormEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkVectorNorm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVectorNorm.h"

EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkVectorNorm_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_ATTRIBUTE_MODE_DEFAULT", 0 },
      { "VTK_ATTRIBUTE_MODE_USE_POINT_DATA", 1 },
      { "VTK_ATTRIBUTE_MODE_USE_CELL_DATA", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkVectorNorm>(vtkVectorNorm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVectorNorm_class) {
  emscripten::class_<vtkVectorNorm, emscripten::base<vtkDataSetAlgorithm>>("vtkVectorNorm")
    .smart_ptr<vtkSmartPointer<vtkVectorNorm>>("vtkSmartPointer<vtkVectorNorm>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVectorNorm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorNorm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVectorNorm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVectorNorm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVectorNorm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVectorNorm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVectorNorm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNormalize", &vtkVectorNorm::SetNormalize)
    .function("GetNormalize", &vtkVectorNorm::GetNormalize)
    .function("NormalizeOn", &vtkVectorNorm::NormalizeOn)
    .function("NormalizeOff", &vtkVectorNorm::NormalizeOff)
    .function("SetAttributeMode", &vtkVectorNorm::SetAttributeMode)
    .function("GetAttributeMode", &vtkVectorNorm::GetAttributeMode)
    .function("SetAttributeModeToDefault", &vtkVectorNorm::SetAttributeModeToDefault)
    .function("SetAttributeModeToUsePointData", &vtkVectorNorm::SetAttributeModeToUsePointData)
    .function("SetAttributeModeToUseCellData", &vtkVectorNorm::SetAttributeModeToUseCellData)
    .function("GetAttributeModeAsString", emscripten::optional_override([](vtkVectorNorm& self) -> std::string {  return self.GetAttributeModeAsString();}));
}
