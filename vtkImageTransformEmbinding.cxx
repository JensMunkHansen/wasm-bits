// JavaScript wrapper for vtkImageTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImageTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImageTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkPointSet.h"
#include "vtkDataArray.h"
#include "vtkMatrix4x4.h"
#include "vtkMatrix3x3.h"
#include "vtkImageTransform.h"

template<> void emscripten::internal::raw_destructor<vtkImageTransform>(vtkImageTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageTransform_class) {
  emscripten::class_<vtkImageTransform, emscripten::base<vtkObject>>("vtkImageTransform")
    .smart_ptr<vtkSmartPointer<vtkImageTransform>>("vtkSmartPointer<vtkImageTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("TransformPointSet", emscripten::select_overload<void( vtkImageData*, vtkPointSet*)>([]( vtkImageData* arg_0, vtkPointSet* arg_1) -> void { return vtkImageTransform::TransformPointSet( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("TransformPointSet", emscripten::select_overload<void( vtkImageData*, vtkPointSet*, bool, bool)>([]( vtkImageData* arg_0, vtkPointSet* arg_1, bool arg_2, bool arg_3) -> void { return vtkImageTransform::TransformPointSet( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .class_function("TranslatePoints", emscripten::optional_override([]( std::uintptr_t arg_0, vtkDataArray* arg_1) -> void {  return vtkImageTransform::TranslatePoints(reinterpret_cast<double*>(arg_0 * sizeof(double)), arg_1);}), emscripten::allow_raw_pointers())
    .class_function("TransformPoints", &vtkImageTransform::TransformPoints, emscripten::allow_raw_pointers());
}
