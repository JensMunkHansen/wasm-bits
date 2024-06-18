// JavaScript wrapper for vtkDataObjectMeshCache with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkFiltersTemporal.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersTemporal.js/vtkDataObjectMeshCacheEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Temporal/vtkDataObjectMeshCache.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithm.h"
#include "vtkDataObject.h"
#include "vtkDataObjectMeshCache.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectMeshCache>(vtkDataObjectMeshCache * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectMeshCache_class) {
  emscripten::class_<vtkDataObjectMeshCache, emscripten::base<vtkObject>>("vtkDataObjectMeshCache")
    .smart_ptr<vtkSmartPointer<vtkDataObjectMeshCache>>("vtkSmartPointer<vtkDataObjectMeshCache>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataObjectMeshCache>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectMeshCache::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectMeshCache& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectMeshCache::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectMeshCache::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectMeshCache::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectMeshCache& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConsumer", &vtkDataObjectMeshCache::SetConsumer, emscripten::allow_raw_pointers())
    .function("SetOriginalDataObject", &vtkDataObjectMeshCache::SetOriginalDataObject, emscripten::allow_raw_pointers())
    .function("AddOriginalIds", &vtkDataObjectMeshCache::AddOriginalIds)
    .function("RemoveOriginalIds", &vtkDataObjectMeshCache::RemoveOriginalIds)
    .function("ClearOriginalIds", &vtkDataObjectMeshCache::ClearOriginalIds)
    .function("CopyCacheToDataObject", &vtkDataObjectMeshCache::CopyCacheToDataObject, emscripten::allow_raw_pointers())
    .function("UpdateCache", &vtkDataObjectMeshCache::UpdateCache, emscripten::allow_raw_pointers())
    .function("InvalidateCache", &vtkDataObjectMeshCache::InvalidateCache)
    .function("IsSupportedData", &vtkDataObjectMeshCache::IsSupportedData, emscripten::allow_raw_pointers());
}
