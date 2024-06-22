// JavaScript wrapper for vtkStructuredExtent with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStructuredExtentEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStructuredExtent.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredExtent.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredExtent>(vtkStructuredExtent * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredExtent_class) {
  emscripten::class_<vtkStructuredExtent, emscripten::base<vtkObject>>("vtkStructuredExtent")
    .smart_ptr<vtkSmartPointer<vtkStructuredExtent>>("vtkSmartPointer<vtkStructuredExtent>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStructuredExtent>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredExtent::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredExtent& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredExtent::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredExtent::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredExtent::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredExtent& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
