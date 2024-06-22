// JavaScript wrapper for vtkTriangleMeshPointNormals with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkTriangleMeshPointNormalsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkTriangleMeshPointNormals.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTriangleMeshPointNormals.h"

template<> void emscripten::internal::raw_destructor<vtkTriangleMeshPointNormals>(vtkTriangleMeshPointNormals * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTriangleMeshPointNormals_class) {
  emscripten::class_<vtkTriangleMeshPointNormals, emscripten::base<vtkPolyDataAlgorithm>>("vtkTriangleMeshPointNormals")
    .smart_ptr<vtkSmartPointer<vtkTriangleMeshPointNormals>>("vtkSmartPointer<vtkTriangleMeshPointNormals>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTriangleMeshPointNormals>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangleMeshPointNormals::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTriangleMeshPointNormals& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTriangleMeshPointNormals::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTriangleMeshPointNormals::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTriangleMeshPointNormals::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTriangleMeshPointNormals& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
