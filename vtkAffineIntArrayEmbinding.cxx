// JavaScript wrapper for vtkAffineIntArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineIntArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineIntArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineIntArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineIntArray>(vtkAffineIntArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineIntArray_class) {
  emscripten::class_<vtkAffineIntArray, emscripten::base<vtkDataArray>>("vtkAffineIntArray")
    .smart_ptr<vtkSmartPointer<vtkAffineIntArray>>("vtkSmartPointer<vtkAffineIntArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkAffineIntArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineIntArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineIntArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineIntArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineIntArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineIntArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineIntArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineIntArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineIntArray::GetDataType)
    .function("GetValue", &vtkAffineIntArray::GetValue)
    .class_function("FastDownCast", &vtkAffineIntArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineIntArray::ConstructBackend);
}
