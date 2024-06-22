// JavaScript wrapper for vtkAffineShortArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineShortArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineShortArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineShortArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineShortArray>(vtkAffineShortArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineShortArray_class) {
  emscripten::class_<vtkAffineShortArray, emscripten::base<vtkDataArray>>("vtkAffineShortArray")
    .smart_ptr<vtkSmartPointer<vtkAffineShortArray>>("vtkSmartPointer<vtkAffineShortArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAffineShortArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineShortArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineShortArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineShortArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineShortArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineShortArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineShortArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineShortArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineShortArray::GetDataType)
    .function("GetValue", &vtkAffineShortArray::GetValue)
    .class_function("FastDownCast", &vtkAffineShortArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineShortArray::ConstructBackend);
}
