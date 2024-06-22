// JavaScript wrapper for vtkImageLogic with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImagingMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImageLogicEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Math/vtkImageLogic.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkImageLogic.h"

EMSCRIPTEN_BINDINGS(vtkImagingMath_vtkImageLogic_0_1_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "VTK_AND", 0 },
      { "VTK_OR", 1 },
      { "VTK_XOR", 2 },
      { "VTK_NAND", 3 },
      { "VTK_NOR", 4 },
      { "VTK_NOT", 5 },
      { "VTK_NOP", 6 },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageLogic>(vtkImageLogic * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageLogic_class) {
  emscripten::class_<vtkImageLogic, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageLogic")
    .smart_ptr<vtkSmartPointer<vtkImageLogic>>("vtkSmartPointer<vtkImageLogic>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageLogic>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLogic::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageLogic& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageLogic::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageLogic::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageLogic::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageLogic& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOperation", &vtkImageLogic::SetOperation)
    .function("GetOperation", &vtkImageLogic::GetOperation)
    .function("SetOperationToAnd", &vtkImageLogic::SetOperationToAnd)
    .function("SetOperationToOr", &vtkImageLogic::SetOperationToOr)
    .function("SetOperationToXor", &vtkImageLogic::SetOperationToXor)
    .function("SetOperationToNand", &vtkImageLogic::SetOperationToNand)
    .function("SetOperationToNor", &vtkImageLogic::SetOperationToNor)
    .function("SetOperationToNot", &vtkImageLogic::SetOperationToNot)
    .function("SetOutputTrueValue", &vtkImageLogic::SetOutputTrueValue)
    .function("GetOutputTrueValue", &vtkImageLogic::GetOutputTrueValue)
    .function("SetInput1Data", &vtkImageLogic::SetInput1Data, emscripten::allow_raw_pointers())
    .function("SetInput2Data", &vtkImageLogic::SetInput2Data, emscripten::allow_raw_pointers());
}
