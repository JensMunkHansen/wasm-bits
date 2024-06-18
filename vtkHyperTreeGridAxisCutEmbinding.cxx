// JavaScript wrapper for vtkHyperTreeGridAxisCut with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridAxisCutEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridAxisCut.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGridAxisCut.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridAxisCut>(vtkHyperTreeGridAxisCut * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridAxisCut_class) {
  emscripten::class_<vtkHyperTreeGridAxisCut, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridAxisCut")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridAxisCut>>("vtkSmartPointer<vtkHyperTreeGridAxisCut>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkHyperTreeGridAxisCut>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAxisCut::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridAxisCut& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridAxisCut::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridAxisCut::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAxisCut::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridAxisCut& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlaneNormalAxis", &vtkHyperTreeGridAxisCut::SetPlaneNormalAxis)
    .function("GetPlaneNormalAxisMinValue", &vtkHyperTreeGridAxisCut::GetPlaneNormalAxisMinValue)
    .function("GetPlaneNormalAxisMaxValue", &vtkHyperTreeGridAxisCut::GetPlaneNormalAxisMaxValue)
    .function("GetPlaneNormalAxis", &vtkHyperTreeGridAxisCut::GetPlaneNormalAxis)
    .function("SetPlanePosition", &vtkHyperTreeGridAxisCut::SetPlanePosition)
    .function("GetPlanePosition", &vtkHyperTreeGridAxisCut::GetPlanePosition);
}
