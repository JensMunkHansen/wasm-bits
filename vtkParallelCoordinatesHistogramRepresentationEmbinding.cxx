// JavaScript wrapper for vtkParallelCoordinatesHistogramRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkParallelCoordinatesHistogramRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkParallelCoordinatesHistogramRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkViewTheme.h"
#include "vtkParallelCoordinatesHistogramRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkParallelCoordinatesHistogramRepresentation>(vtkParallelCoordinatesHistogramRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkParallelCoordinatesHistogramRepresentation_class) {
  emscripten::class_<vtkParallelCoordinatesHistogramRepresentation, emscripten::base<vtkParallelCoordinatesRepresentation>>("vtkParallelCoordinatesHistogramRepresentation")
    .smart_ptr<vtkSmartPointer<vtkParallelCoordinatesHistogramRepresentation>>("vtkSmartPointer<vtkParallelCoordinatesHistogramRepresentation>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkParallelCoordinatesHistogramRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesHistogramRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkParallelCoordinatesHistogramRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkParallelCoordinatesHistogramRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkParallelCoordinatesHistogramRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkParallelCoordinatesHistogramRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkParallelCoordinatesHistogramRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ApplyViewTheme", &vtkParallelCoordinatesHistogramRepresentation::ApplyViewTheme, emscripten::allow_raw_pointers())
    .function("SetUseHistograms", &vtkParallelCoordinatesHistogramRepresentation::SetUseHistograms)
    .function("GetUseHistograms", &vtkParallelCoordinatesHistogramRepresentation::GetUseHistograms)
    .function("UseHistogramsOn", &vtkParallelCoordinatesHistogramRepresentation::UseHistogramsOn)
    .function("UseHistogramsOff", &vtkParallelCoordinatesHistogramRepresentation::UseHistogramsOff)
    .function("SetShowOutliers", &vtkParallelCoordinatesHistogramRepresentation::SetShowOutliers)
    .function("GetShowOutliers", &vtkParallelCoordinatesHistogramRepresentation::GetShowOutliers)
    .function("ShowOutliersOn", &vtkParallelCoordinatesHistogramRepresentation::ShowOutliersOn)
    .function("ShowOutliersOff", &vtkParallelCoordinatesHistogramRepresentation::ShowOutliersOff)
    .function("SetHistogramLookupTableRange", emscripten::select_overload<void(vtkParallelCoordinatesHistogramRepresentation&, double, double)>([](vtkParallelCoordinatesHistogramRepresentation& self, double arg_0, double arg_1) -> void { return self.SetHistogramLookupTableRange( arg_0, arg_1); }))
    .function("SetNumberOfHistogramBins", emscripten::select_overload<void(vtkParallelCoordinatesHistogramRepresentation&, int, int)>([](vtkParallelCoordinatesHistogramRepresentation& self, int arg_0, int arg_1) -> void { return self.SetNumberOfHistogramBins( arg_0, arg_1); }))
    .function("SetNumberOfHistogramBins", emscripten::select_overload<void(vtkParallelCoordinatesHistogramRepresentation&, std::uintptr_t)>([](vtkParallelCoordinatesHistogramRepresentation& self, std::uintptr_t arg_0) -> void { return self.SetNumberOfHistogramBins(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("SetPreferredNumberOfOutliers", &vtkParallelCoordinatesHistogramRepresentation::SetPreferredNumberOfOutliers)
    .function("GetPreferredNumberOfOutliers", &vtkParallelCoordinatesHistogramRepresentation::GetPreferredNumberOfOutliers)
    .function("SwapAxisPositions", &vtkParallelCoordinatesHistogramRepresentation::SwapAxisPositions);
}
