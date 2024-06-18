// JavaScript wrapper for vtkExodusIICache with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkIOExodus.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkExodusIICacheEmbinding.cxx \
 /home/jmh/github/vtk/IO/Exodus/vtkExodusIICache.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkDataArray.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExodusIICache.h"


EMSCRIPTEN_BINDINGS(vtkExodusIICacheKey_class) {
  emscripten::class_<vtkExodusIICacheKey>("vtkExodusIICacheKey")
    .function("match", &vtkExodusIICacheKey::match);
}

EMSCRIPTEN_BINDINGS(vtkExodusIICacheEntry_class) {
  emscripten::class_<vtkExodusIICacheEntry>("vtkExodusIICacheEntry")
    .smart_ptr<std::shared_ptr<vtkExodusIICacheEntry>>("std::shared_ptr<vtkExodusIICacheEntry>")
    .constructor(&std::make_shared<vtkExodusIICacheEntry>)
    .function("GetValue", &vtkExodusIICacheEntry::GetValue, emscripten::allow_raw_pointers());
}
template<> void emscripten::internal::raw_destructor<vtkExodusIICache>(vtkExodusIICache * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExodusIICache_class) {
  emscripten::class_<vtkExodusIICache, emscripten::base<vtkObject>>("vtkExodusIICache")
    .smart_ptr<vtkSmartPointer<vtkExodusIICache>>("vtkSmartPointer<vtkExodusIICache>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExodusIICache>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIICache::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExodusIICache& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExodusIICache::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExodusIICache::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExodusIICache::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExodusIICache& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clear", &vtkExodusIICache::Clear)
    .function("SetCacheCapacity", &vtkExodusIICache::SetCacheCapacity)
    .function("GetSpaceLeft", &vtkExodusIICache::GetSpaceLeft)
    .function("ReduceToSize", &vtkExodusIICache::ReduceToSize)
    .function("Invalidate", emscripten::select_overload<int(vtkExodusIICache&, const vtkExodusIICacheKey&)>([](vtkExodusIICache& self, const vtkExodusIICacheKey& arg_0) -> int { return self.Invalidate( arg_0); }))
    .function("Invalidate", emscripten::select_overload<int(vtkExodusIICache&, const vtkExodusIICacheKey&, const vtkExodusIICacheKey&)>([](vtkExodusIICache& self, const vtkExodusIICacheKey& arg_0, const vtkExodusIICacheKey& arg_1) -> int { return self.Invalidate( arg_0, arg_1); }));
}
