// JavaScript wrapper for vtkUniformHyperTreeGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUniformHyperTreeGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUniformHyperTreeGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataArray.h"
#include "vtkHyperTreeGrid.h"
#include "vtkHyperTree.h"
#include "vtkUniformHyperTreeGrid.h"

template<> void emscripten::internal::raw_destructor<vtkUniformHyperTreeGrid>(vtkUniformHyperTreeGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniformHyperTreeGrid_class) {
  emscripten::class_<vtkUniformHyperTreeGrid, emscripten::base<vtkHyperTreeGrid>>("vtkUniformHyperTreeGrid")
    .smart_ptr<vtkSmartPointer<vtkUniformHyperTreeGrid>>("vtkSmartPointer<vtkUniformHyperTreeGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUniformHyperTreeGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformHyperTreeGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniformHyperTreeGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniformHyperTreeGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniformHyperTreeGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformHyperTreeGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniformHyperTreeGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkUniformHyperTreeGrid::GetDataObjectType)
    .function("CopyStructure", &vtkUniformHyperTreeGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkUniformHyperTreeGrid::Initialize)
    .function("SetOrigin", emscripten::select_overload<void(vtkUniformHyperTreeGrid&, double, double, double)>([](vtkUniformHyperTreeGrid& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetGridScale", emscripten::select_overload<void(vtkUniformHyperTreeGrid&, double, double, double)>([](vtkUniformHyperTreeGrid& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetGridScale( arg_0, arg_1, arg_2); }))
    .function("SetGridScale", emscripten::select_overload<void(vtkUniformHyperTreeGrid&, std::uintptr_t)>([](vtkUniformHyperTreeGrid& self, std::uintptr_t arg_0) -> void { return self.SetGridScale(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetGridScale", emscripten::select_overload<void(vtkUniformHyperTreeGrid&, double)>([](vtkUniformHyperTreeGrid& self, double arg_0) -> void { return self.SetGridScale( arg_0); }))
    .function("SetXCoordinates", &vtkUniformHyperTreeGrid::SetXCoordinates, emscripten::allow_raw_pointers())
    .function("GetXCoordinates", &vtkUniformHyperTreeGrid::GetXCoordinates, emscripten::allow_raw_pointers())
    .function("SetYCoordinates", &vtkUniformHyperTreeGrid::SetYCoordinates, emscripten::allow_raw_pointers())
    .function("GetYCoordinates", &vtkUniformHyperTreeGrid::GetYCoordinates, emscripten::allow_raw_pointers())
    .function("SetZCoordinates", &vtkUniformHyperTreeGrid::SetZCoordinates, emscripten::allow_raw_pointers())
    .function("GetZCoordinates", &vtkUniformHyperTreeGrid::GetZCoordinates, emscripten::allow_raw_pointers())
    .function("CopyCoordinates", &vtkUniformHyperTreeGrid::CopyCoordinates, emscripten::allow_raw_pointers())
    .function("SetFixedCoordinates", &vtkUniformHyperTreeGrid::SetFixedCoordinates)
    .function("GetLevelZeroOriginAndSizeFromIndex", emscripten::optional_override([](vtkUniformHyperTreeGrid& self, int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> void {  return self.GetLevelZeroOriginAndSizeFromIndex( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double)));}))
    .function("GetLevelZeroOriginFromIndex", emscripten::optional_override([](vtkUniformHyperTreeGrid& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.GetLevelZeroOriginFromIndex( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)));}))
    .function("ShallowCopy", &vtkUniformHyperTreeGrid::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkUniformHyperTreeGrid::DeepCopy, emscripten::allow_raw_pointers())
    .function("GetActualMemorySizeBytes", &vtkUniformHyperTreeGrid::GetActualMemorySizeBytes)
    .function("GetTree", &vtkUniformHyperTreeGrid::GetTree, emscripten::allow_raw_pointers());
}
