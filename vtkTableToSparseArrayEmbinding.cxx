// JavaScript wrapper for vtkTableToSparseArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTableToSparseArrayEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTableToSparseArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArrayExtents.h"
#include "vtkTableToSparseArray.h"

template<> void emscripten::internal::raw_destructor<vtkTableToSparseArray>(vtkTableToSparseArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToSparseArray_class) {
  emscripten::class_<vtkTableToSparseArray, emscripten::base<vtkArrayDataAlgorithm>>("vtkTableToSparseArray")
    .smart_ptr<vtkSmartPointer<vtkTableToSparseArray>>("vtkSmartPointer<vtkTableToSparseArray>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkTableToSparseArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToSparseArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToSparseArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToSparseArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToSparseArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToSparseArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToSparseArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ClearCoordinateColumns", &vtkTableToSparseArray::ClearCoordinateColumns)
    .function("AddCoordinateColumn", emscripten::optional_override([](vtkTableToSparseArray& self, const std::string & arg_0) -> void {  return self.AddCoordinateColumn( arg_0.c_str());}))
    .function("SetValueColumn", emscripten::optional_override([](vtkTableToSparseArray& self, const std::string & arg_0) -> void {  return self.SetValueColumn( arg_0.c_str());}))
    .function("GetValueColumn", emscripten::optional_override([](vtkTableToSparseArray& self) -> std::string {  return self.GetValueColumn();}))
    .function("ClearOutputExtents", &vtkTableToSparseArray::ClearOutputExtents)
    .function("SetOutputExtents", &vtkTableToSparseArray::SetOutputExtents);
}
