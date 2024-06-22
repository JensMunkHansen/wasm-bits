// JavaScript wrapper for vtkExtractGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractGrid.h"

template<> void emscripten::internal::raw_destructor<vtkExtractGrid>(vtkExtractGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractGrid_class) {
  emscripten::class_<vtkExtractGrid, emscripten::base<vtkStructuredGridAlgorithm>>("vtkExtractGrid")
    .smart_ptr<vtkSmartPointer<vtkExtractGrid>>("vtkSmartPointer<vtkExtractGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVOI", emscripten::select_overload<void(vtkExtractGrid&, int, int, int, int, int, int)>([](vtkExtractGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetVOI( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetSampleRate", emscripten::select_overload<void(vtkExtractGrid&, int, int, int)>([](vtkExtractGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleRate( arg_0, arg_1, arg_2); }))
    .function("SetIncludeBoundary", &vtkExtractGrid::SetIncludeBoundary)
    .function("GetIncludeBoundary", &vtkExtractGrid::GetIncludeBoundary)
    .function("IncludeBoundaryOn", &vtkExtractGrid::IncludeBoundaryOn)
    .function("IncludeBoundaryOff", &vtkExtractGrid::IncludeBoundaryOff);
}
