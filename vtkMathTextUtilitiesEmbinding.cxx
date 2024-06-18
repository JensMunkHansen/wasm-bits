// JavaScript wrapper for vtkMathTextUtilities with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkRenderingFreeType.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingFreeType.js/vtkMathTextUtilitiesEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/FreeType/vtkMathTextUtilities.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTextProperty.h"
#include "vtkTextRenderer.h"
#include "vtkImageData.h"
#include "vtkPath.h"
#include "vtkMathTextUtilities.h"


EMSCRIPTEN_BINDINGS(vtkMathTextUtilitiesCleanup_class) {
  emscripten::class_<vtkMathTextUtilitiesCleanup>("vtkMathTextUtilitiesCleanup")
    .smart_ptr<std::shared_ptr<vtkMathTextUtilitiesCleanup>>("std::shared_ptr<vtkMathTextUtilitiesCleanup>")
    .constructor(&std::make_shared<vtkMathTextUtilitiesCleanup>);
}
template<> void emscripten::internal::raw_destructor<vtkMathTextUtilities>(vtkMathTextUtilities * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMathTextUtilities_class) {
  emscripten::class_<vtkMathTextUtilities, emscripten::base<vtkObject>>("vtkMathTextUtilities")
    .smart_ptr<vtkSmartPointer<vtkMathTextUtilities>>("vtkSmartPointer<vtkMathTextUtilities>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMathTextUtilities>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMathTextUtilities::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMathTextUtilities& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMathTextUtilities::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMathTextUtilities::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMathTextUtilities::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMathTextUtilities& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("IsAvailable", &vtkMathTextUtilities::IsAvailable)
    .class_function("GetInstance", &vtkMathTextUtilities::GetInstance, emscripten::allow_raw_pointers())
    .class_function("SetInstance", &vtkMathTextUtilities::SetInstance, emscripten::allow_raw_pointers())
    .function("GetConstrainedFontSize", emscripten::optional_override([](vtkMathTextUtilities& self, const std::string & arg_0, vtkTextProperty* arg_1, int arg_2, int arg_3, int arg_4) -> int {  return self.GetConstrainedFontSize( arg_0.c_str(), arg_1, arg_2, arg_3, arg_4);}), emscripten::allow_raw_pointers());
}
