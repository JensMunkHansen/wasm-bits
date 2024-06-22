// JavaScript wrapper for vtkCompositeUnsignedLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeUnsignedLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeUnsignedLongArray.h
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
#include "vtkCompositeUnsignedLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeUnsignedLongArray>(vtkCompositeUnsignedLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeUnsignedLongArray_class) {
  emscripten::class_<vtkCompositeUnsignedLongArray, emscripten::base<vtkDataArray>>("vtkCompositeUnsignedLongArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeUnsignedLongArray>>("vtkSmartPointer<vtkCompositeUnsignedLongArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeUnsignedLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeUnsignedLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeUnsignedLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeUnsignedLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeUnsignedLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeUnsignedLongArray::GetDataType)
    .function("GetValue", &vtkCompositeUnsignedLongArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeUnsignedLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeUnsignedLongArray::ConstructBackend, emscripten::allow_raw_pointers());
}
