// JavaScript wrapper for vtkAMRDataSetCache with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkIOAMR.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOAMR.js/vtkAMRDataSetCacheEmbinding.cxx \
 /home/jmh/github/vtk/IO/AMR/vtkAMRDataSetCache.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkUniformGrid.h"
#include "vtkDataArray.h"
#include "vtkAMRDataSetCache.h"

template<> void emscripten::internal::raw_destructor<vtkAMRDataSetCache>(vtkAMRDataSetCache * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRDataSetCache_class) {
  emscripten::class_<vtkAMRDataSetCache, emscripten::base<vtkObject>>("vtkAMRDataSetCache")
    .smart_ptr<vtkSmartPointer<vtkAMRDataSetCache>>("vtkSmartPointer<vtkAMRDataSetCache>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMRDataSetCache>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRDataSetCache::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRDataSetCache& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRDataSetCache::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRDataSetCache::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRDataSetCache::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRDataSetCache& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InsertAMRBlock", &vtkAMRDataSetCache::InsertAMRBlock, emscripten::allow_raw_pointers())
    .function("InsertAMRBlockPointData", &vtkAMRDataSetCache::InsertAMRBlockPointData, emscripten::allow_raw_pointers())
    .function("InsertAMRBlockCellData", &vtkAMRDataSetCache::InsertAMRBlockCellData, emscripten::allow_raw_pointers())
    .function("GetAMRBlockCellData", emscripten::optional_override([](vtkAMRDataSetCache& self, int arg_0, const std::string & arg_1) -> vtkDataArray* {  return self.GetAMRBlockCellData( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("GetAMRBlockPointData", emscripten::optional_override([](vtkAMRDataSetCache& self, int arg_0, const std::string & arg_1) -> vtkDataArray* {  return self.GetAMRBlockPointData( arg_0, arg_1.c_str());}), emscripten::allow_raw_pointers())
    .function("GetAMRBlock", &vtkAMRDataSetCache::GetAMRBlock, emscripten::allow_raw_pointers())
    .function("HasAMRBlockCellData", emscripten::optional_override([](vtkAMRDataSetCache& self, int arg_0, const std::string & arg_1) -> bool {  return self.HasAMRBlockCellData( arg_0, arg_1.c_str());}))
    .function("HasAMRBlockPointData", emscripten::optional_override([](vtkAMRDataSetCache& self, int arg_0, const std::string & arg_1) -> bool {  return self.HasAMRBlockPointData( arg_0, arg_1.c_str());}))
    .function("HasAMRBlock", &vtkAMRDataSetCache::HasAMRBlock);
}
