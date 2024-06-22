// JavaScript wrapper for vtkOrientedPolygonalHandleRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkOrientedPolygonalHandleRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkOrientedPolygonalHandleRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOrientedPolygonalHandleRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkOrientedPolygonalHandleRepresentation3D>(vtkOrientedPolygonalHandleRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrientedPolygonalHandleRepresentation3D_class) {
  emscripten::class_<vtkOrientedPolygonalHandleRepresentation3D, emscripten::base<vtkAbstractPolygonalHandleRepresentation3D>>("vtkOrientedPolygonalHandleRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkOrientedPolygonalHandleRepresentation3D>>("vtkSmartPointer<vtkOrientedPolygonalHandleRepresentation3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOrientedPolygonalHandleRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientedPolygonalHandleRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrientedPolygonalHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrientedPolygonalHandleRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrientedPolygonalHandleRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientedPolygonalHandleRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrientedPolygonalHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
