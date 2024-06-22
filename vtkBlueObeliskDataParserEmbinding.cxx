// JavaScript wrapper for vtkBlueObeliskDataParser with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkDomainsChemistry.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistry.js/vtkBlueObeliskDataParserEmbinding.cxx \
 /home/jmh/github/vtk/Domains/Chemistry/vtkBlueObeliskDataParser.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBlueObeliskData.h"
#include "vtkBlueObeliskDataParser.h"

EMSCRIPTEN_BINDINGS(vtkDomainsChemistry_vtkBlueObeliskDataParser_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkBlueObeliskDataParser>(vtkBlueObeliskDataParser * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBlueObeliskDataParser_class) {
  emscripten::class_<vtkBlueObeliskDataParser, emscripten::base<vtkXMLParser>>("vtkBlueObeliskDataParser")
    .smart_ptr<vtkSmartPointer<vtkBlueObeliskDataParser>>("vtkSmartPointer<vtkBlueObeliskDataParser>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBlueObeliskDataParser>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlueObeliskDataParser::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBlueObeliskDataParser& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBlueObeliskDataParser::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBlueObeliskDataParser::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlueObeliskDataParser::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBlueObeliskDataParser& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTarget", &vtkBlueObeliskDataParser::SetTarget, emscripten::allow_raw_pointers())
    .function("Parse", emscripten::select_overload<int(vtkBlueObeliskDataParser&)>([](vtkBlueObeliskDataParser& self) -> int { return self.Parse(); }))
    .function("Parse", emscripten::select_overload<int(vtkBlueObeliskDataParser&, const std::string &)>([](vtkBlueObeliskDataParser& self, const std::string & arg_0) -> int { return self.Parse( arg_0.c_str()); }))
    .function("Parse", emscripten::select_overload<int(vtkBlueObeliskDataParser&, const std::string &, unsigned int)>([](vtkBlueObeliskDataParser& self, const std::string & arg_0, unsigned int arg_1) -> int { return self.Parse( arg_0.c_str(), arg_1); }));
}
