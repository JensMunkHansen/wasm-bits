// JavaScript wrapper for vtkOverlappingAMR with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkOverlappingAMREmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkOverlappingAMR.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCompositeDataIterator.h"
#include "vtkAMRBox.h"
#include "vtkInformationIdTypeKey.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkAMRInformation.h"
#include "vtkOverlappingAMR.h"

template<> void emscripten::internal::raw_destructor<vtkOverlappingAMR>(vtkOverlappingAMR * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOverlappingAMR_class) {
  emscripten::class_<vtkOverlappingAMR, emscripten::base<vtkUniformGridAMR>>("vtkOverlappingAMR")
    .smart_ptr<vtkSmartPointer<vtkOverlappingAMR>>("vtkSmartPointer<vtkOverlappingAMR>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOverlappingAMR>)
    .function("GetDataObjectType", &vtkOverlappingAMR::GetDataObjectType)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlappingAMR::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOverlappingAMR& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOverlappingAMR::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOverlappingAMR::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOverlappingAMR::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOverlappingAMR& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("NewIterator", &vtkOverlappingAMR::NewIterator, emscripten::allow_raw_pointers())
    .function("GetOrigin", emscripten::select_overload<std::uintptr_t(vtkOverlappingAMR&)>([](vtkOverlappingAMR& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrigin()); }))
    .function("SetAMRBox", &vtkOverlappingAMR::SetAMRBox)
    .function("GetAMRBox", &vtkOverlappingAMR::GetAMRBox)
    .class_function("NUMBER_OF_BLANKED_POINTS", &vtkOverlappingAMR::NUMBER_OF_BLANKED_POINTS, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkOverlappingAMR*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkOverlappingAMR* { return vtkOverlappingAMR::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkOverlappingAMR*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkOverlappingAMR* { return vtkOverlappingAMR::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetRefinementRatio", &vtkOverlappingAMR::SetRefinementRatio)
    .function("GetRefinementRatio", emscripten::select_overload<int(vtkOverlappingAMR&, unsigned int)>([](vtkOverlappingAMR& self, unsigned int arg_0) -> int { return self.GetRefinementRatio( arg_0); }))
    .function("GetRefinementRatio", emscripten::select_overload<int(vtkOverlappingAMR&, vtkCompositeDataIterator*)>([](vtkOverlappingAMR& self, vtkCompositeDataIterator* arg_0) -> int { return self.GetRefinementRatio( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetAMRBlockSourceIndex", &vtkOverlappingAMR::SetAMRBlockSourceIndex)
    .function("GetAMRBlockSourceIndex", &vtkOverlappingAMR::GetAMRBlockSourceIndex)
    .function("HasChildrenInformation", &vtkOverlappingAMR::HasChildrenInformation)
    .function("GenerateParentChildInformation", &vtkOverlappingAMR::GenerateParentChildInformation)
    .function("PrintParentChildInfo", &vtkOverlappingAMR::PrintParentChildInfo)
    .function("GetAMRInfo", &vtkOverlappingAMR::GetAMRInfo, emscripten::allow_raw_pointers())
    .function("SetAMRInfo", &vtkOverlappingAMR::SetAMRInfo, emscripten::allow_raw_pointers())
    .function("Audit", &vtkOverlappingAMR::Audit);
}
