// JavaScript wrapper for vtkCompositeUnsignedLongLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeUnsignedLongLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeUnsignedLongLongArray.h
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
#include "vtkCompositeUnsignedLongLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeUnsignedLongLongArray>(vtkCompositeUnsignedLongLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeUnsignedLongLongArray_class) {
  emscripten::class_<vtkCompositeUnsignedLongLongArray, emscripten::base<vtkDataArray>>("vtkCompositeUnsignedLongLongArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeUnsignedLongLongArray>>("vtkSmartPointer<vtkCompositeUnsignedLongLongArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeUnsignedLongLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedLongLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeUnsignedLongLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeUnsignedLongLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedLongLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeUnsignedLongLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeUnsignedLongLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeUnsignedLongLongArray::GetDataType)
    .function("GetValue", &vtkCompositeUnsignedLongLongArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeUnsignedLongLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeUnsignedLongLongArray::ConstructBackend, emscripten::allow_raw_pointers());
}
