// JavaScript wrapper for vtkCompositeUnsignedIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeUnsignedIntArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeUnsignedIntArray.h
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
#include "vtkCompositeUnsignedIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeUnsignedIntArray>(vtkCompositeUnsignedIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeUnsignedIntArray_class) {
  emscripten::class_<vtkCompositeUnsignedIntArray, emscripten::base<vtkDataArray>>("vtkCompositeUnsignedIntArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeUnsignedIntArray>>("vtkSmartPointer<vtkCompositeUnsignedIntArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCompositeUnsignedIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeUnsignedIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeUnsignedIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeUnsignedIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeUnsignedIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeUnsignedIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeUnsignedIntArray::GetDataType)
    .function("GetValue", &vtkCompositeUnsignedIntArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeUnsignedIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeUnsignedIntArray::ConstructBackend, emscripten::allow_raw_pointers());
}
