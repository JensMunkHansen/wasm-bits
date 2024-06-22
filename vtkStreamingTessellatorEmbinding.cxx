// JavaScript wrapper for vtkStreamingTessellator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkStreamingTessellatorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkStreamingTessellator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkEdgeSubdivisionCriterion.h"
#include "vtkStreamingTessellator.h"

template<> void emscripten::internal::raw_destructor<vtkStreamingTessellator>(vtkStreamingTessellator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStreamingTessellator_class) {
  emscripten::class_<vtkStreamingTessellator, emscripten::base<vtkObject>>("vtkStreamingTessellator")
    .smart_ptr<vtkSmartPointer<vtkStreamingTessellator>>("vtkSmartPointer<vtkStreamingTessellator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStreamingTessellator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamingTessellator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStreamingTessellator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStreamingTessellator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStreamingTessellator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStreamingTessellator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStreamingTessellator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPrivateData", emscripten::optional_override([](vtkStreamingTessellator& self, std::uintptr_t arg_0) -> void {  return self.SetPrivateData(reinterpret_cast<void*>(arg_0));}))
    .function("GetPrivateData", emscripten::optional_override([](vtkStreamingTessellator& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPrivateData());}))
    .function("SetConstPrivateData", emscripten::optional_override([](vtkStreamingTessellator& self, std::uintptr_t arg_0) -> void {  return self.SetConstPrivateData(reinterpret_cast<void*>(arg_0));}))
    .function("GetConstPrivateData", emscripten::optional_override([](vtkStreamingTessellator& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetConstPrivateData());}))
    .function("SetSubdivisionAlgorithm", &vtkStreamingTessellator::SetSubdivisionAlgorithm, emscripten::allow_raw_pointers())
    .function("GetSubdivisionAlgorithm", emscripten::select_overload<vtkEdgeSubdivisionCriterion*(vtkStreamingTessellator&)>([](vtkStreamingTessellator& self) -> vtkEdgeSubdivisionCriterion* { return self.GetSubdivisionAlgorithm(); }), emscripten::allow_raw_pointers())
    .function("GetSubdivisionAlgorithm", emscripten::select_overload<vtkEdgeSubdivisionCriterion*(vtkStreamingTessellator&)>([](vtkStreamingTessellator& self) -> vtkEdgeSubdivisionCriterion* { return self.GetSubdivisionAlgorithm(); }), emscripten::allow_raw_pointers())
    .function("SetEmbeddingDimension", &vtkStreamingTessellator::SetEmbeddingDimension)
    .function("GetEmbeddingDimension", &vtkStreamingTessellator::GetEmbeddingDimension)
    .function("SetFieldSize", &vtkStreamingTessellator::SetFieldSize)
    .function("GetFieldSize", &vtkStreamingTessellator::GetFieldSize)
    .function("SetMaximumNumberOfSubdivisions", &vtkStreamingTessellator::SetMaximumNumberOfSubdivisions)
    .function("GetMaximumNumberOfSubdivisions", &vtkStreamingTessellator::GetMaximumNumberOfSubdivisions)
    .function("AdaptivelySample3FacetLinear", emscripten::optional_override([](vtkStreamingTessellator& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void {  return self.AdaptivelySample3FacetLinear(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double)));}))
    .function("AdaptivelySample2FacetLinear", emscripten::optional_override([](vtkStreamingTessellator& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.AdaptivelySample2FacetLinear(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)));}))
    .function("AdaptivelySample1FacetLinear", emscripten::optional_override([](vtkStreamingTessellator& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void {  return self.AdaptivelySample1FacetLinear(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("AdaptivelySample3Facet", emscripten::select_overload<void(vtkStreamingTessellator&, std::uintptr_t, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkStreamingTessellator& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2, std::uintptr_t arg_3) -> void { return self.AdaptivelySample3Facet(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)),reinterpret_cast<double*>(arg_3 * sizeof(double))); }))
    .function("AdaptivelySample2Facet", emscripten::select_overload<void(vtkStreamingTessellator&, std::uintptr_t, std::uintptr_t, std::uintptr_t)>([](vtkStreamingTessellator& self, std::uintptr_t arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void { return self.AdaptivelySample2Facet(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("AdaptivelySample1Facet", emscripten::select_overload<void(vtkStreamingTessellator&, std::uintptr_t, std::uintptr_t)>([](vtkStreamingTessellator& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void { return self.AdaptivelySample1Facet(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("AdaptivelySample0Facet", emscripten::optional_override([](vtkStreamingTessellator& self, std::uintptr_t arg_0) -> void {  return self.AdaptivelySample0Facet(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("ResetCounts", &vtkStreamingTessellator::ResetCounts)
    .function("GetCaseCount", &vtkStreamingTessellator::GetCaseCount)
    .function("GetSubcaseCount", &vtkStreamingTessellator::GetSubcaseCount);
}
EMSCRIPTEN_BINDINGS(vtkFiltersCore_vtkStreamingTessellator_0_2_constants) {
  emscripten::constant("MaxFieldSize", 18);
}
