// JavaScript wrapper for vtkMedicalImageProperties with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkMedicalImagePropertiesEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkMedicalImageProperties.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMedicalImageProperties.h"

template<> void emscripten::internal::raw_destructor<vtkMedicalImageProperties>(vtkMedicalImageProperties * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMedicalImageProperties_class) {
  emscripten::class_<vtkMedicalImageProperties, emscripten::base<vtkObject>>("vtkMedicalImageProperties")
    .smart_ptr<vtkSmartPointer<vtkMedicalImageProperties>>("vtkSmartPointer<vtkMedicalImageProperties>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMedicalImageProperties>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMedicalImageProperties::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMedicalImageProperties::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMedicalImageProperties::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMedicalImageProperties::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Clear", &vtkMedicalImageProperties::Clear)
    .function("SetPatientName", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetPatientName( arg_0.c_str());}))
    .function("GetPatientName", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetPatientName();}))
    .function("SetPatientID", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetPatientID( arg_0.c_str());}))
    .function("GetPatientID", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetPatientID();}))
    .function("SetPatientAge", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetPatientAge( arg_0.c_str());}))
    .function("GetPatientAge", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetPatientAge();}))
    .function("GetPatientAgeYear", &vtkMedicalImageProperties::GetPatientAgeYear)
    .function("GetPatientAgeMonth", &vtkMedicalImageProperties::GetPatientAgeMonth)
    .function("GetPatientAgeWeek", &vtkMedicalImageProperties::GetPatientAgeWeek)
    .function("GetPatientAgeDay", &vtkMedicalImageProperties::GetPatientAgeDay)
    .function("SetPatientSex", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetPatientSex( arg_0.c_str());}))
    .function("GetPatientSex", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetPatientSex();}))
    .function("SetPatientBirthDate", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetPatientBirthDate( arg_0.c_str());}))
    .function("GetPatientBirthDate", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetPatientBirthDate();}))
    .function("GetPatientBirthDateYear", &vtkMedicalImageProperties::GetPatientBirthDateYear)
    .function("GetPatientBirthDateMonth", &vtkMedicalImageProperties::GetPatientBirthDateMonth)
    .function("GetPatientBirthDateDay", &vtkMedicalImageProperties::GetPatientBirthDateDay)
    .function("SetStudyDate", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetStudyDate( arg_0.c_str());}))
    .function("GetStudyDate", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetStudyDate();}))
    .function("SetAcquisitionDate", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetAcquisitionDate( arg_0.c_str());}))
    .function("GetAcquisitionDate", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetAcquisitionDate();}))
    .function("GetAcquisitionDateYear", &vtkMedicalImageProperties::GetAcquisitionDateYear)
    .function("GetAcquisitionDateMonth", &vtkMedicalImageProperties::GetAcquisitionDateMonth)
    .function("GetAcquisitionDateDay", &vtkMedicalImageProperties::GetAcquisitionDateDay)
    .function("SetStudyTime", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetStudyTime( arg_0.c_str());}))
    .function("GetStudyTime", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetStudyTime();}))
    .function("SetAcquisitionTime", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetAcquisitionTime( arg_0.c_str());}))
    .function("GetAcquisitionTime", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetAcquisitionTime();}))
    .function("SetImageDate", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetImageDate( arg_0.c_str());}))
    .function("GetImageDate", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetImageDate();}))
    .function("GetImageDateYear", &vtkMedicalImageProperties::GetImageDateYear)
    .function("GetImageDateMonth", &vtkMedicalImageProperties::GetImageDateMonth)
    .function("GetImageDateDay", &vtkMedicalImageProperties::GetImageDateDay)
    .class_function("GetDateAsLocale", emscripten::optional_override([]( const std::string & arg_0, std::uintptr_t arg_1) -> int {  return vtkMedicalImageProperties::GetDateAsLocale( arg_0.c_str(),reinterpret_cast<char*>(arg_1 * sizeof(char)));}))
    .function("SetImageTime", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetImageTime( arg_0.c_str());}))
    .function("GetImageTime", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetImageTime();}))
    .function("SetImageNumber", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetImageNumber( arg_0.c_str());}))
    .function("GetImageNumber", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetImageNumber();}))
    .function("SetSeriesNumber", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetSeriesNumber( arg_0.c_str());}))
    .function("GetSeriesNumber", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetSeriesNumber();}))
    .function("SetSeriesDescription", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetSeriesDescription( arg_0.c_str());}))
    .function("GetSeriesDescription", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetSeriesDescription();}))
    .function("SetStudyID", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetStudyID( arg_0.c_str());}))
    .function("GetStudyID", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetStudyID();}))
    .function("SetStudyDescription", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetStudyDescription( arg_0.c_str());}))
    .function("GetStudyDescription", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetStudyDescription();}))
    .function("SetModality", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetModality( arg_0.c_str());}))
    .function("GetModality", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetModality();}))
    .function("SetManufacturer", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetManufacturer( arg_0.c_str());}))
    .function("GetManufacturer", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetManufacturer();}))
    .function("SetManufacturerModelName", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetManufacturerModelName( arg_0.c_str());}))
    .function("GetManufacturerModelName", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetManufacturerModelName();}))
    .function("SetStationName", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetStationName( arg_0.c_str());}))
    .function("GetStationName", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetStationName();}))
    .function("SetInstitutionName", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetInstitutionName( arg_0.c_str());}))
    .function("GetInstitutionName", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetInstitutionName();}))
    .function("SetConvolutionKernel", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetConvolutionKernel( arg_0.c_str());}))
    .function("GetConvolutionKernel", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetConvolutionKernel();}))
    .function("SetSliceThickness", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetSliceThickness( arg_0.c_str());}))
    .function("GetSliceThickness", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetSliceThickness();}))
    .function("GetSliceThicknessAsDouble", &vtkMedicalImageProperties::GetSliceThicknessAsDouble)
    .function("SetKVP", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetKVP( arg_0.c_str());}))
    .function("GetKVP", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetKVP();}))
    .function("SetGantryTilt", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetGantryTilt( arg_0.c_str());}))
    .function("GetGantryTilt", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetGantryTilt();}))
    .function("GetGantryTiltAsDouble", &vtkMedicalImageProperties::GetGantryTiltAsDouble)
    .function("SetEchoTime", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetEchoTime( arg_0.c_str());}))
    .function("GetEchoTime", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetEchoTime();}))
    .function("SetEchoTrainLength", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetEchoTrainLength( arg_0.c_str());}))
    .function("GetEchoTrainLength", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetEchoTrainLength();}))
    .function("SetRepetitionTime", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetRepetitionTime( arg_0.c_str());}))
    .function("GetRepetitionTime", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetRepetitionTime();}))
    .function("SetExposureTime", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetExposureTime( arg_0.c_str());}))
    .function("GetExposureTime", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetExposureTime();}))
    .function("SetXRayTubeCurrent", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetXRayTubeCurrent( arg_0.c_str());}))
    .function("GetXRayTubeCurrent", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetXRayTubeCurrent();}))
    .function("SetExposure", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> void {  return self.SetExposure( arg_0.c_str());}))
    .function("GetExposure", emscripten::optional_override([](vtkMedicalImageProperties& self) -> std::string {  return self.GetExposure();}))
    .function("SetDirectionCosine", emscripten::select_overload<void(vtkMedicalImageProperties&, double, double, double, double, double, double)>([](vtkMedicalImageProperties& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetDirectionCosine( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("AddUserDefinedValue", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0, const std::string & arg_1) -> void {  return self.AddUserDefinedValue( arg_0.c_str(), arg_1.c_str());}))
    .function("GetUserDefinedValue", emscripten::optional_override([](vtkMedicalImageProperties& self, const std::string & arg_0) -> std::string {  return self.GetUserDefinedValue( arg_0.c_str());}))
    .function("GetNumberOfUserDefinedValues", &vtkMedicalImageProperties::GetNumberOfUserDefinedValues)
    .function("GetUserDefinedNameByIndex", emscripten::optional_override([](vtkMedicalImageProperties& self, unsigned int arg_0) -> std::string {  return self.GetUserDefinedNameByIndex( arg_0);}))
    .function("GetUserDefinedValueByIndex", emscripten::optional_override([](vtkMedicalImageProperties& self, unsigned int arg_0) -> std::string {  return self.GetUserDefinedValueByIndex( arg_0);}))
    .function("RemoveAllUserDefinedValues", &vtkMedicalImageProperties::RemoveAllUserDefinedValues)
    .function("AddWindowLevelPreset", &vtkMedicalImageProperties::AddWindowLevelPreset)
    .function("RemoveWindowLevelPreset", &vtkMedicalImageProperties::RemoveWindowLevelPreset)
    .function("RemoveAllWindowLevelPresets", &vtkMedicalImageProperties::RemoveAllWindowLevelPresets)
    .function("GetNumberOfWindowLevelPresets", &vtkMedicalImageProperties::GetNumberOfWindowLevelPresets)
    .function("HasWindowLevelPreset", &vtkMedicalImageProperties::HasWindowLevelPreset)
    .function("GetWindowLevelPresetIndex", &vtkMedicalImageProperties::GetWindowLevelPresetIndex)
    .function("GetNthWindowLevelPreset", emscripten::select_overload<int(vtkMedicalImageProperties&, int, std::uintptr_t, std::uintptr_t)>([](vtkMedicalImageProperties& self, int arg_0, std::uintptr_t arg_1, std::uintptr_t arg_2) -> int { return self.GetNthWindowLevelPreset( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double)),reinterpret_cast<double*>(arg_2 * sizeof(double))); }))
    .function("SetNthWindowLevelPresetComment", emscripten::optional_override([](vtkMedicalImageProperties& self, int arg_0, const std::string & arg_1) -> void {  return self.SetNthWindowLevelPresetComment( arg_0, arg_1.c_str());}))
    .function("GetNthWindowLevelPresetComment", emscripten::optional_override([](vtkMedicalImageProperties& self, int arg_0) -> std::string {  return self.GetNthWindowLevelPresetComment( arg_0);}))
    .function("GetInstanceUIDFromSliceID", emscripten::optional_override([](vtkMedicalImageProperties& self, int arg_0, int arg_1) -> std::string {  return self.GetInstanceUIDFromSliceID( arg_0, arg_1);}))
    .function("SetInstanceUIDFromSliceID", emscripten::optional_override([](vtkMedicalImageProperties& self, int arg_0, int arg_1, const std::string & arg_2) -> void {  return self.SetInstanceUIDFromSliceID( arg_0, arg_1, arg_2.c_str());}))
    .function("GetOrientationType", &vtkMedicalImageProperties::GetOrientationType)
    .function("SetOrientationType", &vtkMedicalImageProperties::SetOrientationType)
    .class_function("GetStringFromOrientationType", emscripten::optional_override([]( unsigned int arg_0) -> std::string {  return vtkMedicalImageProperties::GetStringFromOrientationType( arg_0);}))
    .function("DeepCopy", &vtkMedicalImageProperties::DeepCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkMedicalImageProperties_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkMedicalImageProperties_AXIAL", vtkMedicalImageProperties::AXIAL },
      { "vtkMedicalImageProperties_CORONAL", vtkMedicalImageProperties::CORONAL },
      { "vtkMedicalImageProperties_SAGITTAL", vtkMedicalImageProperties::SAGITTAL },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
