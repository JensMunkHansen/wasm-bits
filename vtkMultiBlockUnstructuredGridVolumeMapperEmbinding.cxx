// JavaScript wrapper for vtkMultiBlockUnstructuredGridVolumeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkRenderingVolumeOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolumeOpenGL2.js/vtkMultiBlockUnstructuredGridVolumeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/VolumeOpenGL2/vtkMultiBlockUnstructuredGridVolumeMapper.h
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
#include "vtkMultiBlockUnstructuredGridVolumeMapper.h"

template<> void emscripten::internal::raw_destructor<vtkMultiBlockUnstructuredGridVolumeMapper>(vtkMultiBlockUnstructuredGridVolumeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiBlockUnstructuredGridVolumeMapper_class) {
  emscripten::class_<vtkMultiBlockUnstructuredGridVolumeMapper, emscripten::base<vtkUnstructuredGridVolumeMapper>>("vtkMultiBlockUnstructuredGridVolumeMapper")
    .smart_ptr<vtkSmartPointer<vtkMultiBlockUnstructuredGridVolumeMapper>>("vtkSmartPointer<vtkMultiBlockUnstructuredGridVolumeMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiBlockUnstructuredGridVolumeMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockUnstructuredGridVolumeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiBlockUnstructuredGridVolumeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiBlockUnstructuredGridVolumeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiBlockUnstructuredGridVolumeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiBlockUnstructuredGridVolumeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiBlockUnstructuredGridVolumeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SelectScalarArray", emscripten::select_overload<void(vtkMultiBlockUnstructuredGridVolumeMapper&, int)>([](vtkMultiBlockUnstructuredGridVolumeMapper& self, int arg_0) -> void { return self.SelectScalarArray( arg_0); }))
    .function("SelectScalarArray", emscripten::select_overload<void(vtkMultiBlockUnstructuredGridVolumeMapper&, const std::string &)>([](vtkMultiBlockUnstructuredGridVolumeMapper& self, const std::string & arg_0) -> void { return self.SelectScalarArray( arg_0.c_str()); }))
    .function("SetScalarMode", &vtkMultiBlockUnstructuredGridVolumeMapper::SetScalarMode)
    .function("SetArrayAccessMode", &vtkMultiBlockUnstructuredGridVolumeMapper::SetArrayAccessMode)
    .function("Render", &vtkMultiBlockUnstructuredGridVolumeMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkMultiBlockUnstructuredGridVolumeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("SetUseFloatingPointFrameBuffer", &vtkMultiBlockUnstructuredGridVolumeMapper::SetUseFloatingPointFrameBuffer)
    .function("GetUseFloatingPointFrameBuffer", &vtkMultiBlockUnstructuredGridVolumeMapper::GetUseFloatingPointFrameBuffer)
    .function("SetBlendMode", &vtkMultiBlockUnstructuredGridVolumeMapper::SetBlendMode);
}
