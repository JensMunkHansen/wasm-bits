// JavaScript wrapper for vtkForceStaticMesh with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkFiltersTemporal.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkForceStaticMeshEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Temporal/vtkForceStaticMesh.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkForceStaticMesh.h"

template<> void emscripten::internal::raw_destructor<vtkForceStaticMesh>(vtkForceStaticMesh * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkForceStaticMesh_class) {
  emscripten::class_<vtkForceStaticMesh, emscripten::base<vtkPassThrough>>("vtkForceStaticMesh")
    .smart_ptr<vtkSmartPointer<vtkForceStaticMesh>>("vtkSmartPointer<vtkForceStaticMesh>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkForceStaticMesh>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForceStaticMesh::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkForceStaticMesh& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkForceStaticMesh::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkForceStaticMesh::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForceStaticMesh::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkForceStaticMesh& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetForceCacheComputation", &vtkForceStaticMesh::SetForceCacheComputation)
    .function("GetForceCacheComputation", &vtkForceStaticMesh::GetForceCacheComputation)
    .function("ForceCacheComputationOn", &vtkForceStaticMesh::ForceCacheComputationOn)
    .function("ForceCacheComputationOff", &vtkForceStaticMesh::ForceCacheComputationOff);
}
