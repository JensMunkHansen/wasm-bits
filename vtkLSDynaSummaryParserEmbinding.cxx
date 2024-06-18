// JavaScript wrapper for vtkLSDynaSummaryParser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLSDyna.js/vtkIOLSDyna.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOLSDyna.js/vtkLSDynaSummaryParserEmbinding.cxx \
 /home/jmh/github/vtk/IO/LSDyna/vtkLSDynaSummaryParser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkLSDynaSummaryParser.h"

template<> void emscripten::internal::raw_destructor<vtkLSDynaSummaryParser>(vtkLSDynaSummaryParser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkLSDynaSummaryParser_class) {
  emscripten::class_<vtkLSDynaSummaryParser, emscripten::base<vtkXMLParser>>("vtkLSDynaSummaryParser")
    .smart_ptr<vtkSmartPointer<vtkLSDynaSummaryParser>>("vtkSmartPointer<vtkLSDynaSummaryParser>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkLSDynaSummaryParser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLSDynaSummaryParser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkLSDynaSummaryParser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkLSDynaSummaryParser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkLSDynaSummaryParser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkLSDynaSummaryParser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkLSDynaSummaryParser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
