// JavaScript wrapper for vtkAffineLongArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineLongArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineLongArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineLongArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineLongArray>(vtkAffineLongArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineLongArray_class) {
  emscripten::class_<vtkAffineLongArray, emscripten::base<vtkDataArray>>("vtkAffineLongArray")
    .smart_ptr<vtkSmartPointer<vtkAffineLongArray>>("vtkSmartPointer<vtkAffineLongArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAffineLongArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineLongArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineLongArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineLongArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineLongArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineLongArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineLongArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineLongArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineLongArray::GetDataType)
    .function("GetValue", &vtkAffineLongArray::GetValue)
    .class_function("FastDownCast", &vtkAffineLongArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineLongArray::ConstructBackend);
}
