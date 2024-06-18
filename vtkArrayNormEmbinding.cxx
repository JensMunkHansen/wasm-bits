// JavaScript wrapper for vtkArrayNorm with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkArrayNormEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkArrayNorm.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArrayRange.h"
#include "vtkArrayNorm.h"

template<> void emscripten::internal::raw_destructor<vtkArrayNorm>(vtkArrayNorm * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArrayNorm_class) {
  emscripten::class_<vtkArrayNorm, emscripten::base<vtkArrayDataAlgorithm>>("vtkArrayNorm")
    .smart_ptr<vtkSmartPointer<vtkArrayNorm>>("vtkSmartPointer<vtkArrayNorm>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkArrayNorm>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayNorm::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArrayNorm& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArrayNorm::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArrayNorm::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArrayNorm::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArrayNorm& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDimension", &vtkArrayNorm::GetDimension)
    .function("SetDimension", &vtkArrayNorm::SetDimension)
    .function("GetL", &vtkArrayNorm::GetL)
    .function("SetL", &vtkArrayNorm::SetL)
    .function("SetInvert", &vtkArrayNorm::SetInvert)
    .function("GetInvert", &vtkArrayNorm::GetInvert)
    .function("SetWindow", &vtkArrayNorm::SetWindow)
    .function("GetWindow", &vtkArrayNorm::GetWindow);
}
