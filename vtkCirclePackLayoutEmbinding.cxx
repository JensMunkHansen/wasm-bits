// JavaScript wrapper for vtkCirclePackLayout with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkCirclePackLayoutEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkCirclePackLayout.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCirclePackLayoutStrategy.h"
#include "vtkCirclePackLayout.h"

template<> void emscripten::internal::raw_destructor<vtkCirclePackLayout>(vtkCirclePackLayout * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCirclePackLayout_class) {
  emscripten::class_<vtkCirclePackLayout, emscripten::base<vtkTreeAlgorithm>>("vtkCirclePackLayout")
    .smart_ptr<vtkSmartPointer<vtkCirclePackLayout>>("vtkSmartPointer<vtkCirclePackLayout>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCirclePackLayout>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackLayout::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCirclePackLayout& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCirclePackLayout::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCirclePackLayout::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCirclePackLayout::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCirclePackLayout& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetCirclesFieldName", emscripten::optional_override([](vtkCirclePackLayout& self) -> std::string {  return self.GetCirclesFieldName();}))
    .function("SetCirclesFieldName", emscripten::optional_override([](vtkCirclePackLayout& self, const std::string & arg_0) -> void {  return self.SetCirclesFieldName( arg_0.c_str());}))
    .function("SetSizeArrayName", emscripten::optional_override([](vtkCirclePackLayout& self, const std::string & arg_0) -> void {  return self.SetSizeArrayName( arg_0.c_str());}))
    .function("GetLayoutStrategy", &vtkCirclePackLayout::GetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("SetLayoutStrategy", &vtkCirclePackLayout::SetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("GetBoundingCircle", emscripten::optional_override([](vtkCirclePackLayout& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetBoundingCircle( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("GetMTime", &vtkCirclePackLayout::GetMTime);
}
