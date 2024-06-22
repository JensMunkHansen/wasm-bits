// JavaScript wrapper for vtkFlyingEdgesPlaneCutter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFlyingEdgesPlaneCutterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkFlyingEdgesPlaneCutter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlane.h"
#include "vtkFlyingEdgesPlaneCutter.h"

template<> void emscripten::internal::raw_destructor<vtkFlyingEdgesPlaneCutter>(vtkFlyingEdgesPlaneCutter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFlyingEdgesPlaneCutter_class) {
  emscripten::class_<vtkFlyingEdgesPlaneCutter, emscripten::base<vtkPolyDataAlgorithm>>("vtkFlyingEdgesPlaneCutter")
    .smart_ptr<vtkSmartPointer<vtkFlyingEdgesPlaneCutter>>("vtkSmartPointer<vtkFlyingEdgesPlaneCutter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFlyingEdgesPlaneCutter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlyingEdgesPlaneCutter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFlyingEdgesPlaneCutter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFlyingEdgesPlaneCutter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFlyingEdgesPlaneCutter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFlyingEdgesPlaneCutter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFlyingEdgesPlaneCutter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkFlyingEdgesPlaneCutter::GetMTime)
    .function("SetPlane", &vtkFlyingEdgesPlaneCutter::SetPlane, emscripten::allow_raw_pointers())
    .function("GetPlane", &vtkFlyingEdgesPlaneCutter::GetPlane, emscripten::allow_raw_pointers())
    .function("SetComputeNormals", &vtkFlyingEdgesPlaneCutter::SetComputeNormals)
    .function("GetComputeNormals", &vtkFlyingEdgesPlaneCutter::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkFlyingEdgesPlaneCutter::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkFlyingEdgesPlaneCutter::ComputeNormalsOff)
    .function("SetInterpolateAttributes", &vtkFlyingEdgesPlaneCutter::SetInterpolateAttributes)
    .function("GetInterpolateAttributes", &vtkFlyingEdgesPlaneCutter::GetInterpolateAttributes)
    .function("InterpolateAttributesOn", &vtkFlyingEdgesPlaneCutter::InterpolateAttributesOn)
    .function("InterpolateAttributesOff", &vtkFlyingEdgesPlaneCutter::InterpolateAttributesOff)
    .function("SetArrayComponent", &vtkFlyingEdgesPlaneCutter::SetArrayComponent)
    .function("GetArrayComponent", &vtkFlyingEdgesPlaneCutter::GetArrayComponent);
}
