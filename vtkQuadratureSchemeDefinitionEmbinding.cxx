// JavaScript wrapper for vtkQuadratureSchemeDefinition with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadratureSchemeDefinitionEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadratureSchemeDefinition.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationQuadratureSchemeDefinitionVectorKey.h"
#include "vtkInformationStringKey.h"
#include "vtkXMLDataElement.h"
#include "vtkQuadratureSchemeDefinition.h"

template<> void emscripten::internal::raw_destructor<vtkQuadratureSchemeDefinition>(vtkQuadratureSchemeDefinition * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadratureSchemeDefinition_class) {
  emscripten::class_<vtkQuadratureSchemeDefinition, emscripten::base<vtkObject>>("vtkQuadratureSchemeDefinition")
    .smart_ptr<vtkSmartPointer<vtkQuadratureSchemeDefinition>>("vtkSmartPointer<vtkQuadratureSchemeDefinition>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkQuadratureSchemeDefinition>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadratureSchemeDefinition::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadratureSchemeDefinition& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadratureSchemeDefinition::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadratureSchemeDefinition::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadratureSchemeDefinition::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadratureSchemeDefinition& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("DICTIONARY", &vtkQuadratureSchemeDefinition::DICTIONARY, emscripten::allow_raw_pointers())
    .class_function("QUADRATURE_OFFSET_ARRAY_NAME", &vtkQuadratureSchemeDefinition::QUADRATURE_OFFSET_ARRAY_NAME, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkQuadratureSchemeDefinition::DeepCopy, emscripten::allow_raw_pointers())
    .function("SaveState", &vtkQuadratureSchemeDefinition::SaveState, emscripten::allow_raw_pointers())
    .function("RestoreState", &vtkQuadratureSchemeDefinition::RestoreState, emscripten::allow_raw_pointers())
    .function("Clear", &vtkQuadratureSchemeDefinition::Clear)
    .function("Initialize", emscripten::select_overload<void(vtkQuadratureSchemeDefinition&, int, int, int, std::uintptr_t)>([](vtkQuadratureSchemeDefinition& self, int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3) -> void { return self.Initialize( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double))); }))
    .function("Initialize", emscripten::select_overload<void(vtkQuadratureSchemeDefinition&, int, int, int, std::uintptr_t, std::uintptr_t)>([](vtkQuadratureSchemeDefinition& self, int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4) -> void { return self.Initialize( arg_0, arg_1, arg_2,reinterpret_cast<double*>(arg_3 * sizeof(double)),reinterpret_cast<double*>(arg_4 * sizeof(double))); }))
    .function("GetCellType", &vtkQuadratureSchemeDefinition::GetCellType)
    .function("GetQuadratureKey", &vtkQuadratureSchemeDefinition::GetQuadratureKey)
    .function("GetNumberOfNodes", &vtkQuadratureSchemeDefinition::GetNumberOfNodes)
    .function("GetNumberOfQuadraturePoints", &vtkQuadratureSchemeDefinition::GetNumberOfQuadraturePoints)
    .function("GetShapeFunctionWeights", emscripten::select_overload<std::uintptr_t(vtkQuadratureSchemeDefinition&)>([](vtkQuadratureSchemeDefinition& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetShapeFunctionWeights()); }))
    .function("GetShapeFunctionWeights", emscripten::select_overload<std::uintptr_t(vtkQuadratureSchemeDefinition&, int)>([](vtkQuadratureSchemeDefinition& self, int arg_0) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetShapeFunctionWeights( arg_0)); }))
    .function("GetQuadratureWeights", emscripten::optional_override([](vtkQuadratureSchemeDefinition& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetQuadratureWeights()) / sizeof(double);}));
}
