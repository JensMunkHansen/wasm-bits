// JavaScript wrapper for vtkCompositeIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeIntArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeIntArray.h
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
#include "vtkCompositeIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeIntArray>(vtkCompositeIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeIntArray_class) {
  emscripten::class_<vtkCompositeIntArray, emscripten::base<vtkDataArray>>("vtkCompositeIntArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeIntArray>>("vtkSmartPointer<vtkCompositeIntArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeIntArray::GetDataType)
    .function("GetValue", &vtkCompositeIntArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeIntArray::ConstructBackend, emscripten::allow_raw_pointers());
}
