// JavaScript wrapper for vtkRandomHyperTreeGridSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkRandomHyperTreeGridSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkRandomHyperTreeGridSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRandomHyperTreeGridSource.h"

template<> void emscripten::internal::raw_destructor<vtkRandomHyperTreeGridSource>(vtkRandomHyperTreeGridSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRandomHyperTreeGridSource_class) {
  emscripten::class_<vtkRandomHyperTreeGridSource, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkRandomHyperTreeGridSource")
    .smart_ptr<vtkSmartPointer<vtkRandomHyperTreeGridSource>>("vtkSmartPointer<vtkRandomHyperTreeGridSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRandomHyperTreeGridSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRandomHyperTreeGridSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRandomHyperTreeGridSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRandomHyperTreeGridSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRandomHyperTreeGridSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRandomHyperTreeGridSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRandomHyperTreeGridSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDimensions", emscripten::select_overload<void(vtkRandomHyperTreeGridSource&, unsigned int, unsigned int, unsigned int)>([](vtkRandomHyperTreeGridSource& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("SetOutputBounds", emscripten::select_overload<void(vtkRandomHyperTreeGridSource&, double, double, double, double, double, double)>([](vtkRandomHyperTreeGridSource& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetOutputBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetSeed", &vtkRandomHyperTreeGridSource::GetSeed)
    .function("SetSeed", &vtkRandomHyperTreeGridSource::SetSeed)
    .function("GetMaxDepth", &vtkRandomHyperTreeGridSource::GetMaxDepth)
    .function("SetMaxDepth", &vtkRandomHyperTreeGridSource::SetMaxDepth)
    .function("GetMaxDepthMinValue", &vtkRandomHyperTreeGridSource::GetMaxDepthMinValue)
    .function("GetMaxDepthMaxValue", &vtkRandomHyperTreeGridSource::GetMaxDepthMaxValue)
    .function("GetSplitFraction", &vtkRandomHyperTreeGridSource::GetSplitFraction)
    .function("SetSplitFraction", &vtkRandomHyperTreeGridSource::SetSplitFraction)
    .function("GetSplitFractionMinValue", &vtkRandomHyperTreeGridSource::GetSplitFractionMinValue)
    .function("GetSplitFractionMaxValue", &vtkRandomHyperTreeGridSource::GetSplitFractionMaxValue)
    .function("GetMaskedFraction", &vtkRandomHyperTreeGridSource::GetMaskedFraction)
    .function("SetMaskedFraction", &vtkRandomHyperTreeGridSource::SetMaskedFraction)
    .function("GetMaskedFractionMinValue", &vtkRandomHyperTreeGridSource::GetMaskedFractionMinValue)
    .function("GetMaskedFractionMaxValue", &vtkRandomHyperTreeGridSource::GetMaskedFractionMaxValue)
    .function("GetActualMaskedCellFraction", &vtkRandomHyperTreeGridSource::GetActualMaskedCellFraction);
}
