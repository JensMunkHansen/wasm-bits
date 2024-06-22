// JavaScript wrapper for vtkCutMaterial with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkFiltersParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersParallel.js/vtkCutMaterialEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Parallel/vtkCutMaterial.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkCutMaterial.h"

template<> void emscripten::internal::raw_destructor<vtkCutMaterial>(vtkCutMaterial * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCutMaterial_class) {
  emscripten::class_<vtkCutMaterial, emscripten::base<vtkPolyDataAlgorithm>>("vtkCutMaterial")
    .smart_ptr<vtkSmartPointer<vtkCutMaterial>>("vtkSmartPointer<vtkCutMaterial>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCutMaterial>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCutMaterial::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCutMaterial& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCutMaterial::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCutMaterial::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCutMaterial::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCutMaterial& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMaterialArrayName", emscripten::optional_override([](vtkCutMaterial& self, const std::string & arg_0) -> void {  return self.SetMaterialArrayName( arg_0.c_str());}))
    .function("GetMaterialArrayName", emscripten::optional_override([](vtkCutMaterial& self) -> std::string {  return self.GetMaterialArrayName();}))
    .function("SetMaterial", &vtkCutMaterial::SetMaterial)
    .function("GetMaterial", &vtkCutMaterial::GetMaterial)
    .function("SetArrayName", emscripten::optional_override([](vtkCutMaterial& self, const std::string & arg_0) -> void {  return self.SetArrayName( arg_0.c_str());}))
    .function("GetArrayName", emscripten::optional_override([](vtkCutMaterial& self) -> std::string {  return self.GetArrayName();}))
    .function("SetUpVector", emscripten::select_overload<void(vtkCutMaterial&, double, double, double)>([](vtkCutMaterial& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetUpVector( arg_0, arg_1, arg_2); }));
}
