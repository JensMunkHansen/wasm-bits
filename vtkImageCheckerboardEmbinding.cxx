// JavaScript wrapper for vtkImageCheckerboard with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageCheckerboardEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageCheckerboard.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkImageCheckerboard.h"

template<> void emscripten::internal::raw_destructor<vtkImageCheckerboard>(vtkImageCheckerboard * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCheckerboard_class) {
  emscripten::class_<vtkImageCheckerboard, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageCheckerboard")
    .smart_ptr<vtkSmartPointer<vtkImageCheckerboard>>("vtkSmartPointer<vtkImageCheckerboard>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageCheckerboard>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCheckerboard::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCheckerboard& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCheckerboard::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCheckerboard::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCheckerboard::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCheckerboard& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfDivisions", emscripten::select_overload<void(vtkImageCheckerboard&, int, int, int)>([](vtkImageCheckerboard& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetNumberOfDivisions( arg_0, arg_1, arg_2); }))
    .function("SetInput1Data", &vtkImageCheckerboard::SetInput1Data, emscripten::allow_raw_pointers())
    .function("SetInput2Data", &vtkImageCheckerboard::SetInput2Data, emscripten::allow_raw_pointers());
}
