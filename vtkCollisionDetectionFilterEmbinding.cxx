// JavaScript wrapper for vtkCollisionDetectionFilter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkFiltersModeling.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersModeling.js/vtkCollisionDetectionFilterEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Modeling/vtkCollisionDetectionFilter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkIdTypeArray.h"
#include "vtkAlgorithmOutput.h"
#include "vtkLinearTransform.h"
#include "vtkMatrix4x4.h"
#include "vtkCollisionDetectionFilter.h"

EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkCollisionDetectionFilter_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkCollisionDetectionFilter>(vtkCollisionDetectionFilter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCollisionDetectionFilter_class) {
  using CollisionModes=vtkCollisionDetectionFilter::CollisionModes;
  emscripten::class_<vtkCollisionDetectionFilter, emscripten::base<vtkPolyDataAlgorithm>>("vtkCollisionDetectionFilter")
    .smart_ptr<vtkSmartPointer<vtkCollisionDetectionFilter>>("vtkSmartPointer<vtkCollisionDetectionFilter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCollisionDetectionFilter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollisionDetectionFilter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCollisionDetectionFilter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCollisionDetectionFilter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCollisionDetectionFilter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCollisionDetectionFilter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCollisionDetectionFilter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCollisionMode", &vtkCollisionDetectionFilter::SetCollisionMode)
    .function("GetCollisionModeMinValue", &vtkCollisionDetectionFilter::GetCollisionModeMinValue)
    .function("GetCollisionModeMaxValue", &vtkCollisionDetectionFilter::GetCollisionModeMaxValue)
    .function("GetCollisionMode", &vtkCollisionDetectionFilter::GetCollisionMode)
    .function("SetCollisionModeToAllContacts", &vtkCollisionDetectionFilter::SetCollisionModeToAllContacts)
    .function("SetCollisionModeToFirstContact", &vtkCollisionDetectionFilter::SetCollisionModeToFirstContact)
    .function("SetCollisionModeToHalfContacts", &vtkCollisionDetectionFilter::SetCollisionModeToHalfContacts)
    .function("GetCollisionModeAsString", emscripten::optional_override([](vtkCollisionDetectionFilter& self) -> std::string {  return self.GetCollisionModeAsString();}))
    .function("SetInputData", &vtkCollisionDetectionFilter::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInputData", &vtkCollisionDetectionFilter::GetInputData, emscripten::allow_raw_pointers())
    .function("GetContactCells", &vtkCollisionDetectionFilter::GetContactCells, emscripten::allow_raw_pointers())
    .function("GetContactsOutputPort", &vtkCollisionDetectionFilter::GetContactsOutputPort, emscripten::allow_raw_pointers())
    .function("GetContactsOutput", &vtkCollisionDetectionFilter::GetContactsOutput, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkCollisionDetectionFilter::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkCollisionDetectionFilter::GetTransform, emscripten::allow_raw_pointers())
    .function("SetMatrix", &vtkCollisionDetectionFilter::SetMatrix, emscripten::allow_raw_pointers())
    .function("GetMatrix", &vtkCollisionDetectionFilter::GetMatrix, emscripten::allow_raw_pointers())
    .function("SetBoxTolerance", &vtkCollisionDetectionFilter::SetBoxTolerance)
    .function("GetBoxTolerance", &vtkCollisionDetectionFilter::GetBoxTolerance)
    .function("SetCellTolerance", &vtkCollisionDetectionFilter::SetCellTolerance)
    .function("GetCellTolerance", &vtkCollisionDetectionFilter::GetCellTolerance)
    .function("SetGenerateScalars", &vtkCollisionDetectionFilter::SetGenerateScalars)
    .function("GetGenerateScalars", &vtkCollisionDetectionFilter::GetGenerateScalars)
    .function("GenerateScalarsOn", &vtkCollisionDetectionFilter::GenerateScalarsOn)
    .function("GenerateScalarsOff", &vtkCollisionDetectionFilter::GenerateScalarsOff)
    .function("GetNumberOfContacts", &vtkCollisionDetectionFilter::GetNumberOfContacts)
    .function("GetNumberOfBoxTests", &vtkCollisionDetectionFilter::GetNumberOfBoxTests)
    .function("SetNumberOfCellsPerNode", &vtkCollisionDetectionFilter::SetNumberOfCellsPerNode)
    .function("GetNumberOfCellsPerNode", &vtkCollisionDetectionFilter::GetNumberOfCellsPerNode)
    .function("SetOpacity", &vtkCollisionDetectionFilter::SetOpacity)
    .function("GetOpacityMinValue", &vtkCollisionDetectionFilter::GetOpacityMinValue)
    .function("GetOpacityMaxValue", &vtkCollisionDetectionFilter::GetOpacityMaxValue)
    .function("GetOpacity", &vtkCollisionDetectionFilter::GetOpacity)
    .function("GetMTime", &vtkCollisionDetectionFilter::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkFiltersModeling_vtkCollisionDetectionFilter_0_2_constants) {
    typedef vtkCollisionDetectionFilter::CollisionModes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkCollisionDetectionFilter_CollisionModes_VTK_ALL_CONTACTS", vtkCollisionDetectionFilter::VTK_ALL_CONTACTS },
      { "vtkCollisionDetectionFilter_CollisionModes_VTK_FIRST_CONTACT", vtkCollisionDetectionFilter::VTK_FIRST_CONTACT },
      { "vtkCollisionDetectionFilter_CollisionModes_VTK_HALF_CONTACTS", vtkCollisionDetectionFilter::VTK_HALF_CONTACTS },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
