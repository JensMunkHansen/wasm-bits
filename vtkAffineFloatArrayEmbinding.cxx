// JavaScript wrapper for vtkAffineFloatArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineFloatArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineFloatArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineFloatArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineFloatArray>(vtkAffineFloatArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineFloatArray_class) {
  emscripten::class_<vtkAffineFloatArray, emscripten::base<vtkDataArray>>("vtkAffineFloatArray")
    .smart_ptr<vtkSmartPointer<vtkAffineFloatArray>>("vtkSmartPointer<vtkAffineFloatArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAffineFloatArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineFloatArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineFloatArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineFloatArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineFloatArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineFloatArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineFloatArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineFloatArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineFloatArray::GetDataType)
    .function("GetValue", &vtkAffineFloatArray::GetValue)
    .class_function("FastDownCast", &vtkAffineFloatArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineFloatArray::ConstructBackend);
}
