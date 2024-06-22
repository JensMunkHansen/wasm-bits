// JavaScript wrapper for vtkTreeMapLayout with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkTreeMapLayoutEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkTreeMapLayout.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTreeMapLayoutStrategy.h"
#include "vtkTreeMapLayout.h"

template<> void emscripten::internal::raw_destructor<vtkTreeMapLayout>(vtkTreeMapLayout * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTreeMapLayout_class) {
  emscripten::class_<vtkTreeMapLayout, emscripten::base<vtkTreeAlgorithm>>("vtkTreeMapLayout")
    .smart_ptr<vtkSmartPointer<vtkTreeMapLayout>>("vtkSmartPointer<vtkTreeMapLayout>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTreeMapLayout>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeMapLayout::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTreeMapLayout& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTreeMapLayout::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTreeMapLayout::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTreeMapLayout::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTreeMapLayout& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetRectanglesFieldName", emscripten::optional_override([](vtkTreeMapLayout& self) -> std::string {  return self.GetRectanglesFieldName();}))
    .function("SetRectanglesFieldName", emscripten::optional_override([](vtkTreeMapLayout& self, const std::string & arg_0) -> void {  return self.SetRectanglesFieldName( arg_0.c_str());}))
    .function("SetSizeArrayName", emscripten::optional_override([](vtkTreeMapLayout& self, const std::string & arg_0) -> void {  return self.SetSizeArrayName( arg_0.c_str());}))
    .function("GetLayoutStrategy", &vtkTreeMapLayout::GetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("SetLayoutStrategy", &vtkTreeMapLayout::SetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("GetBoundingBox", emscripten::optional_override([](vtkTreeMapLayout& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetBoundingBox( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)));}))
    .function("GetMTime", &vtkTreeMapLayout::GetMTime);
}
