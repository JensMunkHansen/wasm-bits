// JavaScript wrapper for vtkVolumeOutlineSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkVolumeOutlineSourceEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkVolumeOutlineSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVolumeMapper.h"
#include "vtkVolumeOutlineSource.h"

template<> void emscripten::internal::raw_destructor<vtkVolumeOutlineSource>(vtkVolumeOutlineSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVolumeOutlineSource_class) {
  emscripten::class_<vtkVolumeOutlineSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkVolumeOutlineSource")
    .smart_ptr<vtkSmartPointer<vtkVolumeOutlineSource>>("vtkSmartPointer<vtkVolumeOutlineSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVolumeOutlineSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeOutlineSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVolumeOutlineSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVolumeOutlineSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVolumeOutlineSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVolumeOutlineSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVolumeOutlineSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVolumeMapper", &vtkVolumeOutlineSource::SetVolumeMapper, emscripten::allow_raw_pointers())
    .function("GetVolumeMapper", &vtkVolumeOutlineSource::GetVolumeMapper, emscripten::allow_raw_pointers())
    .function("SetGenerateScalars", &vtkVolumeOutlineSource::SetGenerateScalars)
    .function("GenerateScalarsOn", &vtkVolumeOutlineSource::GenerateScalarsOn)
    .function("GenerateScalarsOff", &vtkVolumeOutlineSource::GenerateScalarsOff)
    .function("GetGenerateScalars", &vtkVolumeOutlineSource::GetGenerateScalars)
    .function("SetGenerateOutline", &vtkVolumeOutlineSource::SetGenerateOutline)
    .function("GenerateOutlineOn", &vtkVolumeOutlineSource::GenerateOutlineOn)
    .function("GenerateOutlineOff", &vtkVolumeOutlineSource::GenerateOutlineOff)
    .function("GetGenerateOutline", &vtkVolumeOutlineSource::GetGenerateOutline)
    .function("SetGenerateFaces", &vtkVolumeOutlineSource::SetGenerateFaces)
    .function("GenerateFacesOn", &vtkVolumeOutlineSource::GenerateFacesOn)
    .function("GenerateFacesOff", &vtkVolumeOutlineSource::GenerateFacesOff)
    .function("GetGenerateFaces", &vtkVolumeOutlineSource::GetGenerateFaces)
    .function("SetColor", emscripten::select_overload<void(vtkVolumeOutlineSource&, double, double, double)>([](vtkVolumeOutlineSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetColor( arg_0, arg_1, arg_2); }))
    .function("SetActivePlaneId", &vtkVolumeOutlineSource::SetActivePlaneId)
    .function("GetActivePlaneId", &vtkVolumeOutlineSource::GetActivePlaneId)
    .function("SetActivePlaneColor", emscripten::select_overload<void(vtkVolumeOutlineSource&, double, double, double)>([](vtkVolumeOutlineSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetActivePlaneColor( arg_0, arg_1, arg_2); }));
}
