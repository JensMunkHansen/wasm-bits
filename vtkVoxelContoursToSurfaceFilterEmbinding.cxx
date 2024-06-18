// JavaScript wrapper for vtkVoxelContoursToSurfaceFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkVoxelContoursToSurfaceFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkVoxelContoursToSurfaceFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVoxelContoursToSurfaceFilter.h"

template<> void emscripten::internal::raw_destructor<vtkVoxelContoursToSurfaceFilter>(vtkVoxelContoursToSurfaceFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVoxelContoursToSurfaceFilter_class) {
  emscripten::class_<vtkVoxelContoursToSurfaceFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkVoxelContoursToSurfaceFilter")
    .smart_ptr<vtkSmartPointer<vtkVoxelContoursToSurfaceFilter>>("vtkSmartPointer<vtkVoxelContoursToSurfaceFilter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkVoxelContoursToSurfaceFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxelContoursToSurfaceFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVoxelContoursToSurfaceFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVoxelContoursToSurfaceFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVoxelContoursToSurfaceFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVoxelContoursToSurfaceFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVoxelContoursToSurfaceFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMemoryLimitInBytes", &vtkVoxelContoursToSurfaceFilter::SetMemoryLimitInBytes)
    .function("GetMemoryLimitInBytes", &vtkVoxelContoursToSurfaceFilter::GetMemoryLimitInBytes)
    .function("SetSpacing", emscripten::select_overload<void(vtkVoxelContoursToSurfaceFilter&, double, double, double)>([](vtkVoxelContoursToSurfaceFilter& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSpacing( arg_0, arg_1, arg_2); }));
}
