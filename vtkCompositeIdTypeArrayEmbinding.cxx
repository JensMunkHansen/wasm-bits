// JavaScript wrapper for vtkCompositeIdTypeArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCompositeIdTypeArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkCompositeIdTypeArray.h
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
#include "vtkCompositeIdTypeArray.h"

template<> void emscripten::internal::raw_destructor<vtkCompositeIdTypeArray>(vtkCompositeIdTypeArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCompositeIdTypeArray_class) {
  emscripten::class_<vtkCompositeIdTypeArray, emscripten::base<vtkDataArray>>("vtkCompositeIdTypeArray")
    .smart_ptr<vtkSmartPointer<vtkCompositeIdTypeArray>>("vtkSmartPointer<vtkCompositeIdTypeArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCompositeIdTypeArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeIdTypeArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCompositeIdTypeArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCompositeIdTypeArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCompositeIdTypeArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCompositeIdTypeArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCompositeIdTypeArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkCompositeIdTypeArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkCompositeIdTypeArray::GetDataType)
    .function("GetValue", &vtkCompositeIdTypeArray::GetValue)
    .class_function("FastDownCast", &vtkCompositeIdTypeArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkCompositeIdTypeArray::ConstructBackend, emscripten::allow_raw_pointers());
}
