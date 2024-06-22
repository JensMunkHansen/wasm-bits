// JavaScript wrapper for vtkLODActor with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLOD.js/vtkRenderingLOD.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingLOD.js/vtkLODActorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/LOD/vtkLODActor.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkMapper.h"
#include "vtkWindow.h"
#include "vtkPolyDataAlgorithm.h"
#include "vtkMapperCollection.h"
#include "vtkProp.h"
#include "vtkLODActor.h"

template<> void emscripten::internal::raw_destructor<vtkLODActor>(vtkLODActor * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLODActor_class) {
  emscripten::class_<vtkLODActor, emscripten::base<vtkActor>>("vtkLODActor")
    .smart_ptr<vtkSmartPointer<vtkLODActor>>("vtkSmartPointer<vtkLODActor>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLODActor>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLODActor::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLODActor& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLODActor::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLODActor::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLODActor::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLODActor& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkLODActor::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkLODActor::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("AddLODMapper", &vtkLODActor::AddLODMapper, emscripten::allow_raw_pointers())
    .function("SetLowResFilter", &vtkLODActor::SetLowResFilter, emscripten::allow_raw_pointers())
    .function("SetMediumResFilter", &vtkLODActor::SetMediumResFilter, emscripten::allow_raw_pointers())
    .function("GetLowResFilter", &vtkLODActor::GetLowResFilter, emscripten::allow_raw_pointers())
    .function("GetMediumResFilter", &vtkLODActor::GetMediumResFilter, emscripten::allow_raw_pointers())
    .function("GetNumberOfCloudPoints", &vtkLODActor::GetNumberOfCloudPoints)
    .function("SetNumberOfCloudPoints", &vtkLODActor::SetNumberOfCloudPoints)
    .function("GetLODMappers", &vtkLODActor::GetLODMappers, emscripten::allow_raw_pointers())
    .function("Modified", &vtkLODActor::Modified)
    .function("ShallowCopy", &vtkLODActor::ShallowCopy, emscripten::allow_raw_pointers());
}
