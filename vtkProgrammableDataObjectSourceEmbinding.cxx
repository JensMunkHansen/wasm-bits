// JavaScript wrapper for vtkProgrammableDataObjectSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkProgrammableDataObjectSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkProgrammableDataObjectSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkProgrammableDataObjectSource.h"

template<> void emscripten::internal::raw_destructor<vtkProgrammableDataObjectSource>(vtkProgrammableDataObjectSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgrammableDataObjectSource_class) {
  emscripten::class_<vtkProgrammableDataObjectSource, emscripten::base<vtkDataObjectAlgorithm>>("vtkProgrammableDataObjectSource")
    .smart_ptr<vtkSmartPointer<vtkProgrammableDataObjectSource>>("vtkSmartPointer<vtkProgrammableDataObjectSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProgrammableDataObjectSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableDataObjectSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgrammableDataObjectSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgrammableDataObjectSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgrammableDataObjectSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableDataObjectSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgrammableDataObjectSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExecuteMethod", emscripten::optional_override([](vtkProgrammableDataObjectSource& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetExecuteMethod( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetExecuteMethodArgDelete", emscripten::optional_override([](vtkProgrammableDataObjectSource& self, emscripten::val arg_0) -> void {  return self.SetExecuteMethodArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}));
}
