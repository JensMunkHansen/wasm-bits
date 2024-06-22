// JavaScript wrapper for vtkGenericVertexAttributeMapping with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkGenericVertexAttributeMappingEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkGenericVertexAttributeMapping.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenericVertexAttributeMapping.h"

template<> void emscripten::internal::raw_destructor<vtkGenericVertexAttributeMapping>(vtkGenericVertexAttributeMapping * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenericVertexAttributeMapping_class) {
  emscripten::class_<vtkGenericVertexAttributeMapping, emscripten::base<vtkObject>>("vtkGenericVertexAttributeMapping")
    .smart_ptr<vtkSmartPointer<vtkGenericVertexAttributeMapping>>("vtkSmartPointer<vtkGenericVertexAttributeMapping>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenericVertexAttributeMapping>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericVertexAttributeMapping::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenericVertexAttributeMapping& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenericVertexAttributeMapping::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenericVertexAttributeMapping::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenericVertexAttributeMapping::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenericVertexAttributeMapping& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddMapping", emscripten::select_overload<void(vtkGenericVertexAttributeMapping&, const std::string &, const std::string &, int, int)>([](vtkGenericVertexAttributeMapping& self, const std::string & arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void { return self.AddMapping( arg_0.c_str(), arg_1.c_str(), arg_2, arg_3); }))
    .function("AddMapping", emscripten::select_overload<void(vtkGenericVertexAttributeMapping&, int, const std::string &, int, int)>([](vtkGenericVertexAttributeMapping& self, int arg_0, const std::string & arg_1, int arg_2, int arg_3) -> void { return self.AddMapping( arg_0, arg_1.c_str(), arg_2, arg_3); }))
    .function("RemoveMapping", emscripten::optional_override([](vtkGenericVertexAttributeMapping& self, const std::string & arg_0) -> bool {  return self.RemoveMapping( arg_0.c_str());}))
    .function("RemoveAllMappings", &vtkGenericVertexAttributeMapping::RemoveAllMappings)
    .function("GetNumberOfMappings", &vtkGenericVertexAttributeMapping::GetNumberOfMappings)
    .function("GetAttributeName", emscripten::optional_override([](vtkGenericVertexAttributeMapping& self, unsigned int arg_0) -> std::string {  return self.GetAttributeName( arg_0);}))
    .function("GetArrayName", emscripten::optional_override([](vtkGenericVertexAttributeMapping& self, unsigned int arg_0) -> std::string {  return self.GetArrayName( arg_0);}))
    .function("GetFieldAssociation", &vtkGenericVertexAttributeMapping::GetFieldAssociation)
    .function("GetComponent", &vtkGenericVertexAttributeMapping::GetComponent)
    .function("GetTextureUnit", &vtkGenericVertexAttributeMapping::GetTextureUnit);
}
