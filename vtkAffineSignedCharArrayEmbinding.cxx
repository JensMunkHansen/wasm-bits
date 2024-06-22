// JavaScript wrapper for vtkAffineSignedCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineSignedCharArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineSignedCharArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineSignedCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineSignedCharArray>(vtkAffineSignedCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineSignedCharArray_class) {
  emscripten::class_<vtkAffineSignedCharArray, emscripten::base<vtkDataArray>>("vtkAffineSignedCharArray")
    .smart_ptr<vtkSmartPointer<vtkAffineSignedCharArray>>("vtkSmartPointer<vtkAffineSignedCharArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineSignedCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineSignedCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineSignedCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineSignedCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineSignedCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineSignedCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineSignedCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineSignedCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineSignedCharArray::GetDataType)
    .function("GetValue", &vtkAffineSignedCharArray::GetValue)
    .class_function("FastDownCast", &vtkAffineSignedCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineSignedCharArray::ConstructBackend);
}
