// JavaScript wrapper for vtkRenderedHierarchyRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkViewsInfovis.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsInfovis.js/vtkRenderedHierarchyRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Infovis/vtkRenderedHierarchyRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderedHierarchyRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkRenderedHierarchyRepresentation>(vtkRenderedHierarchyRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRenderedHierarchyRepresentation_class) {
  emscripten::class_<vtkRenderedHierarchyRepresentation, emscripten::base<vtkRenderedGraphRepresentation>>("vtkRenderedHierarchyRepresentation")
    .smart_ptr<vtkSmartPointer<vtkRenderedHierarchyRepresentation>>("vtkSmartPointer<vtkRenderedHierarchyRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRenderedHierarchyRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedHierarchyRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRenderedHierarchyRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRenderedHierarchyRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRenderedHierarchyRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRenderedHierarchyRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRenderedHierarchyRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGraphEdgeLabelArrayName", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, const std::string &)>([](vtkRenderedHierarchyRepresentation& self, const std::string & arg_0) -> void { return self.SetGraphEdgeLabelArrayName( arg_0.c_str()); }))
    .function("SetGraphEdgeLabelArrayName", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, const std::string &, int)>([](vtkRenderedHierarchyRepresentation& self, const std::string & arg_0, int arg_1) -> void { return self.SetGraphEdgeLabelArrayName( arg_0.c_str(), arg_1); }))
    .function("GetGraphEdgeLabelArrayName", emscripten::select_overload<std::string(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> std::string { return self.GetGraphEdgeLabelArrayName(); }))
    .function("GetGraphEdgeLabelArrayName", emscripten::select_overload<std::string(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> std::string { return self.GetGraphEdgeLabelArrayName( arg_0); }))
    .function("SetGraphEdgeLabelVisibility", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, bool)>([](vtkRenderedHierarchyRepresentation& self, bool arg_0) -> void { return self.SetGraphEdgeLabelVisibility( arg_0); }))
    .function("SetGraphEdgeLabelVisibility", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, bool, int)>([](vtkRenderedHierarchyRepresentation& self, bool arg_0, int arg_1) -> void { return self.SetGraphEdgeLabelVisibility( arg_0, arg_1); }))
    .function("GetGraphEdgeLabelVisibility", emscripten::select_overload<bool(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> bool { return self.GetGraphEdgeLabelVisibility(); }))
    .function("GetGraphEdgeLabelVisibility", emscripten::select_overload<bool(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> bool { return self.GetGraphEdgeLabelVisibility( arg_0); }))
    .function("GraphEdgeLabelVisibilityOn", &vtkRenderedHierarchyRepresentation::GraphEdgeLabelVisibilityOn)
    .function("GraphEdgeLabelVisibilityOff", &vtkRenderedHierarchyRepresentation::GraphEdgeLabelVisibilityOff)
    .function("SetGraphEdgeColorArrayName", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, const std::string &)>([](vtkRenderedHierarchyRepresentation& self, const std::string & arg_0) -> void { return self.SetGraphEdgeColorArrayName( arg_0.c_str()); }))
    .function("SetGraphEdgeColorArrayName", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, const std::string &, int)>([](vtkRenderedHierarchyRepresentation& self, const std::string & arg_0, int arg_1) -> void { return self.SetGraphEdgeColorArrayName( arg_0.c_str(), arg_1); }))
    .function("GetGraphEdgeColorArrayName", emscripten::select_overload<std::string(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> std::string { return self.GetGraphEdgeColorArrayName(); }))
    .function("GetGraphEdgeColorArrayName", emscripten::select_overload<std::string(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> std::string { return self.GetGraphEdgeColorArrayName( arg_0); }))
    .function("SetColorGraphEdgesByArray", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, bool)>([](vtkRenderedHierarchyRepresentation& self, bool arg_0) -> void { return self.SetColorGraphEdgesByArray( arg_0); }))
    .function("SetColorGraphEdgesByArray", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, bool, int)>([](vtkRenderedHierarchyRepresentation& self, bool arg_0, int arg_1) -> void { return self.SetColorGraphEdgesByArray( arg_0, arg_1); }))
    .function("GetColorGraphEdgesByArray", emscripten::select_overload<bool(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> bool { return self.GetColorGraphEdgesByArray(); }))
    .function("GetColorGraphEdgesByArray", emscripten::select_overload<bool(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> bool { return self.GetColorGraphEdgesByArray( arg_0); }))
    .function("ColorGraphEdgesByArrayOn", &vtkRenderedHierarchyRepresentation::ColorGraphEdgesByArrayOn)
    .function("ColorGraphEdgesByArrayOff", &vtkRenderedHierarchyRepresentation::ColorGraphEdgesByArrayOff)
    .function("SetGraphEdgeColorToSplineFraction", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> void { return self.SetGraphEdgeColorToSplineFraction(); }))
    .function("SetGraphEdgeColorToSplineFraction", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> void { return self.SetGraphEdgeColorToSplineFraction( arg_0); }))
    .function("SetGraphVisibility", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, bool)>([](vtkRenderedHierarchyRepresentation& self, bool arg_0) -> void { return self.SetGraphVisibility( arg_0); }))
    .function("SetGraphVisibility", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, bool, int)>([](vtkRenderedHierarchyRepresentation& self, bool arg_0, int arg_1) -> void { return self.SetGraphVisibility( arg_0, arg_1); }))
    .function("GetGraphVisibility", emscripten::select_overload<bool(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> bool { return self.GetGraphVisibility(); }))
    .function("GetGraphVisibility", emscripten::select_overload<bool(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> bool { return self.GetGraphVisibility( arg_0); }))
    .function("GraphVisibilityOn", &vtkRenderedHierarchyRepresentation::GraphVisibilityOn)
    .function("GraphVisibilityOff", &vtkRenderedHierarchyRepresentation::GraphVisibilityOff)
    .function("SetBundlingStrength", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, double)>([](vtkRenderedHierarchyRepresentation& self, double arg_0) -> void { return self.SetBundlingStrength( arg_0); }))
    .function("SetBundlingStrength", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, double, int)>([](vtkRenderedHierarchyRepresentation& self, double arg_0, int arg_1) -> void { return self.SetBundlingStrength( arg_0, arg_1); }))
    .function("GetBundlingStrength", emscripten::select_overload<double(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> double { return self.GetBundlingStrength(); }))
    .function("GetBundlingStrength", emscripten::select_overload<double(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> double { return self.GetBundlingStrength( arg_0); }))
    .function("SetGraphSplineType", &vtkRenderedHierarchyRepresentation::SetGraphSplineType)
    .function("GetGraphSplineType", &vtkRenderedHierarchyRepresentation::GetGraphSplineType)
    .function("SetGraphEdgeLabelFontSize", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> void { return self.SetGraphEdgeLabelFontSize( arg_0); }))
    .function("SetGraphEdgeLabelFontSize", emscripten::select_overload<void(vtkRenderedHierarchyRepresentation&, int, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0, int arg_1) -> void { return self.SetGraphEdgeLabelFontSize( arg_0, arg_1); }))
    .function("GetGraphEdgeLabelFontSize", emscripten::select_overload<int(vtkRenderedHierarchyRepresentation&)>([](vtkRenderedHierarchyRepresentation& self) -> int { return self.GetGraphEdgeLabelFontSize(); }))
    .function("GetGraphEdgeLabelFontSize", emscripten::select_overload<int(vtkRenderedHierarchyRepresentation&, int)>([](vtkRenderedHierarchyRepresentation& self, int arg_0) -> int { return self.GetGraphEdgeLabelFontSize( arg_0); }));
}
