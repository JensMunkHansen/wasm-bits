// JavaScript wrapper for vtkAreaLayout with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkInfovisLayout.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisLayout.js/vtkAreaLayoutEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Layout/vtkAreaLayout.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAreaLayoutStrategy.h"
#include "vtkAreaLayout.h"

template<> void emscripten::internal::raw_destructor<vtkAreaLayout>(vtkAreaLayout * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAreaLayout_class) {
  emscripten::class_<vtkAreaLayout, emscripten::base<vtkTreeAlgorithm>>("vtkAreaLayout")
    .smart_ptr<vtkSmartPointer<vtkAreaLayout>>("vtkSmartPointer<vtkAreaLayout>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAreaLayout>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAreaLayout::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAreaLayout& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAreaLayout::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAreaLayout::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAreaLayout::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAreaLayout& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSizeArrayName", emscripten::optional_override([](vtkAreaLayout& self, const std::string & arg_0) -> void {  return self.SetSizeArrayName( arg_0.c_str());}))
    .function("GetAreaArrayName", emscripten::optional_override([](vtkAreaLayout& self) -> std::string {  return self.GetAreaArrayName();}))
    .function("SetAreaArrayName", emscripten::optional_override([](vtkAreaLayout& self, const std::string & arg_0) -> void {  return self.SetAreaArrayName( arg_0.c_str());}))
    .function("GetEdgeRoutingPoints", &vtkAreaLayout::GetEdgeRoutingPoints)
    .function("SetEdgeRoutingPoints", &vtkAreaLayout::SetEdgeRoutingPoints)
    .function("EdgeRoutingPointsOn", &vtkAreaLayout::EdgeRoutingPointsOn)
    .function("EdgeRoutingPointsOff", &vtkAreaLayout::EdgeRoutingPointsOff)
    .function("GetLayoutStrategy", &vtkAreaLayout::GetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("SetLayoutStrategy", &vtkAreaLayout::SetLayoutStrategy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAreaLayout::GetMTime)
    .function("GetBoundingArea", emscripten::optional_override([](vtkAreaLayout& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetBoundingArea( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)));}));
}
