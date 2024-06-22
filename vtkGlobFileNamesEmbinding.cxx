// JavaScript wrapper for vtkGlobFileNames with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkIOCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCore.js/vtkGlobFileNamesEmbinding.cxx \
 /home/jmh/github/vtk/IO/Core/vtkGlobFileNames.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStringArray.h"
#include "vtkGlobFileNames.h"

template<> void emscripten::internal::raw_destructor<vtkGlobFileNames>(vtkGlobFileNames * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGlobFileNames_class) {
  emscripten::class_<vtkGlobFileNames, emscripten::base<vtkObject>>("vtkGlobFileNames")
    .smart_ptr<vtkSmartPointer<vtkGlobFileNames>>("vtkSmartPointer<vtkGlobFileNames>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGlobFileNames>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlobFileNames::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGlobFileNames& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGlobFileNames::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGlobFileNames::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGlobFileNames::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGlobFileNames& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Reset", &vtkGlobFileNames::Reset)
    .function("SetDirectory", emscripten::optional_override([](vtkGlobFileNames& self, const std::string & arg_0) -> void {  return self.SetDirectory( arg_0.c_str());}))
    .function("GetDirectory", emscripten::optional_override([](vtkGlobFileNames& self) -> std::string {  return self.GetDirectory();}))
    .function("AddFileNames", emscripten::optional_override([](vtkGlobFileNames& self, const std::string & arg_0) -> int {  return self.AddFileNames( arg_0.c_str());}))
    .function("SetRecurse", &vtkGlobFileNames::SetRecurse)
    .function("RecurseOn", &vtkGlobFileNames::RecurseOn)
    .function("RecurseOff", &vtkGlobFileNames::RecurseOff)
    .function("GetRecurse", &vtkGlobFileNames::GetRecurse)
    .function("GetNumberOfFileNames", &vtkGlobFileNames::GetNumberOfFileNames)
    .function("GetNthFileName", emscripten::optional_override([](vtkGlobFileNames& self, int arg_0) -> std::string {  return self.GetNthFileName( arg_0);}))
    .function("GetFileNames", &vtkGlobFileNames::GetFileNames, emscripten::allow_raw_pointers());
}
