// JavaScript wrapper for vtkExtractArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkExtractArrayEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkExtractArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkExtractArray.h"

template<> void emscripten::internal::raw_destructor<vtkExtractArray>(vtkExtractArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtractArray_class) {
  emscripten::class_<vtkExtractArray, emscripten::base<vtkArrayDataAlgorithm>>("vtkExtractArray")
    .smart_ptr<vtkSmartPointer<vtkExtractArray>>("vtkSmartPointer<vtkExtractArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkExtractArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtractArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtractArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtractArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtractArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtractArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetIndex", &vtkExtractArray::GetIndex)
    .function("SetIndex", &vtkExtractArray::SetIndex);
}
