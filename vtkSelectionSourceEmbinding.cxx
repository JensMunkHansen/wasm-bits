// JavaScript wrapper for vtkSelectionSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkSelectionSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkSelectionSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelectionSource.h"

EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkSelectionSource_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkSelectionSource>(vtkSelectionSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSelectionSource_class) {
  using FieldTypeOptions=vtkSelectionSource::FieldTypeOptions;
  emscripten::class_<vtkSelectionSource, emscripten::base<vtkSelectionAlgorithm>>("vtkSelectionSource")
    .smart_ptr<vtkSmartPointer<vtkSelectionSource>>("vtkSmartPointer<vtkSelectionSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSelectionSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectionSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSelectionSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSelectionSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSelectionSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSelectionSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSelectionSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfNodes", &vtkSelectionSource::SetNumberOfNodes)
    .function("GetNumberOfNodes", &vtkSelectionSource::GetNumberOfNodes)
    .function("RemoveNode", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveNode( arg_0); }))
    .function("RemoveNode", emscripten::select_overload<void(vtkSelectionSource&, const std::string &)>([](vtkSelectionSource& self, const std::string & arg_0) -> void { return self.RemoveNode( arg_0.c_str()); }))
    .function("RemoveAllNodes", &vtkSelectionSource::RemoveAllNodes)
    .function("SetExpression", emscripten::optional_override([](vtkSelectionSource& self, const std::string & arg_0) -> void {  return self.SetExpression( arg_0.c_str());}))
    .function("GetExpression", emscripten::optional_override([](vtkSelectionSource& self) -> std::string {  return self.GetExpression();}))
    .function("SetFieldTypeOption", &vtkSelectionSource::SetFieldTypeOption)
    .function("GetFieldTypeOptionMinValue", &vtkSelectionSource::GetFieldTypeOptionMinValue)
    .function("GetFieldTypeOptionMaxValue", &vtkSelectionSource::GetFieldTypeOptionMaxValue)
    .function("SetFieldTypeOptionToFieldType", &vtkSelectionSource::SetFieldTypeOptionToFieldType)
    .function("SetFieldTypeOptionToElementType", &vtkSelectionSource::SetFieldTypeOptionToElementType)
    .function("GetFieldTypeOption", &vtkSelectionSource::GetFieldTypeOption)
    .function("SetFieldType", &vtkSelectionSource::SetFieldType)
    .function("GetFieldTypeMinValue", &vtkSelectionSource::GetFieldTypeMinValue)
    .function("GetFieldTypeMaxValue", &vtkSelectionSource::GetFieldTypeMaxValue)
    .function("GetFieldType", &vtkSelectionSource::GetFieldType)
    .function("SetElementType", &vtkSelectionSource::SetElementType)
    .function("GetElementTypeMinValue", &vtkSelectionSource::GetElementTypeMinValue)
    .function("GetElementTypeMaxValue", &vtkSelectionSource::GetElementTypeMaxValue)
    .function("GetElementType", &vtkSelectionSource::GetElementType)
    .function("SetProcessID", &vtkSelectionSource::SetProcessID)
    .function("GetProcessIDMinValue", &vtkSelectionSource::GetProcessIDMinValue)
    .function("GetProcessIDMaxValue", &vtkSelectionSource::GetProcessIDMaxValue)
    .function("GetProcessID", &vtkSelectionSource::GetProcessID)
    .function("SetNodeName", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, const std::string &)>([](vtkSelectionSource& self, unsigned int arg_0, const std::string & arg_1) -> void { return self.SetNodeName( arg_0, arg_1.c_str()); }))
    .function("SetNodeName", emscripten::select_overload<void(vtkSelectionSource&, const std::string &)>([](vtkSelectionSource& self, const std::string & arg_0) -> void { return self.SetNodeName( arg_0.c_str()); }))
    .function("GetNodeName", emscripten::select_overload<std::string(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> std::string { return self.GetNodeName( arg_0); }))
    .function("GetNodeName", emscripten::select_overload<std::string(vtkSelectionSource&)>([](vtkSelectionSource& self) -> std::string { return self.GetNodeName(); }))
    .function("AddID", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1, int arg_2) -> void { return self.AddID( arg_0, arg_1, arg_2); }))
    .function("AddID", emscripten::select_overload<void(vtkSelectionSource&, int, int)>([](vtkSelectionSource& self, int arg_0, int arg_1) -> void { return self.AddID( arg_0, arg_1); }))
    .function("AddStringID", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int, const std::string &)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1, const std::string & arg_2) -> void { return self.AddStringID( arg_0, arg_1, arg_2.c_str()); }))
    .function("AddStringID", emscripten::select_overload<void(vtkSelectionSource&, int, const std::string &)>([](vtkSelectionSource& self, int arg_0, const std::string & arg_1) -> void { return self.AddStringID( arg_0, arg_1.c_str()); }))
    .function("AddLocation", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, double, double, double)>([](vtkSelectionSource& self, unsigned int arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.AddLocation( arg_0, arg_1, arg_2, arg_3); }))
    .function("AddLocation", emscripten::select_overload<void(vtkSelectionSource&, double, double, double)>([](vtkSelectionSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.AddLocation( arg_0, arg_1, arg_2); }))
    .function("AddThreshold", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, double, double)>([](vtkSelectionSource& self, unsigned int arg_0, double arg_1, double arg_2) -> void { return self.AddThreshold( arg_0, arg_1, arg_2); }))
    .function("AddThreshold", emscripten::select_overload<void(vtkSelectionSource&, double, double)>([](vtkSelectionSource& self, double arg_0, double arg_1) -> void { return self.AddThreshold( arg_0, arg_1); }))
    .function("SetFrustum", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, std::uintptr_t)>([](vtkSelectionSource& self, unsigned int arg_0, std::uintptr_t arg_1) -> void { return self.SetFrustum( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("SetFrustum", emscripten::select_overload<void(vtkSelectionSource&, std::uintptr_t)>([](vtkSelectionSource& self, std::uintptr_t arg_0) -> void { return self.SetFrustum(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("AddBlock", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.AddBlock( arg_0, arg_1); }))
    .function("AddBlock", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.AddBlock( arg_0); }))
    .function("AddBlockSelector", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, const std::string &)>([](vtkSelectionSource& self, unsigned int arg_0, const std::string & arg_1) -> void { return self.AddBlockSelector( arg_0, arg_1.c_str()); }))
    .function("AddBlockSelector", emscripten::select_overload<void(vtkSelectionSource&, const std::string &)>([](vtkSelectionSource& self, const std::string & arg_0) -> void { return self.AddBlockSelector( arg_0.c_str()); }))
    .function("RemoveAllBlockSelectors", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveAllBlockSelectors( arg_0); }))
    .function("RemoveAllBlockSelectors", emscripten::select_overload<void(vtkSelectionSource&)>([](vtkSelectionSource& self) -> void { return self.RemoveAllBlockSelectors(); }))
    .function("RemoveAllIDs", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveAllIDs( arg_0); }))
    .function("RemoveAllIDs", emscripten::select_overload<void(vtkSelectionSource&)>([](vtkSelectionSource& self) -> void { return self.RemoveAllIDs(); }))
    .function("RemoveAllStringIDs", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveAllStringIDs( arg_0); }))
    .function("RemoveAllStringIDs", emscripten::select_overload<void(vtkSelectionSource&)>([](vtkSelectionSource& self) -> void { return self.RemoveAllStringIDs(); }))
    .function("RemoveAllThresholds", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveAllThresholds( arg_0); }))
    .function("RemoveAllThresholds", emscripten::select_overload<void(vtkSelectionSource&)>([](vtkSelectionSource& self) -> void { return self.RemoveAllThresholds(); }))
    .function("RemoveAllLocations", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveAllLocations( arg_0); }))
    .function("RemoveAllLocations", emscripten::select_overload<void(vtkSelectionSource&)>([](vtkSelectionSource& self) -> void { return self.RemoveAllLocations(); }))
    .function("RemoveAllBlocks", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveAllBlocks( arg_0); }))
    .function("RemoveAllBlocks", emscripten::select_overload<void(vtkSelectionSource&)>([](vtkSelectionSource& self) -> void { return self.RemoveAllBlocks(); }))
    .function("SetContentType", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetContentType( arg_0, arg_1); }))
    .function("SetContentType", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetContentType( arg_0); }))
    .function("GetContentTypeMinValue", &vtkSelectionSource::GetContentTypeMinValue)
    .function("GetContentTypeMaxValue", &vtkSelectionSource::GetContentTypeMaxValue)
    .function("GetContentType", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetContentType( arg_0); }))
    .function("GetContentType", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetContentType(); }))
    .function("SetContainingCells", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetContainingCells( arg_0, arg_1); }))
    .function("SetContainingCells", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetContainingCells( arg_0); }))
    .function("GetContainingCells", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetContainingCells( arg_0); }))
    .function("GetContainingCells", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetContainingCells(); }))
    .function("SetNumberOfLayers", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetNumberOfLayers( arg_0, arg_1); }))
    .function("SetNumberOfLayers", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetNumberOfLayers( arg_0); }))
    .function("GetNumberOfLayersMinValue", &vtkSelectionSource::GetNumberOfLayersMinValue)
    .function("GetNumberOfLayersMaxValue", &vtkSelectionSource::GetNumberOfLayersMaxValue)
    .function("GetNumberOfLayers", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetNumberOfLayers( arg_0); }))
    .function("GetNumberOfLayers", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetNumberOfLayers(); }))
    .function("SetRemoveSeed", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, bool)>([](vtkSelectionSource& self, unsigned int arg_0, bool arg_1) -> void { return self.SetRemoveSeed( arg_0, arg_1); }))
    .function("SetRemoveSeed", emscripten::select_overload<void(vtkSelectionSource&, bool)>([](vtkSelectionSource& self, bool arg_0) -> void { return self.SetRemoveSeed( arg_0); }))
    .function("GetRemoveSeed", emscripten::select_overload<bool(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> bool { return self.GetRemoveSeed( arg_0); }))
    .function("GetRemoveSeed", emscripten::select_overload<bool(vtkSelectionSource&)>([](vtkSelectionSource& self) -> bool { return self.GetRemoveSeed(); }))
    .function("SetRemoveIntermediateLayers", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, bool)>([](vtkSelectionSource& self, unsigned int arg_0, bool arg_1) -> void { return self.SetRemoveIntermediateLayers( arg_0, arg_1); }))
    .function("SetRemoveIntermediateLayers", emscripten::select_overload<void(vtkSelectionSource&, bool)>([](vtkSelectionSource& self, bool arg_0) -> void { return self.SetRemoveIntermediateLayers( arg_0); }))
    .function("GetRemoveIntermediateLayers", emscripten::select_overload<bool(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> bool { return self.GetRemoveIntermediateLayers( arg_0); }))
    .function("GetRemoveIntermediateLayers", emscripten::select_overload<bool(vtkSelectionSource&)>([](vtkSelectionSource& self) -> bool { return self.GetRemoveIntermediateLayers(); }))
    .function("SetInverse", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetInverse( arg_0, arg_1); }))
    .function("SetInverse", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetInverse( arg_0); }))
    .function("GetInverse", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetInverse( arg_0); }))
    .function("GetInverse", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetInverse(); }))
    .function("SetArrayName", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, const std::string &)>([](vtkSelectionSource& self, unsigned int arg_0, const std::string & arg_1) -> void { return self.SetArrayName( arg_0, arg_1.c_str()); }))
    .function("SetArrayName", emscripten::select_overload<void(vtkSelectionSource&, const std::string &)>([](vtkSelectionSource& self, const std::string & arg_0) -> void { return self.SetArrayName( arg_0.c_str()); }))
    .function("GetArrayName", emscripten::select_overload<std::string(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> std::string { return self.GetArrayName( arg_0); }))
    .function("GetArrayName", emscripten::select_overload<std::string(vtkSelectionSource&)>([](vtkSelectionSource& self) -> std::string { return self.GetArrayName(); }))
    .function("SetArrayComponent", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetArrayComponent( arg_0, arg_1); }))
    .function("SetArrayComponent", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetArrayComponent( arg_0); }))
    .function("GetArrayComponent", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetArrayComponent( arg_0); }))
    .function("GetArrayComponent", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetArrayComponent(); }))
    .function("SetCompositeIndex", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetCompositeIndex( arg_0, arg_1); }))
    .function("SetCompositeIndex", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetCompositeIndex( arg_0); }))
    .function("GetCompositeIndex", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetCompositeIndex( arg_0); }))
    .function("GetCompositeIndex", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetCompositeIndex(); }))
    .function("SetHierarchicalLevel", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetHierarchicalLevel( arg_0, arg_1); }))
    .function("SetHierarchicalLevel", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetHierarchicalLevel( arg_0); }))
    .function("GetHierarchicalLevel", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetHierarchicalLevel( arg_0); }))
    .function("GetHierarchicalLevel", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetHierarchicalLevel(); }))
    .function("SetHierarchicalIndex", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, int)>([](vtkSelectionSource& self, unsigned int arg_0, int arg_1) -> void { return self.SetHierarchicalIndex( arg_0, arg_1); }))
    .function("SetHierarchicalIndex", emscripten::select_overload<void(vtkSelectionSource&, int)>([](vtkSelectionSource& self, int arg_0) -> void { return self.SetHierarchicalIndex( arg_0); }))
    .function("GetHierarchicalIndex", emscripten::select_overload<int(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> int { return self.GetHierarchicalIndex( arg_0); }))
    .function("GetHierarchicalIndex", emscripten::select_overload<int(vtkSelectionSource&)>([](vtkSelectionSource& self) -> int { return self.GetHierarchicalIndex(); }))
    .function("SetAssemblyName", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, const std::string &)>([](vtkSelectionSource& self, unsigned int arg_0, const std::string & arg_1) -> void { return self.SetAssemblyName( arg_0, arg_1.c_str()); }))
    .function("SetAssemblyName", emscripten::select_overload<void(vtkSelectionSource&, const std::string &)>([](vtkSelectionSource& self, const std::string & arg_0) -> void { return self.SetAssemblyName( arg_0.c_str()); }))
    .function("GetAssemblyName", emscripten::select_overload<std::string(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> std::string { return self.GetAssemblyName( arg_0); }))
    .function("GetAssemblyName", emscripten::select_overload<std::string(vtkSelectionSource&)>([](vtkSelectionSource& self) -> std::string { return self.GetAssemblyName(); }))
    .function("AddSelector", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, const std::string &)>([](vtkSelectionSource& self, unsigned int arg_0, const std::string & arg_1) -> void { return self.AddSelector( arg_0, arg_1.c_str()); }))
    .function("AddSelector", emscripten::select_overload<void(vtkSelectionSource&, const std::string &)>([](vtkSelectionSource& self, const std::string & arg_0) -> void { return self.AddSelector( arg_0.c_str()); }))
    .function("RemoveAllSelectors", emscripten::select_overload<void(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> void { return self.RemoveAllSelectors( arg_0); }))
    .function("RemoveAllSelectors", emscripten::select_overload<void(vtkSelectionSource&)>([](vtkSelectionSource& self) -> void { return self.RemoveAllSelectors(); }))
    .function("SetQueryString", emscripten::select_overload<void(vtkSelectionSource&, unsigned int, const std::string &)>([](vtkSelectionSource& self, unsigned int arg_0, const std::string & arg_1) -> void { return self.SetQueryString( arg_0, arg_1.c_str()); }))
    .function("SetQueryString", emscripten::select_overload<void(vtkSelectionSource&, const std::string &)>([](vtkSelectionSource& self, const std::string & arg_0) -> void { return self.SetQueryString( arg_0.c_str()); }))
    .function("GetQueryString", emscripten::select_overload<std::string(vtkSelectionSource&, unsigned int)>([](vtkSelectionSource& self, unsigned int arg_0) -> std::string { return self.GetQueryString( arg_0); }))
    .function("GetQueryString", emscripten::select_overload<std::string(vtkSelectionSource&)>([](vtkSelectionSource& self) -> std::string { return self.GetQueryString(); }));
}
EMSCRIPTEN_BINDINGS(vtkFiltersSources_vtkSelectionSource_0_2_constants) {
    typedef vtkSelectionSource::FieldTypeOptions cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkSelectionSource_FieldTypeOptions_FIELD_TYPE", vtkSelectionSource::FIELD_TYPE },
      { "vtkSelectionSource_FieldTypeOptions_ELEMENT_TYPE", vtkSelectionSource::ELEMENT_TYPE },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
