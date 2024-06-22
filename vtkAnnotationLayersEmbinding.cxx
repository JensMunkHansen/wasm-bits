// JavaScript wrapper for vtkAnnotationLayers with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAnnotationLayersEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAnnotationLayers.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAnnotation.h"
#include "vtkSelection.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkAnnotationLayers.h"

template<> void emscripten::internal::raw_destructor<vtkAnnotationLayers>(vtkAnnotationLayers * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnnotationLayers_class) {
  emscripten::class_<vtkAnnotationLayers, emscripten::base<vtkDataObject>>("vtkAnnotationLayers")
    .smart_ptr<vtkSmartPointer<vtkAnnotationLayers>>("vtkSmartPointer<vtkAnnotationLayers>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAnnotationLayers>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotationLayers::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnnotationLayers& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnnotationLayers::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnnotationLayers::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotationLayers::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnnotationLayers& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkAnnotationLayers::GetDataObjectType)
    .function("SetCurrentAnnotation", &vtkAnnotationLayers::SetCurrentAnnotation, emscripten::allow_raw_pointers())
    .function("GetCurrentAnnotation", &vtkAnnotationLayers::GetCurrentAnnotation, emscripten::allow_raw_pointers())
    .function("SetCurrentSelection", &vtkAnnotationLayers::SetCurrentSelection, emscripten::allow_raw_pointers())
    .function("GetCurrentSelection", &vtkAnnotationLayers::GetCurrentSelection, emscripten::allow_raw_pointers())
    .function("GetNumberOfAnnotations", &vtkAnnotationLayers::GetNumberOfAnnotations)
    .function("GetAnnotation", &vtkAnnotationLayers::GetAnnotation, emscripten::allow_raw_pointers())
    .function("AddAnnotation", &vtkAnnotationLayers::AddAnnotation, emscripten::allow_raw_pointers())
    .function("RemoveAnnotation", &vtkAnnotationLayers::RemoveAnnotation, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkAnnotationLayers::Initialize)
    .function("ShallowCopy", &vtkAnnotationLayers::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkAnnotationLayers::DeepCopy, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkAnnotationLayers*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkAnnotationLayers* { return vtkAnnotationLayers::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkAnnotationLayers*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkAnnotationLayers* { return vtkAnnotationLayers::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAnnotationLayers::GetMTime);
}
