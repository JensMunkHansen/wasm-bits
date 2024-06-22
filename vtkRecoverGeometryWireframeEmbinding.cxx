// JavaScript wrapper for vtkRecoverGeometryWireframe with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkFiltersGeometry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometry.js/vtkRecoverGeometryWireframeEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Geometry/vtkRecoverGeometryWireframe.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRecoverGeometryWireframe.h"

template<> void emscripten::internal::raw_destructor<vtkRecoverGeometryWireframe>(vtkRecoverGeometryWireframe * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRecoverGeometryWireframe_class) {
  emscripten::class_<vtkRecoverGeometryWireframe, emscripten::base<vtkPolyDataAlgorithm>>("vtkRecoverGeometryWireframe")
    .smart_ptr<vtkSmartPointer<vtkRecoverGeometryWireframe>>("vtkSmartPointer<vtkRecoverGeometryWireframe>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRecoverGeometryWireframe>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRecoverGeometryWireframe::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRecoverGeometryWireframe& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRecoverGeometryWireframe::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRecoverGeometryWireframe::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRecoverGeometryWireframe::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRecoverGeometryWireframe& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellIdsAttribute", &vtkRecoverGeometryWireframe::SetCellIdsAttribute)
    .function("GetCellIdsAttribute", &vtkRecoverGeometryWireframe::GetCellIdsAttribute);
}
