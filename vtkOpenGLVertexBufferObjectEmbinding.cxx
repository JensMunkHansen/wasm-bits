// JavaScript wrapper for vtkOpenGLVertexBufferObject with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLVertexBufferObjectEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLVertexBufferObject.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkTimeStamp.h"
#include "vtkOpenGLVertexBufferObjectCache.h"
#include "vtkCamera.h"
#include "vtkProp3D.h"
#include "vtkOpenGLVertexBufferObject.h"


EMSCRIPTEN_BINDINGS(vtkFourByteUnion_class) {
  emscripten::class_<vtkFourByteUnion>("vtkFourByteUnion");
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLVertexBufferObject>(vtkOpenGLVertexBufferObject * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLVertexBufferObject_class) {
  emscripten::class_<vtkOpenGLVertexBufferObject, emscripten::base<vtkOpenGLBufferObject>>("vtkOpenGLVertexBufferObject")
    .smart_ptr<vtkSmartPointer<vtkOpenGLVertexBufferObject>>("vtkSmartPointer<vtkOpenGLVertexBufferObject>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLVertexBufferObject>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexBufferObject::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLVertexBufferObject& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLVertexBufferObject::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLVertexBufferObject::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLVertexBufferObject::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLVertexBufferObject& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("UploadDataArray", &vtkOpenGLVertexBufferObject::UploadDataArray, emscripten::allow_raw_pointers())
    .function("AppendDataArray", &vtkOpenGLVertexBufferObject::AppendDataArray, emscripten::allow_raw_pointers())
    .function("GetUploadTime", &vtkOpenGLVertexBufferObject::GetUploadTime)
    .function("GetCoordShiftAndScaleEnabled", &vtkOpenGLVertexBufferObject::GetCoordShiftAndScaleEnabled)
    .function("GetCoordShiftAndScaleMethod", &vtkOpenGLVertexBufferObject::GetCoordShiftAndScaleMethod)
    .function("SetCoordShiftAndScaleMethod", &vtkOpenGLVertexBufferObject::SetCoordShiftAndScaleMethod)
    .function("SetShift", emscripten::select_overload<void(vtkOpenGLVertexBufferObject&, const std::vector<double>&)>([](vtkOpenGLVertexBufferObject& self, const std::vector<double>& arg_0) -> void { return self.SetShift( arg_0); }))
    .function("SetShift", emscripten::select_overload<void(vtkOpenGLVertexBufferObject&, double, double, double)>([](vtkOpenGLVertexBufferObject& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetShift( arg_0, arg_1, arg_2); }))
    .function("SetScale", emscripten::select_overload<void(vtkOpenGLVertexBufferObject&, const std::vector<double>&)>([](vtkOpenGLVertexBufferObject& self, const std::vector<double>& arg_0) -> void { return self.SetScale( arg_0); }))
    .function("SetScale", emscripten::select_overload<void(vtkOpenGLVertexBufferObject&, double, double, double)>([](vtkOpenGLVertexBufferObject& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetScale( arg_0, arg_1, arg_2); }))
    .function("GetShift", &vtkOpenGLVertexBufferObject::GetShift)
    .function("GetScale", &vtkOpenGLVertexBufferObject::GetScale)
    .function("UpdateShiftScale", &vtkOpenGLVertexBufferObject::UpdateShiftScale, emscripten::allow_raw_pointers())
    .class_function("SetGlobalCoordShiftAndScaleEnabled", &vtkOpenGLVertexBufferObject::SetGlobalCoordShiftAndScaleEnabled)
    .class_function("GlobalCoordShiftAndScaleEnabledOn", &vtkOpenGLVertexBufferObject::GlobalCoordShiftAndScaleEnabledOn)
    .class_function("GlobalCoordShiftAndScaleEnabledOff", &vtkOpenGLVertexBufferObject::GlobalCoordShiftAndScaleEnabledOff)
    .class_function("GetGlobalCoordShiftAndScaleEnabled", &vtkOpenGLVertexBufferObject::GetGlobalCoordShiftAndScaleEnabled)
    .function("SetDataType", &vtkOpenGLVertexBufferObject::SetDataType)
    .function("GetDataType", &vtkOpenGLVertexBufferObject::GetDataType)
    .function("GetDataTypeSize", &vtkOpenGLVertexBufferObject::GetDataTypeSize)
    .function("GetNumberOfTuples", &vtkOpenGLVertexBufferObject::GetNumberOfTuples)
    .function("GetNumberOfComponents", &vtkOpenGLVertexBufferObject::GetNumberOfComponents)
    .function("SetStride", &vtkOpenGLVertexBufferObject::SetStride)
    .function("GetStride", &vtkOpenGLVertexBufferObject::GetStride)
    .function("GetPackedVBO", &vtkOpenGLVertexBufferObject::GetPackedVBO)
    .function("UploadVBO", &vtkOpenGLVertexBufferObject::UploadVBO)
    .function("SetCache", &vtkOpenGLVertexBufferObject::SetCache, emscripten::allow_raw_pointers())
    .function("SetCamera", &vtkOpenGLVertexBufferObject::SetCamera, emscripten::allow_raw_pointers())
    .function("SetProp3D", &vtkOpenGLVertexBufferObject::SetProp3D, emscripten::allow_raw_pointers());
}
