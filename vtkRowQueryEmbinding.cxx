// JavaScript wrapper for vtkRowQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkIOSQL.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOSQL.js/vtkRowQueryEmbinding.cxx \
 /home/jmh/github/vtk/IO/SQL/vtkRowQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVariantArray.h"
#include "vtkRowQuery.h"

template<> void emscripten::internal::raw_destructor<vtkRowQuery>(vtkRowQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRowQuery_class) {
  emscripten::class_<vtkRowQuery, emscripten::base<vtkObject>>("vtkRowQuery")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRowQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRowQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRowQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRowQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRowQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRowQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetFieldIndex", emscripten::optional_override([](vtkRowQuery& self, const std::string & arg_0) -> int {  return self.GetFieldIndex( arg_0.c_str());}))
    .function("NextRow", emscripten::select_overload<bool(vtkRowQuery&, vtkVariantArray*)>([](vtkRowQuery& self, vtkVariantArray* arg_0) -> bool { return self.NextRow( arg_0); }), emscripten::allow_raw_pointers())
    .function("SetCaseSensitiveFieldNames", &vtkRowQuery::SetCaseSensitiveFieldNames)
    .function("GetCaseSensitiveFieldNames", &vtkRowQuery::GetCaseSensitiveFieldNames)
    .function("CaseSensitiveFieldNamesOn", &vtkRowQuery::CaseSensitiveFieldNamesOn)
    .function("CaseSensitiveFieldNamesOff", &vtkRowQuery::CaseSensitiveFieldNamesOff);
}
