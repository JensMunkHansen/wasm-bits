// JavaScript wrapper for vtkDiscreteFlyingEdges2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkDiscreteFlyingEdges2DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkDiscreteFlyingEdges2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDiscreteFlyingEdges2D.h"

template<> void emscripten::internal::raw_destructor<vtkDiscreteFlyingEdges2D>(vtkDiscreteFlyingEdges2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDiscreteFlyingEdges2D_class) {
  emscripten::class_<vtkDiscreteFlyingEdges2D, emscripten::base<vtkPolyDataAlgorithm>>("vtkDiscreteFlyingEdges2D")
    .smart_ptr<vtkSmartPointer<vtkDiscreteFlyingEdges2D>>("vtkSmartPointer<vtkDiscreteFlyingEdges2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkDiscreteFlyingEdges2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteFlyingEdges2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDiscreteFlyingEdges2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDiscreteFlyingEdges2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDiscreteFlyingEdges2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDiscreteFlyingEdges2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDiscreteFlyingEdges2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkDiscreteFlyingEdges2D::GetMTime)
    .function("SetValue", &vtkDiscreteFlyingEdges2D::SetValue)
    .function("GetValue", &vtkDiscreteFlyingEdges2D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkDiscreteFlyingEdges2D&)>([](vtkDiscreteFlyingEdges2D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkDiscreteFlyingEdges2D&, std::uintptr_t)>([](vtkDiscreteFlyingEdges2D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkDiscreteFlyingEdges2D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkDiscreteFlyingEdges2D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkDiscreteFlyingEdges2D&, int, double, double)>([](vtkDiscreteFlyingEdges2D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetComputeScalars", &vtkDiscreteFlyingEdges2D::SetComputeScalars)
    .function("GetComputeScalars", &vtkDiscreteFlyingEdges2D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkDiscreteFlyingEdges2D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkDiscreteFlyingEdges2D::ComputeScalarsOff)
    .function("SetArrayComponent", &vtkDiscreteFlyingEdges2D::SetArrayComponent)
    .function("GetArrayComponent", &vtkDiscreteFlyingEdges2D::GetArrayComponent);
}
