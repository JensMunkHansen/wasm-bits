// JavaScript wrapper for vtkPCAStatistics with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkFiltersStatistics.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersStatistics.js/vtkPCAStatisticsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Statistics/vtkPCAStatistics.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTable.h"
#include "vtkDoubleArray.h"
#include "vtkPCAStatistics.h"

EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkPCAStatistics_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkPCAStatistics>(vtkPCAStatistics * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPCAStatistics_class) {
  using NormalizationType=vtkPCAStatistics::NormalizationType;
  using ProjectionType=vtkPCAStatistics::ProjectionType;
  emscripten::class_<vtkPCAStatistics, emscripten::base<vtkMultiCorrelativeStatistics>>("vtkPCAStatistics")
    .smart_ptr<vtkSmartPointer<vtkPCAStatistics>>("vtkSmartPointer<vtkPCAStatistics>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPCAStatistics>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCAStatistics::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPCAStatistics& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPCAStatistics::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPCAStatistics::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPCAStatistics::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPCAStatistics& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNormalizationScheme", &vtkPCAStatistics::SetNormalizationScheme)
    .function("GetNormalizationScheme", &vtkPCAStatistics::GetNormalizationScheme)
    .function("SetNormalizationSchemeByName", emscripten::optional_override([](vtkPCAStatistics& self, const std::string & arg_0) -> void {  return self.SetNormalizationSchemeByName( arg_0.c_str());}))
    .function("GetNormalizationSchemeName", emscripten::optional_override([](vtkPCAStatistics& self, int arg_0) -> std::string {  return self.GetNormalizationSchemeName( arg_0);}))
    .function("GetSpecifiedNormalization", &vtkPCAStatistics::GetSpecifiedNormalization, emscripten::allow_raw_pointers())
    .function("SetSpecifiedNormalization", &vtkPCAStatistics::SetSpecifiedNormalization, emscripten::allow_raw_pointers())
    .function("GetEigenvalues", emscripten::select_overload<void(vtkPCAStatistics&, int, vtkDoubleArray*)>([](vtkPCAStatistics& self, int arg_0, vtkDoubleArray* arg_1) -> void { return self.GetEigenvalues( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetEigenvalues", emscripten::select_overload<void(vtkPCAStatistics&, vtkDoubleArray*)>([](vtkPCAStatistics& self, vtkDoubleArray* arg_0) -> void { return self.GetEigenvalues( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetEigenvalue", emscripten::select_overload<double(vtkPCAStatistics&, int, int)>([](vtkPCAStatistics& self, int arg_0, int arg_1) -> double { return self.GetEigenvalue( arg_0, arg_1); }))
    .function("GetEigenvalue", emscripten::select_overload<double(vtkPCAStatistics&, int)>([](vtkPCAStatistics& self, int arg_0) -> double { return self.GetEigenvalue( arg_0); }))
    .function("GetEigenvectors", emscripten::select_overload<void(vtkPCAStatistics&, int, vtkDoubleArray*)>([](vtkPCAStatistics& self, int arg_0, vtkDoubleArray* arg_1) -> void { return self.GetEigenvectors( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetEigenvectors", emscripten::select_overload<void(vtkPCAStatistics&, vtkDoubleArray*)>([](vtkPCAStatistics& self, vtkDoubleArray* arg_0) -> void { return self.GetEigenvectors( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetEigenvector", emscripten::select_overload<void(vtkPCAStatistics&, int, vtkDoubleArray*)>([](vtkPCAStatistics& self, int arg_0, vtkDoubleArray* arg_1) -> void { return self.GetEigenvector( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetEigenvector", emscripten::select_overload<void(vtkPCAStatistics&, int, int, vtkDoubleArray*)>([](vtkPCAStatistics& self, int arg_0, int arg_1, vtkDoubleArray* arg_2) -> void { return self.GetEigenvector( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetBasisScheme", &vtkPCAStatistics::SetBasisScheme)
    .function("GetBasisScheme", &vtkPCAStatistics::GetBasisScheme)
    .function("GetBasisSchemeName", emscripten::optional_override([](vtkPCAStatistics& self, int arg_0) -> std::string {  return self.GetBasisSchemeName( arg_0);}))
    .function("SetBasisSchemeByName", emscripten::optional_override([](vtkPCAStatistics& self, const std::string & arg_0) -> void {  return self.SetBasisSchemeByName( arg_0.c_str());}))
    .function("SetFixedBasisSize", &vtkPCAStatistics::SetFixedBasisSize)
    .function("GetFixedBasisSize", &vtkPCAStatistics::GetFixedBasisSize)
    .function("SetFixedBasisEnergy", &vtkPCAStatistics::SetFixedBasisEnergy)
    .function("GetFixedBasisEnergyMinValue", &vtkPCAStatistics::GetFixedBasisEnergyMinValue)
    .function("GetFixedBasisEnergyMaxValue", &vtkPCAStatistics::GetFixedBasisEnergyMaxValue)
    .function("GetFixedBasisEnergy", &vtkPCAStatistics::GetFixedBasisEnergy)
    .function("SetParameter", emscripten::optional_override([](vtkPCAStatistics& self, const std::string & arg_0, int arg_1, vtkVariant arg_2) -> bool {  return self.SetParameter( arg_0.c_str(), arg_1, arg_2);}));
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkPCAStatistics_0_2_constants) {
    typedef vtkPCAStatistics::NormalizationType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[5] = {
      { "vtkPCAStatistics_NormalizationType_NONE", vtkPCAStatistics::NONE },
      { "vtkPCAStatistics_NormalizationType_TRIANGLE_SPECIFIED", vtkPCAStatistics::TRIANGLE_SPECIFIED },
      { "vtkPCAStatistics_NormalizationType_DIAGONAL_SPECIFIED", vtkPCAStatistics::DIAGONAL_SPECIFIED },
      { "vtkPCAStatistics_NormalizationType_DIAGONAL_VARIANCE", vtkPCAStatistics::DIAGONAL_VARIANCE },
      { "vtkPCAStatistics_NormalizationType_NUM_NORMALIZATION_SCHEMES", vtkPCAStatistics::NUM_NORMALIZATION_SCHEMES },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
EMSCRIPTEN_BINDINGS(vtkFiltersStatistics_vtkPCAStatistics_1_2_constants) {
    typedef vtkPCAStatistics::ProjectionType cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkPCAStatistics_ProjectionType_FULL_BASIS", vtkPCAStatistics::FULL_BASIS },
      { "vtkPCAStatistics_ProjectionType_FIXED_BASIS_SIZE", vtkPCAStatistics::FIXED_BASIS_SIZE },
      { "vtkPCAStatistics_ProjectionType_FIXED_BASIS_ENERGY", vtkPCAStatistics::FIXED_BASIS_ENERGY },
      { "vtkPCAStatistics_ProjectionType_NUM_BASIS_SCHEMES", vtkPCAStatistics::NUM_BASIS_SCHEMES },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
