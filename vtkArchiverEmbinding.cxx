// JavaScript wrapper for vtkArchiver with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkArchiverEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkArchiver.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkArchiver.h"

template<> void emscripten::internal::raw_destructor<vtkArchiver>(vtkArchiver * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkArchiver_class) {
  emscripten::class_<vtkArchiver, emscripten::base<vtkObject>>("vtkArchiver")
    .smart_ptr<vtkSmartPointer<vtkArchiver>>("vtkSmartPointer<vtkArchiver>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkArchiver>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArchiver::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkArchiver& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkArchiver::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkArchiver::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkArchiver::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkArchiver& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetArchiveName", emscripten::optional_override([](vtkArchiver& self) -> std::string {  return self.GetArchiveName();}))
    .function("SetArchiveName", emscripten::optional_override([](vtkArchiver& self, const std::string & arg_0) -> void {  return self.SetArchiveName( arg_0.c_str());}))
    .function("OpenArchive", &vtkArchiver::OpenArchive)
    .function("CloseArchive", &vtkArchiver::CloseArchive)
    .function("InsertIntoArchive", emscripten::optional_override([](vtkArchiver& self, const std::string& arg_0, const std::string & arg_1, std::size_t arg_2) -> void {  return self.InsertIntoArchive( arg_0, arg_1.c_str(), arg_2);}))
    .function("Contains", &vtkArchiver::Contains);
}
