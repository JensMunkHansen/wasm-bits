// JavaScript wrapper for vtkTriangleFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkTriangleFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkTriangleFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTriangleFilter.h"

template<> void emscripten::internal::raw_destructor<vtkTriangleFilter>(vtkTriangleFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTriangleFilter_class) {
  emscripten::class_<vtkTriangleFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkTriangleFilter")
    .smart_ptr<vtkSmartPointer<vtkTriangleFilter>>("vtkSmartPointer<vtkTriangleFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTriangleFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangleFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTriangleFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTriangleFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTriangleFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangleFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTriangleFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPreservePolys", &vtkTriangleFilter::SetPreservePolys)
    .function("GetPreservePolys", &vtkTriangleFilter::GetPreservePolys)
    .function("PreservePolysOn", &vtkTriangleFilter::PreservePolysOn)
    .function("PreservePolysOff", &vtkTriangleFilter::PreservePolysOff)
    .function("PassVertsOn", &vtkTriangleFilter::PassVertsOn)
    .function("PassVertsOff", &vtkTriangleFilter::PassVertsOff)
    .function("SetPassVerts", &vtkTriangleFilter::SetPassVerts)
    .function("GetPassVerts", &vtkTriangleFilter::GetPassVerts)
    .function("PassLinesOn", &vtkTriangleFilter::PassLinesOn)
    .function("PassLinesOff", &vtkTriangleFilter::PassLinesOff)
    .function("SetPassLines", &vtkTriangleFilter::SetPassLines)
    .function("GetPassLines", &vtkTriangleFilter::GetPassLines)
    .function("SetTolerance", &vtkTriangleFilter::SetTolerance)
    .function("GetTolerance", &vtkTriangleFilter::GetTolerance);
}
