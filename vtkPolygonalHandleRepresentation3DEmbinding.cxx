// JavaScript wrapper for vtkPolygonalHandleRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkPolygonalHandleRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkPolygonalHandleRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolygonalHandleRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkPolygonalHandleRepresentation3D>(vtkPolygonalHandleRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolygonalHandleRepresentation3D_class) {
  emscripten::class_<vtkPolygonalHandleRepresentation3D, emscripten::base<vtkAbstractPolygonalHandleRepresentation3D>>("vtkPolygonalHandleRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkPolygonalHandleRepresentation3D>>("vtkSmartPointer<vtkPolygonalHandleRepresentation3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPolygonalHandleRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygonalHandleRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolygonalHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolygonalHandleRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolygonalHandleRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolygonalHandleRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolygonalHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOffset", emscripten::select_overload<void(vtkPolygonalHandleRepresentation3D&, double, double, double)>([](vtkPolygonalHandleRepresentation3D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOffset( arg_0, arg_1, arg_2); }));
}
