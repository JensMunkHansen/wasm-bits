// JavaScript wrapper for vtkCompositeUnsignedCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeUnsignedCharArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeUnsignedCharArray.h
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
#include "vtkCompositeUnsignedCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeUnsignedCharArray>(vtkCompositeUnsignedCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeUnsignedCharArray_class) {
  emscripten::class_<vtkCompositeUnsignedCharArray, emscripten::base<vtkDataArray>>("vtkCompositeUnsignedCharArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeUnsignedCharArray>>("vtkSmartPointer<vtkCompositeUnsignedCharArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeUnsignedCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeUnsignedCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeUnsignedCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeUnsignedCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeUnsignedCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeUnsignedCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeUnsignedCharArray::GetDataType)
    .function("GetValue", &vtkCompositeUnsignedCharArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeUnsignedCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeUnsignedCharArray::ConstructBackend, emscripten::allow_raw_pointers());
}
