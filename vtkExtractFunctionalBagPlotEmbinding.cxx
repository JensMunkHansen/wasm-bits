// JavaScript wrapper for vtkExtractFunctionalBagPlot with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkExtractFunctionalBagPlotEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkExtractFunctionalBagPlot.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractFunctionalBagPlot.h"

template<> void emscripten::internal::raw_destructor<vtkExtractFunctionalBagPlot>(vtkExtractFunctionalBagPlot * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractFunctionalBagPlot_class) {
  emscripten::class_<vtkExtractFunctionalBagPlot, emscripten::base<vtkTableAlgorithm>>("vtkExtractFunctionalBagPlot")
    .smart_ptr<vtkSmartPointer<vtkExtractFunctionalBagPlot>>("vtkSmartPointer<vtkExtractFunctionalBagPlot>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractFunctionalBagPlot>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractFunctionalBagPlot::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractFunctionalBagPlot& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractFunctionalBagPlot::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractFunctionalBagPlot::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractFunctionalBagPlot::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractFunctionalBagPlot& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDensityForP50", &vtkExtractFunctionalBagPlot::SetDensityForP50)
    .function("SetDensityForPUser", &vtkExtractFunctionalBagPlot::SetDensityForPUser)
    .function("SetPUser", &vtkExtractFunctionalBagPlot::SetPUser);
}
