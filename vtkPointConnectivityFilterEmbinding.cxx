// JavaScript wrapper for vtkPointConnectivityFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkPointConnectivityFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkPointConnectivityFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointConnectivityFilter.h"

template<> void emscripten::internal::raw_destructor<vtkPointConnectivityFilter>(vtkPointConnectivityFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointConnectivityFilter_class) {
  emscripten::class_<vtkPointConnectivityFilter, emscripten::base<vtkDataSetAlgorithm>>("vtkPointConnectivityFilter")
    .smart_ptr<vtkSmartPointer<vtkPointConnectivityFilter>>("vtkSmartPointer<vtkPointConnectivityFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPointConnectivityFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointConnectivityFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointConnectivityFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointConnectivityFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointConnectivityFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointConnectivityFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointConnectivityFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
