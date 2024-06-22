// JavaScript wrapper for vtkHyperTreeGridSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkHyperTreeGridSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkHyperTreeGridSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBitArray.h"
#include "vtkIdTypeArray.h"
#include "vtkQuadric.h"
#include "vtkHyperTreeGridSource.h"

template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridSource>(vtkHyperTreeGridSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridSource_class) {
  emscripten::class_<vtkHyperTreeGridSource, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridSource")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridSource>>("vtkSmartPointer<vtkHyperTreeGridSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMaxDepth", &vtkHyperTreeGridSource::GetMaxDepth)
    .function("SetMaxDepth", &vtkHyperTreeGridSource::SetMaxDepth)
    .function("SetOrigin", emscripten::select_overload<void(vtkHyperTreeGridSource&, double, double, double)>([](vtkHyperTreeGridSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetGridScale", emscripten::select_overload<void(vtkHyperTreeGridSource&, double, double, double)>([](vtkHyperTreeGridSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetGridScale( arg_0, arg_1, arg_2); }))
    .function("SetGridScale", emscripten::select_overload<void(vtkHyperTreeGridSource&, double)>([](vtkHyperTreeGridSource& self, double arg_0) -> void { return self.SetGridScale( arg_0); }))
    .function("SetDimensions", emscripten::select_overload<void(vtkHyperTreeGridSource&, std::uintptr_t)>([](vtkHyperTreeGridSource& self, std::uintptr_t arg_0) -> void { return self.SetDimensions(reinterpret_cast<unsigned int*>(arg_0 * sizeof(unsigned int))); }))
    .function("SetDimensions", emscripten::select_overload<void(vtkHyperTreeGridSource&, unsigned int, unsigned int, unsigned int)>([](vtkHyperTreeGridSource& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2) -> void { return self.SetDimensions( arg_0, arg_1, arg_2); }))
    .function("SetTransposedRootIndexing", &vtkHyperTreeGridSource::SetTransposedRootIndexing)
    .function("GetTransposedRootIndexing", &vtkHyperTreeGridSource::GetTransposedRootIndexing)
    .function("SetIndexingModeToKJI", &vtkHyperTreeGridSource::SetIndexingModeToKJI)
    .function("SetIndexingModeToIJK", &vtkHyperTreeGridSource::SetIndexingModeToIJK)
    .function("GetOrientation", &vtkHyperTreeGridSource::GetOrientation)
    .function("SetBranchFactor", &vtkHyperTreeGridSource::SetBranchFactor)
    .function("GetBranchFactorMinValue", &vtkHyperTreeGridSource::GetBranchFactorMinValue)
    .function("GetBranchFactorMaxValue", &vtkHyperTreeGridSource::GetBranchFactorMaxValue)
    .function("GetBranchFactor", &vtkHyperTreeGridSource::GetBranchFactor)
    .function("SetUseDescriptor", &vtkHyperTreeGridSource::SetUseDescriptor)
    .function("GetUseDescriptor", &vtkHyperTreeGridSource::GetUseDescriptor)
    .function("UseDescriptorOn", &vtkHyperTreeGridSource::UseDescriptorOn)
    .function("UseDescriptorOff", &vtkHyperTreeGridSource::UseDescriptorOff)
    .function("SetUseMask", &vtkHyperTreeGridSource::SetUseMask)
    .function("GetUseMask", &vtkHyperTreeGridSource::GetUseMask)
    .function("UseMaskOn", &vtkHyperTreeGridSource::UseMaskOn)
    .function("UseMaskOff", &vtkHyperTreeGridSource::UseMaskOff)
    .function("SetGenerateInterfaceFields", &vtkHyperTreeGridSource::SetGenerateInterfaceFields)
    .function("GetGenerateInterfaceFields", &vtkHyperTreeGridSource::GetGenerateInterfaceFields)
    .function("GenerateInterfaceFieldsOn", &vtkHyperTreeGridSource::GenerateInterfaceFieldsOn)
    .function("GenerateInterfaceFieldsOff", &vtkHyperTreeGridSource::GenerateInterfaceFieldsOff)
    .function("SetDescriptor", emscripten::optional_override([](vtkHyperTreeGridSource& self, const std::string & arg_0) -> void {  return self.SetDescriptor( arg_0.c_str());}))
    .function("GetDescriptor", emscripten::optional_override([](vtkHyperTreeGridSource& self) -> std::string {  return self.GetDescriptor();}))
    .function("SetMask", emscripten::optional_override([](vtkHyperTreeGridSource& self, const std::string & arg_0) -> void {  return self.SetMask( arg_0.c_str());}))
    .function("GetMask", emscripten::optional_override([](vtkHyperTreeGridSource& self) -> std::string {  return self.GetMask();}))
    .function("SetDescriptorBits", &vtkHyperTreeGridSource::SetDescriptorBits, emscripten::allow_raw_pointers())
    .function("GetDescriptorBits", &vtkHyperTreeGridSource::GetDescriptorBits, emscripten::allow_raw_pointers())
    .function("SetLevelZeroMaterialIndex", &vtkHyperTreeGridSource::SetLevelZeroMaterialIndex, emscripten::allow_raw_pointers())
    .function("SetMaskBits", &vtkHyperTreeGridSource::SetMaskBits, emscripten::allow_raw_pointers())
    .function("GetMaskBits", &vtkHyperTreeGridSource::GetMaskBits, emscripten::allow_raw_pointers())
    .function("SetQuadric", &vtkHyperTreeGridSource::SetQuadric, emscripten::allow_raw_pointers())
    .function("GetQuadric", &vtkHyperTreeGridSource::GetQuadric, emscripten::allow_raw_pointers())
    .function("GetQuadricCoefficients", emscripten::select_overload<std::uintptr_t(vtkHyperTreeGridSource&)>([](vtkHyperTreeGridSource& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetQuadricCoefficients()); }))
    .function("GetMTime", &vtkHyperTreeGridSource::GetMTime)
    .function("ConvertDescriptorStringToBitArray", &vtkHyperTreeGridSource::ConvertDescriptorStringToBitArray, emscripten::allow_raw_pointers())
    .function("ConvertMaskStringToBitArray", &vtkHyperTreeGridSource::ConvertMaskStringToBitArray, emscripten::allow_raw_pointers());
}
