// JavaScript wrapper for vtkCompositeUnsignedShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeUnsignedShortArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeUnsignedShortArray.h
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
#include "vtkCompositeUnsignedShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeUnsignedShortArray>(vtkCompositeUnsignedShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeUnsignedShortArray_class) {
  emscripten::class_<vtkCompositeUnsignedShortArray, emscripten::base<vtkDataArray>>("vtkCompositeUnsignedShortArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeUnsignedShortArray>>("vtkSmartPointer<vtkCompositeUnsignedShortArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeUnsignedShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeUnsignedShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeUnsignedShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeUnsignedShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeUnsignedShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeUnsignedShortArray::GetDataType)
    .function("GetValue", &vtkCompositeUnsignedShortArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeUnsignedShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeUnsignedShortArray::ConstructBackend, emscripten::allow_raw_pointers());
}
