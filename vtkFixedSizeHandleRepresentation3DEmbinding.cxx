// JavaScript wrapper for vtkFixedSizeHandleRepresentation3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkInteractionWidgets.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInteractionWidgets.js/vtkFixedSizeHandleRepresentation3DEmbinding.cxx \
 /home/jmh/github/vtk/Interaction/Widgets/vtkFixedSizeHandleRepresentation3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSphereSource.h"
#include "vtkFixedSizeHandleRepresentation3D.h"

template<> void emscripten::internal::raw_destructor<vtkFixedSizeHandleRepresentation3D>(vtkFixedSizeHandleRepresentation3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkFixedSizeHandleRepresentation3D_class) {
  emscripten::class_<vtkFixedSizeHandleRepresentation3D, emscripten::base<vtkPolygonalHandleRepresentation3D>>("vtkFixedSizeHandleRepresentation3D")
    .smart_ptr<vtkSmartPointer<vtkFixedSizeHandleRepresentation3D>>("vtkSmartPointer<vtkFixedSizeHandleRepresentation3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkFixedSizeHandleRepresentation3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedSizeHandleRepresentation3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkFixedSizeHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkFixedSizeHandleRepresentation3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkFixedSizeHandleRepresentation3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkFixedSizeHandleRepresentation3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkFixedSizeHandleRepresentation3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetSphereSource", &vtkFixedSizeHandleRepresentation3D::GetSphereSource, emscripten::allow_raw_pointers())
    .function("SetHandleSizeInPixels", &vtkFixedSizeHandleRepresentation3D::SetHandleSizeInPixels)
    .function("GetHandleSizeInPixels", &vtkFixedSizeHandleRepresentation3D::GetHandleSizeInPixels)
    .function("SetHandleSizeToleranceInPixels", &vtkFixedSizeHandleRepresentation3D::SetHandleSizeToleranceInPixels)
    .function("GetHandleSizeToleranceInPixels", &vtkFixedSizeHandleRepresentation3D::GetHandleSizeToleranceInPixels);
}
