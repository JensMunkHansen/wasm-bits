// JavaScript wrapper for vtkMultiObjectMassProperties with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMultiObjectMassPropertiesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMultiObjectMassProperties.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiObjectMassProperties.h"

template<> void emscripten::internal::raw_destructor<vtkMultiObjectMassProperties>(vtkMultiObjectMassProperties * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiObjectMassProperties_class) {
  emscripten::class_<vtkMultiObjectMassProperties, emscripten::base<vtkPolyDataAlgorithm>>("vtkMultiObjectMassProperties")
    .smart_ptr<vtkSmartPointer<vtkMultiObjectMassProperties>>("vtkSmartPointer<vtkMultiObjectMassProperties>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiObjectMassProperties>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiObjectMassProperties::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiObjectMassProperties& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiObjectMassProperties::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiObjectMassProperties::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiObjectMassProperties::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiObjectMassProperties& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSkipValidityCheck", &vtkMultiObjectMassProperties::SetSkipValidityCheck)
    .function("GetSkipValidityCheck", &vtkMultiObjectMassProperties::GetSkipValidityCheck)
    .function("SkipValidityCheckOn", &vtkMultiObjectMassProperties::SkipValidityCheckOn)
    .function("SkipValidityCheckOff", &vtkMultiObjectMassProperties::SkipValidityCheckOff)
    .function("SetObjectIdsArrayName", emscripten::optional_override([](vtkMultiObjectMassProperties& self, const std::string & arg_0) -> void {  return self.SetObjectIdsArrayName( arg_0.c_str());}))
    .function("GetObjectIdsArrayName", emscripten::optional_override([](vtkMultiObjectMassProperties& self) -> std::string {  return self.GetObjectIdsArrayName();}))
    .function("GetNumberOfObjects", &vtkMultiObjectMassProperties::GetNumberOfObjects)
    .function("GetAllValid", &vtkMultiObjectMassProperties::GetAllValid)
    .function("GetTotalVolume", &vtkMultiObjectMassProperties::GetTotalVolume)
    .function("GetTotalArea", &vtkMultiObjectMassProperties::GetTotalArea);
}
