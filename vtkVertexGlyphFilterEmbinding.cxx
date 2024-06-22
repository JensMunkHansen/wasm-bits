// JavaScript wrapper for vtkVertexGlyphFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkVertexGlyphFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkVertexGlyphFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVertexGlyphFilter.h"

template<> void emscripten::internal::raw_destructor<vtkVertexGlyphFilter>(vtkVertexGlyphFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVertexGlyphFilter_class) {
  emscripten::class_<vtkVertexGlyphFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkVertexGlyphFilter")
    .smart_ptr<vtkSmartPointer<vtkVertexGlyphFilter>>("vtkSmartPointer<vtkVertexGlyphFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVertexGlyphFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertexGlyphFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVertexGlyphFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVertexGlyphFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVertexGlyphFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVertexGlyphFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVertexGlyphFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
