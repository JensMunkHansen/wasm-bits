// JavaScript wrapper for vtkGenerateIndexArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkGenerateIndexArrayEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkGenerateIndexArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenerateIndexArray.h"

template<> void emscripten::internal::raw_destructor<vtkGenerateIndexArray>(vtkGenerateIndexArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenerateIndexArray_class) {
  emscripten::class_<vtkGenerateIndexArray, emscripten::base<vtkDataObjectAlgorithm>>("vtkGenerateIndexArray")
    .smart_ptr<vtkSmartPointer<vtkGenerateIndexArray>>("vtkSmartPointer<vtkGenerateIndexArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenerateIndexArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateIndexArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenerateIndexArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenerateIndexArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenerateIndexArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateIndexArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenerateIndexArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetArrayName", emscripten::optional_override([](vtkGenerateIndexArray& self, const std::string & arg_0) -> void {  return self.SetArrayName( arg_0.c_str());}))
    .function("GetArrayName", emscripten::optional_override([](vtkGenerateIndexArray& self) -> std::string {  return self.GetArrayName();}))
    .function("SetFieldType", &vtkGenerateIndexArray::SetFieldType)
    .function("GetFieldType", &vtkGenerateIndexArray::GetFieldType)
    .function("SetReferenceArrayName", emscripten::optional_override([](vtkGenerateIndexArray& self, const std::string & arg_0) -> void {  return self.SetReferenceArrayName( arg_0.c_str());}))
    .function("GetReferenceArrayName", emscripten::optional_override([](vtkGenerateIndexArray& self) -> std::string {  return self.GetReferenceArrayName();}))
    .function("SetPedigreeID", &vtkGenerateIndexArray::SetPedigreeID)
    .function("GetPedigreeID", &vtkGenerateIndexArray::GetPedigreeID);
}
EMSCRIPTEN_BINDINGS(vtkInfovisCore_vtkGenerateIndexArray_0_2_constants) {
  const struct { const char *name; int value; }
    constants[5] = {
      { "vtkGenerateIndexArray_ROW_DATA", vtkGenerateIndexArray::ROW_DATA },
      { "vtkGenerateIndexArray_POINT_DATA", vtkGenerateIndexArray::POINT_DATA },
      { "vtkGenerateIndexArray_CELL_DATA", vtkGenerateIndexArray::CELL_DATA },
      { "vtkGenerateIndexArray_VERTEX_DATA", vtkGenerateIndexArray::VERTEX_DATA },
      { "vtkGenerateIndexArray_EDGE_DATA", vtkGenerateIndexArray::EDGE_DATA },
  };
  for (int c = 0; c < 5; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
