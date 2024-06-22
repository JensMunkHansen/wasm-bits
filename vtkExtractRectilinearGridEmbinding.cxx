// JavaScript wrapper for vtkExtractRectilinearGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkExtractRectilinearGridEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkExtractRectilinearGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractRectilinearGrid.h"

template<> void emscripten::internal::raw_destructor<vtkExtractRectilinearGrid>(vtkExtractRectilinearGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractRectilinearGrid_class) {
  emscripten::class_<vtkExtractRectilinearGrid, emscripten::base<vtkRectilinearGridAlgorithm>>("vtkExtractRectilinearGrid")
    .smart_ptr<vtkSmartPointer<vtkExtractRectilinearGrid>>("vtkSmartPointer<vtkExtractRectilinearGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtractRectilinearGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractRectilinearGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractRectilinearGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractRectilinearGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractRectilinearGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractRectilinearGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractRectilinearGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVOI", emscripten::select_overload<void(vtkExtractRectilinearGrid&, int, int, int, int, int, int)>([](vtkExtractRectilinearGrid& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetVOI( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetSampleRate", emscripten::select_overload<void(vtkExtractRectilinearGrid&, int, int, int)>([](vtkExtractRectilinearGrid& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetSampleRate( arg_0, arg_1, arg_2); }))
    .function("SetIncludeBoundary", &vtkExtractRectilinearGrid::SetIncludeBoundary)
    .function("GetIncludeBoundary", &vtkExtractRectilinearGrid::GetIncludeBoundary)
    .function("IncludeBoundaryOn", &vtkExtractRectilinearGrid::IncludeBoundaryOn)
    .function("IncludeBoundaryOff", &vtkExtractRectilinearGrid::IncludeBoundaryOff);
}
