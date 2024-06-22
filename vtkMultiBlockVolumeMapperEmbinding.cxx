// JavaScript wrapper for vtkMultiBlockVolumeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkRenderingVolumeOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkMultiBlockVolumeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VolumeOpenGL2/vtkMultiBlockVolumeMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkVolume.h"
#include "vtkWindow.h"
#include "vtkMultiBlockVolumeMapper.h"

template<> void emscripten::internal::raw_destructor<vtkMultiBlockVolumeMapper>(vtkMultiBlockVolumeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiBlockVolumeMapper_class) {
  emscripten::class_<vtkMultiBlockVolumeMapper, emscripten::base<vtkVolumeMapper>>("vtkMultiBlockVolumeMapper")
    .smart_ptr<vtkSmartPointer<vtkMultiBlockVolumeMapper>>("vtkSmartPointer<vtkMultiBlockVolumeMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiBlockVolumeMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockVolumeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiBlockVolumeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiBlockVolumeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiBlockVolumeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockVolumeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiBlockVolumeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SelectScalarArray", emscripten::select_overload<void(vtkMultiBlockVolumeMapper&, int)>([](vtkMultiBlockVolumeMapper& self, int arg_0) -> void { return self.SelectScalarArray( arg_0); }))
    .function("SelectScalarArray", emscripten::select_overload<void(vtkMultiBlockVolumeMapper&, const std::string &)>([](vtkMultiBlockVolumeMapper& self, const std::string & arg_0) -> void { return self.SelectScalarArray( arg_0.c_str()); }))
    .function("SetScalarMode", &vtkMultiBlockVolumeMapper::SetScalarMode)
    .function("SetArrayAccessMode", &vtkMultiBlockVolumeMapper::SetArrayAccessMode)
    .function("Render", &vtkMultiBlockVolumeMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkMultiBlockVolumeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetVectorMode", &vtkMultiBlockVolumeMapper::SetVectorMode)
    .function("GetVectorMode", &vtkMultiBlockVolumeMapper::GetVectorMode)
    .function("SetVectorComponent", &vtkMultiBlockVolumeMapper::SetVectorComponent)
    .function("GetVectorComponent", &vtkMultiBlockVolumeMapper::GetVectorComponent)
    .function("SetBlendMode", &vtkMultiBlockVolumeMapper::SetBlendMode)
    .function("SetComputeNormalFromOpacity", &vtkMultiBlockVolumeMapper::SetComputeNormalFromOpacity)
    .function("SetGlobalIlluminationReach", &vtkMultiBlockVolumeMapper::SetGlobalIlluminationReach)
    .function("GetGlobalIlluminationReach", &vtkMultiBlockVolumeMapper::GetGlobalIlluminationReach)
    .function("SetVolumetricScatteringBlending", &vtkMultiBlockVolumeMapper::SetVolumetricScatteringBlending)
    .function("GetVolumetricScatteringBlending", &vtkMultiBlockVolumeMapper::GetVolumetricScatteringBlending)
    .function("SetCropping", &vtkMultiBlockVolumeMapper::SetCropping)
    .function("SetCroppingRegionPlanes", emscripten::select_overload<void(vtkMultiBlockVolumeMapper&, double, double, double, double, double, double)>([](vtkMultiBlockVolumeMapper& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetCroppingRegionPlanes( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetCroppingRegionFlags", &vtkMultiBlockVolumeMapper::SetCroppingRegionFlags)
    .function("SetRequestedRenderMode", &vtkMultiBlockVolumeMapper::SetRequestedRenderMode)
    .function("SetTransfer2DYAxisArray", emscripten::optional_override([](vtkMultiBlockVolumeMapper& self, const std::string & arg_0) -> void {  return self.SetTransfer2DYAxisArray( arg_0.c_str());}));
}
