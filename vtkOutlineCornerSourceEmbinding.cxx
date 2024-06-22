// JavaScript wrapper for vtkOutlineCornerSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkOutlineCornerSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkOutlineCornerSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOutlineCornerSource.h"

template<> void emscripten::internal::raw_destructor<vtkOutlineCornerSource>(vtkOutlineCornerSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOutlineCornerSource_class) {
  emscripten::class_<vtkOutlineCornerSource, emscripten::base<vtkOutlineSource>>("vtkOutlineCornerSource")
    .smart_ptr<vtkSmartPointer<vtkOutlineCornerSource>>("vtkSmartPointer<vtkOutlineCornerSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOutlineCornerSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineCornerSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOutlineCornerSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOutlineCornerSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOutlineCornerSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOutlineCornerSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOutlineCornerSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCornerFactor", &vtkOutlineCornerSource::SetCornerFactor)
    .function("GetCornerFactorMinValue", &vtkOutlineCornerSource::GetCornerFactorMinValue)
    .function("GetCornerFactorMaxValue", &vtkOutlineCornerSource::GetCornerFactorMaxValue)
    .function("GetCornerFactor", &vtkOutlineCornerSource::GetCornerFactor);
}
