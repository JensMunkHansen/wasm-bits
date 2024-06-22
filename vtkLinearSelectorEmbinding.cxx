// JavaScript wrapper for vtkLinearSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSelection.js/vtkFiltersSelection.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSelection.js/vtkLinearSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Selection/vtkLinearSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkLinearSelector.h"

template<> void emscripten::internal::raw_destructor<vtkLinearSelector>(vtkLinearSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinearSelector_class) {
  emscripten::class_<vtkLinearSelector, emscripten::base<vtkSelectionAlgorithm>>("vtkLinearSelector")
    .smart_ptr<vtkSmartPointer<vtkLinearSelector>>("vtkSmartPointer<vtkLinearSelector>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkLinearSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinearSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinearSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinearSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinearSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetStartPoint", emscripten::select_overload<void(vtkLinearSelector&, double, double, double)>([](vtkLinearSelector& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetStartPoint( arg_0, arg_1, arg_2); }))
    .function("SetEndPoint", emscripten::select_overload<void(vtkLinearSelector&, double, double, double)>([](vtkLinearSelector& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetEndPoint( arg_0, arg_1, arg_2); }))
    .function("SetPoints", &vtkLinearSelector::SetPoints, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkLinearSelector::GetPoints, emscripten::allow_raw_pointers())
    .function("SetTolerance", &vtkLinearSelector::SetTolerance)
    .function("GetTolerance", &vtkLinearSelector::GetTolerance)
    .function("SetIncludeVertices", &vtkLinearSelector::SetIncludeVertices)
    .function("GetIncludeVertices", &vtkLinearSelector::GetIncludeVertices)
    .function("IncludeVerticesOn", &vtkLinearSelector::IncludeVerticesOn)
    .function("IncludeVerticesOff", &vtkLinearSelector::IncludeVerticesOff)
    .function("SetVertexEliminationTolerance", &vtkLinearSelector::SetVertexEliminationTolerance)
    .function("GetVertexEliminationToleranceMinValue", &vtkLinearSelector::GetVertexEliminationToleranceMinValue)
    .function("GetVertexEliminationToleranceMaxValue", &vtkLinearSelector::GetVertexEliminationToleranceMaxValue)
    .function("GetVertexEliminationTolerance", &vtkLinearSelector::GetVertexEliminationTolerance);
}
