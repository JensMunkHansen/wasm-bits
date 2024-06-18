// JavaScript wrapper for vtkLogLookupTable with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkLogLookupTableEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkLogLookupTable.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLogLookupTable.h"

template<> void emscripten::internal::raw_destructor<vtkLogLookupTable>(vtkLogLookupTable * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLogLookupTable_class) {
  emscripten::class_<vtkLogLookupTable, emscripten::base<vtkLookupTable>>("vtkLogLookupTable")
    .smart_ptr<vtkSmartPointer<vtkLogLookupTable>>("vtkSmartPointer<vtkLogLookupTable>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLogLookupTable>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogLookupTable::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLogLookupTable& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLogLookupTable::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLogLookupTable::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLogLookupTable::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLogLookupTable& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
