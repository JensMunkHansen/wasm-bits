// JavaScript wrapper for vtkTesting with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkTestingRendering.js/vtkTestingRendering.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkTestingRendering.js/vtkTestingEmbinding.cxx \
 /home/jmh/github/vtk/Testing/Rendering/vtkTesting.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkRenderWindowInteractor.h"
#include "vtkAlgorithm.h"
#include "vtkDataSet.h"
#include "vtkDataArray.h"
#include "vtkMultiProcessController.h"
#include "vtkTesting.h"

EMSCRIPTEN_BINDINGS(vtkTestingRendering_vtkTesting_0_1_constants) {
  emscripten::constant("VTK_SKIP_RETURN_CODE", 125);
}
EMSCRIPTEN_BINDINGS(vtkTestingRendering_vtkTesting_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkTesting>(vtkTesting * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTesting_class) {
  using ReturnValue=vtkTesting::ReturnValue;
  emscripten::class_<vtkTesting, emscripten::base<vtkObject>>("vtkTesting")
    .smart_ptr<vtkSmartPointer<vtkTesting>>("vtkSmartPointer<vtkTesting>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTesting>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTesting::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTesting::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTesting::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTesting::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("FrontBufferOn", &vtkTesting::FrontBufferOn)
    .function("FrontBufferOff", &vtkTesting::FrontBufferOff)
    .function("GetFrontBuffer", &vtkTesting::GetFrontBuffer)
    .function("SetFrontBuffer", &vtkTesting::SetFrontBuffer)
    .function("RegressionTest", emscripten::select_overload<int(vtkTesting&, double)>([](vtkTesting& self, double arg_0) -> int { return self.RegressionTest( arg_0); }))
    .function("RegressionTest", emscripten::select_overload<int(vtkTesting&, const std::string&, double)>([](vtkTesting& self, const std::string& arg_0, double arg_1) -> int { return self.RegressionTest( arg_0, arg_1); }))
    .function("RegressionTest", emscripten::select_overload<int(vtkTesting&, vtkAlgorithm*, double)>([](vtkTesting& self, vtkAlgorithm* arg_0, double arg_1) -> int { return self.RegressionTest( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("CompareAverageOfL2Norm", emscripten::select_overload<int(vtkTesting&, vtkDataSet*, vtkDataSet*, double)>([](vtkTesting& self, vtkDataSet* arg_0, vtkDataSet* arg_1, double arg_2) -> int { return self.CompareAverageOfL2Norm( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("CompareAverageOfL2Norm", emscripten::select_overload<int(vtkTesting&, vtkDataArray*, vtkDataArray*, double)>([](vtkTesting& self, vtkDataArray* arg_0, vtkDataArray* arg_1, double arg_2) -> int { return self.CompareAverageOfL2Norm( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("SetRenderWindow", &vtkTesting::SetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetRenderWindow", &vtkTesting::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("SetValidImageFileName", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> void {  return self.SetValidImageFileName( arg_0.c_str());}))
    .function("GetValidImageFileName", emscripten::optional_override([](vtkTesting& self) -> std::string {  return self.GetValidImageFileName();}))
    .function("GetImageDifference", &vtkTesting::GetImageDifference)
    .function("AddArgument", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> void {  return self.AddArgument( arg_0.c_str());}))
    .function("GetArgument", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> std::string {  return self.GetArgument( arg_0.c_str());}))
    .function("CleanArguments", &vtkTesting::CleanArguments)
    .function("GetDataRoot", emscripten::optional_override([](vtkTesting& self) -> std::string {  return self.GetDataRoot();}))
    .function("SetDataRoot", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> void {  return self.SetDataRoot( arg_0.c_str());}))
    .function("GetTempDirectory", emscripten::optional_override([](vtkTesting& self) -> std::string {  return self.GetTempDirectory();}))
    .function("SetTempDirectory", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> void {  return self.SetTempDirectory( arg_0.c_str());}))
    .function("IsValidImageSpecified", &vtkTesting::IsValidImageSpecified)
    .function("IsInteractiveModeSpecified", &vtkTesting::IsInteractiveModeSpecified)
    .function("IsFlagSpecified", emscripten::optional_override([](vtkTesting& self, const std::string & arg_0) -> int {  return self.IsFlagSpecified( arg_0.c_str());}))
    .function("SetBorderOffset", &vtkTesting::SetBorderOffset)
    .function("GetBorderOffset", &vtkTesting::GetBorderOffset)
    .function("SetVerbose", &vtkTesting::SetVerbose)
    .function("GetVerbose", &vtkTesting::GetVerbose)
    .function("GetController", &vtkTesting::GetController, emscripten::allow_raw_pointers())
    .function("SetController", &vtkTesting::SetController, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkTestingRendering_vtkTesting_0_2_constants) {
    typedef vtkTesting::ReturnValue cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkTesting_ReturnValue_FAILED", vtkTesting::FAILED },
      { "vtkTesting_ReturnValue_PASSED", vtkTesting::PASSED },
      { "vtkTesting_ReturnValue_NOT_RUN", vtkTesting::NOT_RUN },
      { "vtkTesting_ReturnValue_DO_INTERACTOR", vtkTesting::DO_INTERACTOR },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
