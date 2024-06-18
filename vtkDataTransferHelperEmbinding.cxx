// JavaScript wrapper for vtkDataTransferHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkDataTransferHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkDataTransferHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkDataArray.h"
#include "vtkTextureObject.h"
#include "vtkDataTransferHelper.h"

template<> void emscripten::internal::raw_destructor<vtkDataTransferHelper>(vtkDataTransferHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataTransferHelper_class) {
  emscripten::class_<vtkDataTransferHelper, emscripten::base<vtkObject>>("vtkDataTransferHelper")
    .smart_ptr<vtkSmartPointer<vtkDataTransferHelper>>("vtkSmartPointer<vtkDataTransferHelper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataTransferHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataTransferHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataTransferHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataTransferHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataTransferHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataTransferHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataTransferHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetContext", &vtkDataTransferHelper::SetContext, emscripten::allow_raw_pointers())
    .function("GetContext", &vtkDataTransferHelper::GetContext, emscripten::allow_raw_pointers())
    .function("SetCPUExtent", emscripten::select_overload<void(vtkDataTransferHelper&, int, int, int, int, int, int)>([](vtkDataTransferHelper& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetCPUExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetGPUExtent", emscripten::select_overload<void(vtkDataTransferHelper&, int, int, int, int, int, int)>([](vtkDataTransferHelper& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetGPUExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetTextureExtent", emscripten::select_overload<void(vtkDataTransferHelper&, int, int, int, int, int, int)>([](vtkDataTransferHelper& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetTextureExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetExtentIsValid", emscripten::optional_override([](vtkDataTransferHelper& self, std::uintptr_t arg_0) -> bool {  return self.GetExtentIsValid(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("GetCPUExtentIsValid", &vtkDataTransferHelper::GetCPUExtentIsValid)
    .function("GetGPUExtentIsValid", &vtkDataTransferHelper::GetGPUExtentIsValid)
    .function("GetTextureExtentIsValid", &vtkDataTransferHelper::GetTextureExtentIsValid)
    .function("SetMinTextureDimension", &vtkDataTransferHelper::SetMinTextureDimension)
    .function("GetMinTextureDimension", &vtkDataTransferHelper::GetMinTextureDimension)
    .function("GetArray", &vtkDataTransferHelper::GetArray, emscripten::allow_raw_pointers())
    .function("SetArray", &vtkDataTransferHelper::SetArray, emscripten::allow_raw_pointers())
    .function("GetTexture", &vtkDataTransferHelper::GetTexture, emscripten::allow_raw_pointers())
    .function("SetTexture", &vtkDataTransferHelper::SetTexture, emscripten::allow_raw_pointers())
    .function("Upload", emscripten::optional_override([](vtkDataTransferHelper& self, int arg_0, std::uintptr_t arg_1) -> bool {  return self.Upload( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("Download", &vtkDataTransferHelper::Download)
    .function("DownloadAsync1", &vtkDataTransferHelper::DownloadAsync1)
    .function("DownloadAsync2", &vtkDataTransferHelper::DownloadAsync2)
    .function("GetShaderSupportsTextureInt", &vtkDataTransferHelper::GetShaderSupportsTextureInt)
    .function("SetShaderSupportsTextureInt", &vtkDataTransferHelper::SetShaderSupportsTextureInt)
    .class_function("IsSupported", &vtkDataTransferHelper::IsSupported, emscripten::allow_raw_pointers());
}
