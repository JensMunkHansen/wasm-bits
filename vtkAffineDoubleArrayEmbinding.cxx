// JavaScript wrapper for vtkAffineDoubleArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineDoubleArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineDoubleArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineDoubleArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineDoubleArray>(vtkAffineDoubleArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineDoubleArray_class) {
  emscripten::class_<vtkAffineDoubleArray, emscripten::base<vtkDataArray>>("vtkAffineDoubleArray")
    .smart_ptr<vtkSmartPointer<vtkAffineDoubleArray>>("vtkSmartPointer<vtkAffineDoubleArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAffineDoubleArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineDoubleArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineDoubleArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineDoubleArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineDoubleArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineDoubleArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineDoubleArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineDoubleArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineDoubleArray::GetDataType)
    .function("GetValue", &vtkAffineDoubleArray::GetValue)
    .class_function("FastDownCast", &vtkAffineDoubleArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineDoubleArray::ConstructBackend);
}
