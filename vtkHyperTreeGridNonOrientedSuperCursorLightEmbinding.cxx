// JavaScript wrapper for vtkHyperTreeGridNonOrientedSuperCursorLight with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkHyperTreeGridNonOrientedSuperCursorLightEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkHyperTreeGridNonOrientedSuperCursorLight.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTree.h"
#include "vtkHyperTreeGridNonOrientedSuperCursorLight.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridNonOrientedSuperCursorLight>(vtkHyperTreeGridNonOrientedSuperCursorLight * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridNonOrientedSuperCursorLight_class) {
  emscripten::class_<vtkHyperTreeGridNonOrientedSuperCursorLight, emscripten::base<vtkObject>>("vtkHyperTreeGridNonOrientedSuperCursorLight")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedSuperCursorLight::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridNonOrientedSuperCursorLight::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridNonOrientedSuperCursorLight::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridNonOrientedSuperCursorLight::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clone", &vtkHyperTreeGridNonOrientedSuperCursorLight::Clone, emscripten::allow_raw_pointers())
    .function("GetGrid", &vtkHyperTreeGridNonOrientedSuperCursorLight::GetGrid, emscripten::allow_raw_pointers())
    .function("HasTree", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursorLight&)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> bool { return self.HasTree(); }))
    .function("HasTree", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0) -> bool { return self.HasTree( arg_0); }))
    .function("GetTree", emscripten::select_overload<vtkHyperTree*(vtkHyperTreeGridNonOrientedSuperCursorLight&)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> vtkHyperTree* { return self.GetTree(); }), emscripten::allow_raw_pointers())
    .function("GetTree", emscripten::select_overload<vtkHyperTree*(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0) -> vtkHyperTree* { return self.GetTree( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetVertexId", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursorLight&)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> int { return self.GetVertexId(); }))
    .function("GetVertexId", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0) -> int { return self.GetVertexId( arg_0); }))
    .function("GetGlobalNodeIndex", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursorLight&)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> int { return self.GetGlobalNodeIndex(); }))
    .function("GetGlobalNodeIndex", emscripten::select_overload<int(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0) -> int { return self.GetGlobalNodeIndex( arg_0); }))
    .function("GetDimension", &vtkHyperTreeGridNonOrientedSuperCursorLight::GetDimension)
    .function("GetNumberOfChildren", &vtkHyperTreeGridNonOrientedSuperCursorLight::GetNumberOfChildren)
    .function("SetGlobalIndexStart", &vtkHyperTreeGridNonOrientedSuperCursorLight::SetGlobalIndexStart)
    .function("SetGlobalIndexFromLocal", &vtkHyperTreeGridNonOrientedSuperCursorLight::SetGlobalIndexFromLocal)
    .function("GetOrigin", emscripten::optional_override([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetOrigin()) / sizeof(double);}))
    .function("GetSize", emscripten::optional_override([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetSize()) / sizeof(double);}))
    .function("SetMask", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedSuperCursorLight&, bool)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, bool arg_0) -> void { return self.SetMask( arg_0); }))
    .function("SetMask", emscripten::select_overload<void(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int, bool)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0, bool arg_1) -> void { return self.SetMask( arg_0, arg_1); }))
    .function("IsMasked", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursorLight&)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> bool { return self.IsMasked(); }))
    .function("IsMasked", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0) -> bool { return self.IsMasked( arg_0); }))
    .function("IsLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursorLight&)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> bool { return self.IsLeaf(); }))
    .function("IsLeaf", emscripten::select_overload<bool(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0) -> bool { return self.IsLeaf( arg_0); }))
    .function("SubdivideLeaf", &vtkHyperTreeGridNonOrientedSuperCursorLight::SubdivideLeaf)
    .function("IsRoot", &vtkHyperTreeGridNonOrientedSuperCursorLight::IsRoot)
    .function("GetLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedSuperCursorLight&)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self) -> unsigned int { return self.GetLevel(); }))
    .function("GetLevel", emscripten::select_overload<unsigned int(vtkHyperTreeGridNonOrientedSuperCursorLight&, unsigned int)>([](vtkHyperTreeGridNonOrientedSuperCursorLight& self, unsigned int arg_0) -> unsigned int { return self.GetLevel( arg_0); }))
    .function("ToChild", &vtkHyperTreeGridNonOrientedSuperCursorLight::ToChild)
    .function("ToRoot", &vtkHyperTreeGridNonOrientedSuperCursorLight::ToRoot)
    .function("ToParent", &vtkHyperTreeGridNonOrientedSuperCursorLight::ToParent)
    .function("GetNumberOfCursors", &vtkHyperTreeGridNonOrientedSuperCursorLight::GetNumberOfCursors);
}
