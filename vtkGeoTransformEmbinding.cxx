// JavaScript wrapper for vtkGeoTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkGeovisCore.js/vtkGeovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkGeovisCore.js/vtkGeoTransformEmbinding.cxx \
 /home/jmh/github/vtk/Geovis/Core/vtkGeoTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkGeoProjection.h"
#include "vtkPoints.h"
#include "vtkAbstractTransform.h"
#include "vtkGeoTransform.h"

template<> void emscripten::internal::raw_destructor<vtkGeoTransform>(vtkGeoTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGeoTransform_class) {
  emscripten::class_<vtkGeoTransform, emscripten::base<vtkAbstractTransform>>("vtkGeoTransform")
    .smart_ptr<vtkSmartPointer<vtkGeoTransform>>("vtkSmartPointer<vtkGeoTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGeoTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGeoTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGeoTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGeoTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGeoTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGeoTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSourceProjection", emscripten::select_overload<void(vtkGeoTransform&, vtkGeoProjection*)>([](vtkGeoTransform& self, vtkGeoProjection* arg_0) -> void { return self.SetSourceProjection( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetSourceProjection", emscripten::select_overload<void(vtkGeoTransform&, const std::string &)>([](vtkGeoTransform& self, const std::string & arg_0) -> void { return self.SetSourceProjection( arg_0.c_str()); }))
    .function("GetSourceProjection", &vtkGeoTransform::GetSourceProjection, emscripten::allow_raw_pointers())
    .function("SetTransformZCoordinate", &vtkGeoTransform::SetTransformZCoordinate)
    .function("GetTransformZCoordinate", &vtkGeoTransform::GetTransformZCoordinate)
    .function("SetDestinationProjection", emscripten::select_overload<void(vtkGeoTransform&, vtkGeoProjection*)>([](vtkGeoTransform& self, vtkGeoProjection* arg_0) -> void { return self.SetDestinationProjection( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetDestinationProjection", emscripten::select_overload<void(vtkGeoTransform&, const std::string &)>([](vtkGeoTransform& self, const std::string & arg_0) -> void { return self.SetDestinationProjection( arg_0.c_str()); }))
    .function("GetDestinationProjection", &vtkGeoTransform::GetDestinationProjection, emscripten::allow_raw_pointers())
    .function("TransformPoints", &vtkGeoTransform::TransformPoints, emscripten::allow_raw_pointers())
    .function("Inverse", &vtkGeoTransform::Inverse)
    .class_function("ComputeUTMZone", emscripten::select_overload<int( double, double)>([]( double arg_0, double arg_1) -> int { return vtkGeoTransform::ComputeUTMZone( arg_0, arg_1); }))
    .class_function("ComputeUTMZone", emscripten::select_overload<int( std::uintptr_t)>([]( std::uintptr_t arg_0) -> int { return vtkGeoTransform::ComputeUTMZone(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("MakeTransform", &vtkGeoTransform::MakeTransform, emscripten::allow_raw_pointers());
}
