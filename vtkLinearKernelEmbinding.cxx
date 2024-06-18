// JavaScript wrapper for vtkLinearKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkLinearKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkLinearKernel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkLinearKernel.h"

template<> void emscripten::internal::raw_destructor<vtkLinearKernel>(vtkLinearKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLinearKernel_class) {
  emscripten::class_<vtkLinearKernel, emscripten::base<vtkGeneralizedKernel>>("vtkLinearKernel")
    .smart_ptr<vtkSmartPointer<vtkLinearKernel>>("vtkSmartPointer<vtkLinearKernel>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLinearKernel>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLinearKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLinearKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLinearKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLinearKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLinearKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
