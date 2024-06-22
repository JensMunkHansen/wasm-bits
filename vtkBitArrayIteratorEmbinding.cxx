// JavaScript wrapper for vtkBitArrayIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkBitArrayIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkBitArrayIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractArray.h"
#include "vtkBitArrayIterator.h"

template<> void emscripten::internal::raw_destructor<vtkBitArrayIterator>(vtkBitArrayIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBitArrayIterator_class) {
  emscripten::class_<vtkBitArrayIterator, emscripten::base<vtkArrayIterator>>("vtkBitArrayIterator")
    .smart_ptr<vtkSmartPointer<vtkBitArrayIterator>>("vtkSmartPointer<vtkBitArrayIterator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBitArrayIterator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBitArrayIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBitArrayIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBitArrayIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBitArrayIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBitArrayIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBitArrayIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkBitArrayIterator::Initialize, emscripten::allow_raw_pointers())
    .function("GetArray", &vtkBitArrayIterator::GetArray, emscripten::allow_raw_pointers())
    .function("GetValue", &vtkBitArrayIterator::GetValue)
    .function("GetNumberOfTuples", &vtkBitArrayIterator::GetNumberOfTuples)
    .function("GetNumberOfValues", &vtkBitArrayIterator::GetNumberOfValues)
    .function("GetNumberOfComponents", &vtkBitArrayIterator::GetNumberOfComponents)
    .function("GetDataType", &vtkBitArrayIterator::GetDataType)
    .function("GetDataTypeSize", &vtkBitArrayIterator::GetDataTypeSize)
    .function("SetValue", &vtkBitArrayIterator::SetValue);
}
