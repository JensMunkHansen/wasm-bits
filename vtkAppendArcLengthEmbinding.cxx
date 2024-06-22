// JavaScript wrapper for vtkAppendArcLength with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkAppendArcLengthEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkAppendArcLength.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAppendArcLength.h"

template<> void emscripten::internal::raw_destructor<vtkAppendArcLength>(vtkAppendArcLength * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAppendArcLength_class) {
  emscripten::class_<vtkAppendArcLength, emscripten::base<vtkPolyDataAlgorithm>>("vtkAppendArcLength")
    .smart_ptr<vtkSmartPointer<vtkAppendArcLength>>("vtkSmartPointer<vtkAppendArcLength>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAppendArcLength>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendArcLength::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAppendArcLength& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAppendArcLength::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAppendArcLength::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAppendArcLength::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAppendArcLength& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
