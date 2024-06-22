// JavaScript wrapper for vtkTemporalDataSetCache with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkFiltersHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHybrid.js/vtkTemporalDataSetCacheEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Hybrid/vtkTemporalDataSetCache.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTemporalDataSetCache.h"

template<> void emscripten::internal::raw_destructor<vtkTemporalDataSetCache>(vtkTemporalDataSetCache * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTemporalDataSetCache_class) {
  emscripten::class_<vtkTemporalDataSetCache, emscripten::base<vtkAlgorithm>>("vtkTemporalDataSetCache")
    .smart_ptr<vtkSmartPointer<vtkTemporalDataSetCache>>("vtkSmartPointer<vtkTemporalDataSetCache>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTemporalDataSetCache>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalDataSetCache::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTemporalDataSetCache& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTemporalDataSetCache::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTemporalDataSetCache::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTemporalDataSetCache::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTemporalDataSetCache& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCacheSize", &vtkTemporalDataSetCache::SetCacheSize)
    .function("GetCacheSize", &vtkTemporalDataSetCache::GetCacheSize)
    .function("SetCacheInMemkind", &vtkTemporalDataSetCache::SetCacheInMemkind)
    .function("GetCacheInMemkind", &vtkTemporalDataSetCache::GetCacheInMemkind)
    .function("CacheInMemkindOn", &vtkTemporalDataSetCache::CacheInMemkindOn)
    .function("CacheInMemkindOff", &vtkTemporalDataSetCache::CacheInMemkindOff)
    .function("SetIsASource", &vtkTemporalDataSetCache::SetIsASource)
    .function("GetIsASource", &vtkTemporalDataSetCache::GetIsASource)
    .function("IsASourceOn", &vtkTemporalDataSetCache::IsASourceOn)
    .function("IsASourceOff", &vtkTemporalDataSetCache::IsASourceOff);
}
