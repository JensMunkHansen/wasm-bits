// JavaScript wrapper for vtkAnnotation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAnnotationEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAnnotation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelection.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkInformationStringKey.h"
#include "vtkInformationDoubleVectorKey.h"
#include "vtkInformationDoubleKey.h"
#include "vtkInformationIntegerKey.h"
#include "vtkInformationDataObjectKey.h"
#include "vtkDataObject.h"
#include "vtkAnnotation.h"

template<> void emscripten::internal::raw_destructor<vtkAnnotation>(vtkAnnotation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAnnotation_class) {
  emscripten::class_<vtkAnnotation, emscripten::base<vtkDataObject>>("vtkAnnotation")
    .smart_ptr<vtkSmartPointer<vtkAnnotation>>("vtkSmartPointer<vtkAnnotation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAnnotation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAnnotation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAnnotation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAnnotation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAnnotation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAnnotation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkAnnotation::GetDataObjectType)
    .function("GetSelection", &vtkAnnotation::GetSelection, emscripten::allow_raw_pointers())
    .function("SetSelection", &vtkAnnotation::SetSelection, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkAnnotation*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkAnnotation* { return vtkAnnotation::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkAnnotation*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkAnnotation* { return vtkAnnotation::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("LABEL", &vtkAnnotation::LABEL, emscripten::allow_raw_pointers())
    .class_function("COLOR", &vtkAnnotation::COLOR, emscripten::allow_raw_pointers())
    .class_function("OPACITY", &vtkAnnotation::OPACITY, emscripten::allow_raw_pointers())
    .class_function("ICON_INDEX", &vtkAnnotation::ICON_INDEX, emscripten::allow_raw_pointers())
    .class_function("ENABLE", &vtkAnnotation::ENABLE, emscripten::allow_raw_pointers())
    .class_function("HIDE", &vtkAnnotation::HIDE, emscripten::allow_raw_pointers())
    .class_function("DATA", &vtkAnnotation::DATA, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkAnnotation::Initialize)
    .function("ShallowCopy", &vtkAnnotation::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkAnnotation::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkAnnotation::GetMTime);
}
