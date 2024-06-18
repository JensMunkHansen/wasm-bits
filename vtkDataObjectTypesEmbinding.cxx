// JavaScript wrapper for vtkDataObjectTypes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDataObjectTypesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDataObjectTypes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkDataObjectTypes.h"

template<> void emscripten::internal::raw_destructor<vtkDataObjectTypes>(vtkDataObjectTypes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDataObjectTypes_class) {
  emscripten::class_<vtkDataObjectTypes, emscripten::base<vtkObject>>("vtkDataObjectTypes")
    .smart_ptr<vtkSmartPointer<vtkDataObjectTypes>>("vtkSmartPointer<vtkDataObjectTypes>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkDataObjectTypes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectTypes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDataObjectTypes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDataObjectTypes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDataObjectTypes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectTypes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDataObjectTypes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetClassNameFromTypeId", emscripten::optional_override([]( int arg_0) -> std::string {  return vtkDataObjectTypes::GetClassNameFromTypeId( arg_0);}))
    .class_function("GetTypeIdFromClassName", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDataObjectTypes::GetTypeIdFromClassName( arg_0.c_str());}))
    .class_function("NewDataObject", emscripten::select_overload<vtkDataObject*( const std::string &)>([]( const std::string & arg_0) -> vtkDataObject* { return vtkDataObjectTypes::NewDataObject( arg_0.c_str()); }), emscripten::allow_raw_pointers())
    .class_function("NewDataObject", emscripten::select_overload<vtkDataObject*( int)>([]( int arg_0) -> vtkDataObject* { return vtkDataObjectTypes::NewDataObject( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("TypeIdIsA", &vtkDataObjectTypes::TypeIdIsA)
    .class_function("GetCommonBaseTypeId", &vtkDataObjectTypes::GetCommonBaseTypeId);
}
