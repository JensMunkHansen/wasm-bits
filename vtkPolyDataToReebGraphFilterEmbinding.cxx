// JavaScript wrapper for vtkPolyDataToReebGraphFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkPolyDataToReebGraphFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkPolyDataToReebGraphFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkReebGraph.h"
#include "vtkPolyDataToReebGraphFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataToReebGraphFilter>(vtkPolyDataToReebGraphFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataToReebGraphFilter_class) {
  emscripten::class_<vtkPolyDataToReebGraphFilter, emscripten::base<vtkDirectedGraphAlgorithm>>("vtkPolyDataToReebGraphFilter")
    .smart_ptr<vtkSmartPointer<vtkPolyDataToReebGraphFilter>>("vtkSmartPointer<vtkPolyDataToReebGraphFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataToReebGraphFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataToReebGraphFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataToReebGraphFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataToReebGraphFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataToReebGraphFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataToReebGraphFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataToReebGraphFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFieldId", &vtkPolyDataToReebGraphFilter::SetFieldId)
    .function("GetFieldId", &vtkPolyDataToReebGraphFilter::GetFieldId)
    .function("GetOutput", &vtkPolyDataToReebGraphFilter::GetOutput, emscripten::allow_raw_pointers());
}
