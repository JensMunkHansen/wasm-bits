// JavaScript wrapper for vtkNIFTIImageHeader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkNIFTIImageHeaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkNIFTIImageHeader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNIFTIImageHeader.h"

EMSCRIPTEN_BINDINGS(vtkIOImage_vtkNIFTIImageHeader_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkNIFTIImageHeader>(vtkNIFTIImageHeader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNIFTIImageHeader_class) {
  using IntentCodeEnum=vtkNIFTIImageHeader::IntentCodeEnum;
  using XFormCodeEnum=vtkNIFTIImageHeader::XFormCodeEnum;
  using SliceCodeEnum=vtkNIFTIImageHeader::SliceCodeEnum;
  using UnitsXYZTEnum=vtkNIFTIImageHeader::UnitsXYZTEnum;
  using DataTypeEnum=vtkNIFTIImageHeader::DataTypeEnum;
  using HeaderSizeEnum=vtkNIFTIImageHeader::HeaderSizeEnum;
  emscripten::class_<vtkNIFTIImageHeader, emscripten::base<vtkObject>>("vtkNIFTIImageHeader")
    .smart_ptr<vtkSmartPointer<vtkNIFTIImageHeader>>("vtkSmartPointer<vtkNIFTIImageHeader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNIFTIImageHeader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNIFTIImageHeader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNIFTIImageHeader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNIFTIImageHeader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNIFTIImageHeader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNIFTIImageHeader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNIFTIImageHeader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMagic", emscripten::optional_override([](vtkNIFTIImageHeader& self) -> std::string {  return self.GetMagic();}))
    .function("GetVoxOffset", &vtkNIFTIImageHeader::GetVoxOffset)
    .function("GetDataType", &vtkNIFTIImageHeader::GetDataType)
    .function("GetBitPix", &vtkNIFTIImageHeader::GetBitPix)
    .function("GetDim", &vtkNIFTIImageHeader::GetDim)
    .function("GetPixDim", &vtkNIFTIImageHeader::GetPixDim)
    .function("SetIntentCode", &vtkNIFTIImageHeader::SetIntentCode)
    .function("GetIntentCode", &vtkNIFTIImageHeader::GetIntentCode)
    .function("SetIntentName", emscripten::optional_override([](vtkNIFTIImageHeader& self, const std::string & arg_0) -> void {  return self.SetIntentName( arg_0.c_str());}))
    .function("GetIntentName", emscripten::optional_override([](vtkNIFTIImageHeader& self) -> std::string {  return self.GetIntentName();}))
    .function("SetIntentP1", &vtkNIFTIImageHeader::SetIntentP1)
    .function("GetIntentP1", &vtkNIFTIImageHeader::GetIntentP1)
    .function("SetIntentP2", &vtkNIFTIImageHeader::SetIntentP2)
    .function("GetIntentP2", &vtkNIFTIImageHeader::GetIntentP2)
    .function("SetIntentP3", &vtkNIFTIImageHeader::SetIntentP3)
    .function("GetIntentP3", &vtkNIFTIImageHeader::GetIntentP3)
    .function("SetSclSlope", &vtkNIFTIImageHeader::SetSclSlope)
    .function("GetSclSlope", &vtkNIFTIImageHeader::GetSclSlope)
    .function("SetSclInter", &vtkNIFTIImageHeader::SetSclInter)
    .function("GetSclInter", &vtkNIFTIImageHeader::GetSclInter)
    .function("SetCalMin", &vtkNIFTIImageHeader::SetCalMin)
    .function("GetCalMin", &vtkNIFTIImageHeader::GetCalMin)
    .function("SetCalMax", &vtkNIFTIImageHeader::SetCalMax)
    .function("GetCalMax", &vtkNIFTIImageHeader::GetCalMax)
    .function("SetSliceDuration", &vtkNIFTIImageHeader::SetSliceDuration)
    .function("GetSliceDuration", &vtkNIFTIImageHeader::GetSliceDuration)
    .function("SetTOffset", &vtkNIFTIImageHeader::SetTOffset)
    .function("GetTOffset", &vtkNIFTIImageHeader::GetTOffset)
    .function("SetSliceStart", &vtkNIFTIImageHeader::SetSliceStart)
    .function("GetSliceStart", &vtkNIFTIImageHeader::GetSliceStart)
    .function("SetSliceEnd", &vtkNIFTIImageHeader::SetSliceEnd)
    .function("GetSliceEnd", &vtkNIFTIImageHeader::GetSliceEnd)
    .function("SetSliceCode", &vtkNIFTIImageHeader::SetSliceCode)
    .function("GetSliceCode", &vtkNIFTIImageHeader::GetSliceCode)
    .function("SetXYZTUnits", &vtkNIFTIImageHeader::SetXYZTUnits)
    .function("GetXYZTUnits", &vtkNIFTIImageHeader::GetXYZTUnits)
    .function("SetDimInfo", &vtkNIFTIImageHeader::SetDimInfo)
    .function("GetDimInfo", &vtkNIFTIImageHeader::GetDimInfo)
    .function("SetDescrip", emscripten::optional_override([](vtkNIFTIImageHeader& self, const std::string & arg_0) -> void {  return self.SetDescrip( arg_0.c_str());}))
    .function("GetDescrip", emscripten::optional_override([](vtkNIFTIImageHeader& self) -> std::string {  return self.GetDescrip();}))
    .function("SetAuxFile", emscripten::optional_override([](vtkNIFTIImageHeader& self, const std::string & arg_0) -> void {  return self.SetAuxFile( arg_0.c_str());}))
    .function("GetAuxFile", emscripten::optional_override([](vtkNIFTIImageHeader& self) -> std::string {  return self.GetAuxFile();}))
    .function("SetQFormCode", &vtkNIFTIImageHeader::SetQFormCode)
    .function("GetQFormCode", &vtkNIFTIImageHeader::GetQFormCode)
    .function("SetSFormCode", &vtkNIFTIImageHeader::SetSFormCode)
    .function("GetSFormCode", &vtkNIFTIImageHeader::GetSFormCode)
    .function("SetQuaternB", &vtkNIFTIImageHeader::SetQuaternB)
    .function("GetQuaternB", &vtkNIFTIImageHeader::GetQuaternB)
    .function("SetQuaternC", &vtkNIFTIImageHeader::SetQuaternC)
    .function("GetQuaternC", &vtkNIFTIImageHeader::GetQuaternC)
    .function("SetQuaternD", &vtkNIFTIImageHeader::SetQuaternD)
    .function("GetQuaternD", &vtkNIFTIImageHeader::GetQuaternD)
    .function("SetQOffsetX", &vtkNIFTIImageHeader::SetQOffsetX)
    .function("GetQOffsetX", &vtkNIFTIImageHeader::GetQOffsetX)
    .function("SetQOffsetY", &vtkNIFTIImageHeader::SetQOffsetY)
    .function("GetQOffsetY", &vtkNIFTIImageHeader::GetQOffsetY)
    .function("SetQOffsetZ", &vtkNIFTIImageHeader::SetQOffsetZ)
    .function("GetQOffsetZ", &vtkNIFTIImageHeader::GetQOffsetZ)
    .function("SetSRowX", emscripten::select_overload<void(vtkNIFTIImageHeader&, double, double, double, double)>([](vtkNIFTIImageHeader& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetSRowX( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetSRowY", emscripten::select_overload<void(vtkNIFTIImageHeader&, double, double, double, double)>([](vtkNIFTIImageHeader& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetSRowY( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetSRowZ", emscripten::select_overload<void(vtkNIFTIImageHeader&, double, double, double, double)>([](vtkNIFTIImageHeader& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetSRowZ( arg_0, arg_1, arg_2, arg_3); }))
    .function("Initialize", &vtkNIFTIImageHeader::Initialize)
    .function("DeepCopy", &vtkNIFTIImageHeader::DeepCopy, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkNIFTIImageHeader_0_2_constants) {
    typedef vtkNIFTIImageHeader::IntentCodeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[40] = {
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentNone", vtkNIFTIImageHeader::IntentNone },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentCorrel", vtkNIFTIImageHeader::IntentCorrel },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentTTest", vtkNIFTIImageHeader::IntentTTest },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentFTest", vtkNIFTIImageHeader::IntentFTest },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentZScore", vtkNIFTIImageHeader::IntentZScore },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentChiSQ", vtkNIFTIImageHeader::IntentChiSQ },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentBeta", vtkNIFTIImageHeader::IntentBeta },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentBinom", vtkNIFTIImageHeader::IntentBinom },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentGamma", vtkNIFTIImageHeader::IntentGamma },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentPoisson", vtkNIFTIImageHeader::IntentPoisson },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentNormal", vtkNIFTIImageHeader::IntentNormal },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentFTestNonc", vtkNIFTIImageHeader::IntentFTestNonc },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentChiSQNonc", vtkNIFTIImageHeader::IntentChiSQNonc },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentLogistic", vtkNIFTIImageHeader::IntentLogistic },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentLaplace", vtkNIFTIImageHeader::IntentLaplace },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentUniform", vtkNIFTIImageHeader::IntentUniform },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentTTestNonc", vtkNIFTIImageHeader::IntentTTestNonc },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentWeibull", vtkNIFTIImageHeader::IntentWeibull },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentChi", vtkNIFTIImageHeader::IntentChi },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentInvGauss", vtkNIFTIImageHeader::IntentInvGauss },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentExtVal", vtkNIFTIImageHeader::IntentExtVal },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentPVal", vtkNIFTIImageHeader::IntentPVal },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentLogPVal", vtkNIFTIImageHeader::IntentLogPVal },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentLog10PVal", vtkNIFTIImageHeader::IntentLog10PVal },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentEstimate", vtkNIFTIImageHeader::IntentEstimate },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentLabel", vtkNIFTIImageHeader::IntentLabel },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentNeuroName", vtkNIFTIImageHeader::IntentNeuroName },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentGenMatrix", vtkNIFTIImageHeader::IntentGenMatrix },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentSymMatrix", vtkNIFTIImageHeader::IntentSymMatrix },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentDispVect", vtkNIFTIImageHeader::IntentDispVect },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentVector", vtkNIFTIImageHeader::IntentVector },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentPointSet", vtkNIFTIImageHeader::IntentPointSet },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentTriangle", vtkNIFTIImageHeader::IntentTriangle },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentQuaternion", vtkNIFTIImageHeader::IntentQuaternion },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentDimless", vtkNIFTIImageHeader::IntentDimless },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentTimeSeries", vtkNIFTIImageHeader::IntentTimeSeries },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentNodeIndex", vtkNIFTIImageHeader::IntentNodeIndex },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentRGBVector", vtkNIFTIImageHeader::IntentRGBVector },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentRGBAVector", vtkNIFTIImageHeader::IntentRGBAVector },
      { "vtkNIFTIImageHeader_IntentCodeEnum_IntentShape", vtkNIFTIImageHeader::IntentShape },
  };
  for (int c = 0; c < 40; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkNIFTIImageHeader_1_2_constants) {
    typedef vtkNIFTIImageHeader::XFormCodeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkNIFTIImageHeader_XFormCodeEnum_XFormUnkown", vtkNIFTIImageHeader::XFormUnkown },
      { "vtkNIFTIImageHeader_XFormCodeEnum_XFormScannerAnat", vtkNIFTIImageHeader::XFormScannerAnat },
      { "vtkNIFTIImageHeader_XFormCodeEnum_XFormAlignedAnat", vtkNIFTIImageHeader::XFormAlignedAnat },
      { "vtkNIFTIImageHeader_XFormCodeEnum_XFormTalairach", vtkNIFTIImageHeader::XFormTalairach },
      { "vtkNIFTIImageHeader_XFormCodeEnum_XFormMNI152", vtkNIFTIImageHeader::XFormMNI152 },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkNIFTIImageHeader_2_2_constants) {
    typedef vtkNIFTIImageHeader::SliceCodeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[7] = {
      { "vtkNIFTIImageHeader_SliceCodeEnum_SliceUnknown", vtkNIFTIImageHeader::SliceUnknown },
      { "vtkNIFTIImageHeader_SliceCodeEnum_SliceSeqInc", vtkNIFTIImageHeader::SliceSeqInc },
      { "vtkNIFTIImageHeader_SliceCodeEnum_SliceSeqDec", vtkNIFTIImageHeader::SliceSeqDec },
      { "vtkNIFTIImageHeader_SliceCodeEnum_SliceAltInc", vtkNIFTIImageHeader::SliceAltInc },
      { "vtkNIFTIImageHeader_SliceCodeEnum_SliceAltDec", vtkNIFTIImageHeader::SliceAltDec },
      { "vtkNIFTIImageHeader_SliceCodeEnum_SliceAltInc2", vtkNIFTIImageHeader::SliceAltInc2 },
      { "vtkNIFTIImageHeader_SliceCodeEnum_SliceAltDec2", vtkNIFTIImageHeader::SliceAltDec2 },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkNIFTIImageHeader_3_2_constants) {
    typedef vtkNIFTIImageHeader::UnitsXYZTEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[12] = {
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsUnknown", vtkNIFTIImageHeader::UnitsUnknown },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsMeter", vtkNIFTIImageHeader::UnitsMeter },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsMM", vtkNIFTIImageHeader::UnitsMM },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsMicron", vtkNIFTIImageHeader::UnitsMicron },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsSpace", vtkNIFTIImageHeader::UnitsSpace },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsSec", vtkNIFTIImageHeader::UnitsSec },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsMSec", vtkNIFTIImageHeader::UnitsMSec },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsUSec", vtkNIFTIImageHeader::UnitsUSec },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsHz", vtkNIFTIImageHeader::UnitsHz },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsPPM", vtkNIFTIImageHeader::UnitsPPM },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsRads", vtkNIFTIImageHeader::UnitsRads },
      { "vtkNIFTIImageHeader_UnitsXYZTEnum_UnitsTime", vtkNIFTIImageHeader::UnitsTime },
  };
  for (int c = 0; c < 12; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkNIFTIImageHeader_4_2_constants) {
    typedef vtkNIFTIImageHeader::DataTypeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[16] = {
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeUInt8", vtkNIFTIImageHeader::TypeUInt8 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeInt16", vtkNIFTIImageHeader::TypeInt16 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeInt32", vtkNIFTIImageHeader::TypeInt32 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeFloat32", vtkNIFTIImageHeader::TypeFloat32 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeComplex64", vtkNIFTIImageHeader::TypeComplex64 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeFloat64", vtkNIFTIImageHeader::TypeFloat64 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeRGB24", vtkNIFTIImageHeader::TypeRGB24 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeInt8", vtkNIFTIImageHeader::TypeInt8 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeUInt16", vtkNIFTIImageHeader::TypeUInt16 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeUInt32", vtkNIFTIImageHeader::TypeUInt32 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeInt64", vtkNIFTIImageHeader::TypeInt64 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeUInt64", vtkNIFTIImageHeader::TypeUInt64 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeFloat128", vtkNIFTIImageHeader::TypeFloat128 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeComplex128", vtkNIFTIImageHeader::TypeComplex128 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeComplex256", vtkNIFTIImageHeader::TypeComplex256 },
      { "vtkNIFTIImageHeader_DataTypeEnum_TypeRGBA32", vtkNIFTIImageHeader::TypeRGBA32 },
  };
  for (int c = 0; c < 16; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkIOImage_vtkNIFTIImageHeader_5_2_constants) {
    typedef vtkNIFTIImageHeader::HeaderSizeEnum cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[2] = {
      { "vtkNIFTIImageHeader_HeaderSizeEnum_NIFTI1HeaderSize", vtkNIFTIImageHeader::NIFTI1HeaderSize },
      { "vtkNIFTIImageHeader_HeaderSizeEnum_NIFTI2HeaderSize", vtkNIFTIImageHeader::NIFTI2HeaderSize },
  };
  for (int c = 0; c < 2; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
