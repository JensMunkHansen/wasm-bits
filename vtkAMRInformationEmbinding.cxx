// JavaScript wrapper for vtkAMRInformation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkAMRInformationEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkAMRInformation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAMRBox.h"
#include "vtkAMRInformation.h"

template<> void emscripten::internal::raw_destructor<vtkAMRInformation>(vtkAMRInformation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAMRInformation_class) {
  emscripten::class_<vtkAMRInformation, emscripten::base<vtkObject>>("vtkAMRInformation")
    .smart_ptr<vtkSmartPointer<vtkAMRInformation>>("vtkSmartPointer<vtkAMRInformation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAMRInformation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRInformation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAMRInformation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAMRInformation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAMRInformation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAMRInformation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAMRInformation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", emscripten::optional_override([](vtkAMRInformation& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.Initialize( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .function("GetGridDescription", &vtkAMRInformation::GetGridDescription)
    .function("SetGridDescription", &vtkAMRInformation::SetGridDescription)
    .function("GetOrigin", emscripten::select_overload<std::uintptr_t(vtkAMRInformation&)>([](vtkAMRInformation& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetOrigin()); }))
    .function("GetOrigin", emscripten::select_overload<bool(vtkAMRInformation&, unsigned int, unsigned int, std::uintptr_t)>([](vtkAMRInformation& self, unsigned int arg_0, unsigned int arg_1, std::uintptr_t arg_2) -> bool { return self.GetOrigin( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("SetOrigin", emscripten::optional_override([](vtkAMRInformation& self, std::uintptr_t arg_0) -> void {  return self.SetOrigin(reinterpret_cast<double*>(arg_0 * sizeof(double)));}))
    .function("GetNumberOfLevels", &vtkAMRInformation::GetNumberOfLevels)
    .function("GetNumberOfDataSets", &vtkAMRInformation::GetNumberOfDataSets)
    .function("GetTotalNumberOfBlocks", &vtkAMRInformation::GetTotalNumberOfBlocks)
    .function("GetIndex", &vtkAMRInformation::GetIndex)
    .function("GetBounds", emscripten::select_overload<std::uintptr_t(vtkAMRInformation&)>([](vtkAMRInformation& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetBounds()); }))
    .function("GetBounds", emscripten::select_overload<void(vtkAMRInformation&, unsigned int, unsigned int, std::uintptr_t)>([](vtkAMRInformation& self, unsigned int arg_0, unsigned int arg_1, std::uintptr_t arg_2) -> void { return self.GetBounds( arg_0, arg_1,reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("HasSpacing", &vtkAMRInformation::HasSpacing)
    .function("SetAMRBox", &vtkAMRInformation::SetAMRBox)
    .function("GetAMRBox", &vtkAMRInformation::GetAMRBox)
    .function("GetAMRBlockSourceIndex", &vtkAMRInformation::GetAMRBlockSourceIndex)
    .function("SetAMRBlockSourceIndex", &vtkAMRInformation::SetAMRBlockSourceIndex)
    .function("GenerateRefinementRatio", &vtkAMRInformation::GenerateRefinementRatio)
    .function("HasRefinementRatio", &vtkAMRInformation::HasRefinementRatio)
    .function("SetRefinementRatio", &vtkAMRInformation::SetRefinementRatio)
    .function("GetRefinementRatio", &vtkAMRInformation::GetRefinementRatio)
    .function("SetSpacing", emscripten::optional_override([](vtkAMRInformation& self, unsigned int arg_0, std::uintptr_t arg_1) -> void {  return self.SetSpacing( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("HasChildrenInformation", &vtkAMRInformation::HasChildrenInformation)
    .function("PrintParentChildInfo", &vtkAMRInformation::PrintParentChildInfo)
    .function("GenerateParentChildInformation", &vtkAMRInformation::GenerateParentChildInformation)
    .function("Audit", &vtkAMRInformation::Audit)
    .function("GetNumBlocks", &vtkAMRInformation::GetNumBlocks)
    .function("DeepCopy", &vtkAMRInformation::DeepCopy, emscripten::allow_raw_pointers());
}
