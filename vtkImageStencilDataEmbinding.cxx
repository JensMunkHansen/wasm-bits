// JavaScript wrapper for vtkImageStencilData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImagingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingCore.js/vtkImageStencilDataEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Core/vtkImageStencilData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkImageStencilData.h"

EMSCRIPTEN_BINDINGS(vtkImagingCore_vtkImageStencilData_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkImageStencilData>(vtkImageStencilData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageStencilData_class) {
  emscripten::class_<vtkImageStencilData, emscripten::base<vtkDataObject>>("vtkImageStencilData")
    .smart_ptr<vtkSmartPointer<vtkImageStencilData>>("vtkSmartPointer<vtkImageStencilData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageStencilData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageStencilData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageStencilData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageStencilData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageStencilData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageStencilData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkImageStencilData::Initialize)
    .function("DeepCopy", &vtkImageStencilData::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkImageStencilData::ShallowCopy, emscripten::allow_raw_pointers())
    .function("InternalImageStencilDataCopy", &vtkImageStencilData::InternalImageStencilDataCopy, emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkImageStencilData::GetDataObjectType)
    .function("GetExtentType", &vtkImageStencilData::GetExtentType)
    .function("IsInside", &vtkImageStencilData::IsInside)
    .function("InsertNextExtent", &vtkImageStencilData::InsertNextExtent)
    .function("InsertAndMergeExtent", &vtkImageStencilData::InsertAndMergeExtent)
    .function("RemoveExtent", &vtkImageStencilData::RemoveExtent)
    .function("SetSpacing", emscripten::select_overload<void(vtkImageStencilData&, double, double, double)>([](vtkImageStencilData& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetSpacing( arg_0, arg_1, arg_2); }))
    .function("SetOrigin", emscripten::select_overload<void(vtkImageStencilData&, double, double, double)>([](vtkImageStencilData& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetExtent", emscripten::select_overload<void(vtkImageStencilData&, int, int, int, int, int, int)>([](vtkImageStencilData& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("AllocateExtents", &vtkImageStencilData::AllocateExtents)
    .function("Fill", &vtkImageStencilData::Fill)
    .function("CopyInformationFromPipeline", &vtkImageStencilData::CopyInformationFromPipeline, emscripten::allow_raw_pointers())
    .function("CopyInformationToPipeline", &vtkImageStencilData::CopyInformationToPipeline, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkImageStencilData*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkImageStencilData* { return vtkImageStencilData::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkImageStencilData*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkImageStencilData* { return vtkImageStencilData::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("Add", &vtkImageStencilData::Add, emscripten::allow_raw_pointers())
    .function("Subtract", &vtkImageStencilData::Subtract, emscripten::allow_raw_pointers())
    .function("Replace", &vtkImageStencilData::Replace, emscripten::allow_raw_pointers());
}

EMSCRIPTEN_BINDINGS(vtkImageStencilRaster_class) {
  emscripten::class_<vtkImageStencilRaster>("vtkImageStencilRaster")
    .function("SetTolerance", &vtkImageStencilRaster::SetTolerance)
    .function("GetTolerance", &vtkImageStencilRaster::GetTolerance);
}
