// JavaScript wrapper for vtkAffineCharArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkAffineCharArrayEmbinding.cxx \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/Common/Core/vtkAffineCharArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkAOSDataArrayTemplate.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkAffineCharArray.h"

template<> void emscripten::internal::raw_destructor<vtkAffineCharArray>(vtkAffineCharArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkAffineCharArray_class) {
  emscripten::class_<vtkAffineCharArray, emscripten::base<vtkDataArray>>("vtkAffineCharArray")
    .smart_ptr<vtkSmartPointer<vtkAffineCharArray>>("vtkSmartPointer<vtkAffineCharArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkAffineCharArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineCharArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkAffineCharArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkAffineCharArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkAffineCharArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkAffineCharArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkAffineCharArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("ExtendedNew", &vtkAffineCharArray::ExtendedNew, emscripten::allow_raw_pointers())
    .function("GetDataType", &vtkAffineCharArray::GetDataType)
    .function("GetValue", &vtkAffineCharArray::GetValue)
    .class_function("FastDownCast", &vtkAffineCharArray::FastDownCast, emscripten::allow_raw_pointers())
    .function("ConstructBackend", &vtkAffineCharArray::ConstructBackend);
}
