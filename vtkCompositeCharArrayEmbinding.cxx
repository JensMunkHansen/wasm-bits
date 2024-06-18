// JavaScript wrapper for vtkCompositeCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeCharArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeCharArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkDataArrayCollection.h"
#include "vtkCompositeCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeCharArray>(vtkCompositeCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeCharArray_class) {
  emscripten::class_<vtkCompositeCharArray, emscripten::base<vtkDataArray>>("vtkCompositeCharArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeCharArray>>("vtkSmartPointer<vtkCompositeCharArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeCharArray::GetDataType)
    .function("GetValue", &vtkCompositeCharArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeCharArray::ConstructBackend, emscripten::allow_raw_pointers());
}
