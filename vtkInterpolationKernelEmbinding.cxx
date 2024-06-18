// JavaScript wrapper for vtkInterpolationKernel with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkInterpolationKernelEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkInterpolationKernel.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkDataSet.h"
#include "vtkPointData.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkInterpolationKernel.h"

template<> void emscripten::internal::raw_destructor<vtkInterpolationKernel>(vtkInterpolationKernel * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkInterpolationKernel_class) {
  emscripten::class_<vtkInterpolationKernel, emscripten::base<vtkObject>>("vtkInterpolationKernel")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolationKernel::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkInterpolationKernel& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkInterpolationKernel::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkInterpolationKernel::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkInterpolationKernel::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkInterpolationKernel& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkInterpolationKernel::Initialize, emscripten::allow_raw_pointers())
    .function("SetRequiresInitialization", &vtkInterpolationKernel::SetRequiresInitialization)
    .function("GetRequiresInitialization", &vtkInterpolationKernel::GetRequiresInitialization)
    .function("RequiresInitializationOn", &vtkInterpolationKernel::RequiresInitializationOn)
    .function("RequiresInitializationOff", &vtkInterpolationKernel::RequiresInitializationOff);
}
