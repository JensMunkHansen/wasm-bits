// JavaScript wrapper for vtkCompositeCellGridMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCompositeCellGridMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCompositeCellGridMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkDataObject.h"
#include "vtkStringToken.h"
#include "vtkCompositeDataDisplayAttributes.h"
#include "vtkCompositeCellGridMapper.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeCellGridMapper>(vtkCompositeCellGridMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeCellGridMapper_class) {
  emscripten::class_<vtkCompositeCellGridMapper, emscripten::base<vtkMapper>>("vtkCompositeCellGridMapper")
    .smart_ptr<vtkSmartPointer<vtkCompositeCellGridMapper>>("vtkSmartPointer<vtkCompositeCellGridMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeCellGridMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCellGridMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeCellGridMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeCellGridMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeCellGridMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCellGridMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeCellGridMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkCompositeCellGridMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkCompositeCellGridMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("HasOpaqueGeometry", &vtkCompositeCellGridMapper::HasOpaqueGeometry)
    .function("HasTranslucentPolygonalGeometry", &vtkCompositeCellGridMapper::HasTranslucentPolygonalGeometry)
    .function("SetProcessIdAttributeName", &vtkCompositeCellGridMapper::SetProcessIdAttributeName)
    .function("GetProcessIdAttributeName", &vtkCompositeCellGridMapper::GetProcessIdAttributeName)
    .function("SetCompositeIdAttributeName", &vtkCompositeCellGridMapper::SetCompositeIdAttributeName)
    .function("GetCompositeIdAttributeName", &vtkCompositeCellGridMapper::GetCompositeIdAttributeName)
    .function("SetPointIdAttributeName", &vtkCompositeCellGridMapper::SetPointIdAttributeName)
    .function("GetPointIdAttributeName", &vtkCompositeCellGridMapper::GetPointIdAttributeName)
    .function("SetCellIdAttributeName", &vtkCompositeCellGridMapper::SetCellIdAttributeName)
    .function("GetCellIdAttributeName", &vtkCompositeCellGridMapper::GetCellIdAttributeName)
    .function("SetProcessIdArrayName", emscripten::optional_override([](vtkCompositeCellGridMapper& self, const std::string & arg_0) -> void {  return self.SetProcessIdArrayName( arg_0.c_str());}))
    .function("SetCompositeIdArrayName", emscripten::optional_override([](vtkCompositeCellGridMapper& self, const std::string & arg_0) -> void {  return self.SetCompositeIdArrayName( arg_0.c_str());}))
    .function("SetPointIdArrayName", emscripten::optional_override([](vtkCompositeCellGridMapper& self, const std::string & arg_0) -> void {  return self.SetPointIdArrayName( arg_0.c_str());}))
    .function("SetCellIdArrayName", emscripten::optional_override([](vtkCompositeCellGridMapper& self, const std::string & arg_0) -> void {  return self.SetCellIdArrayName( arg_0.c_str());}))
    .function("GetCompositeDataDisplayAttributes", &vtkCompositeCellGridMapper::GetCompositeDataDisplayAttributes, emscripten::allow_raw_pointers())
    .function("SetCompositeDataDisplayAttributes", &vtkCompositeCellGridMapper::SetCompositeDataDisplayAttributes, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkCompositeCellGridMapper::GetMTime);
}
