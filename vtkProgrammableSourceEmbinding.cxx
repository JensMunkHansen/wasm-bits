// JavaScript wrapper for vtkProgrammableSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkProgrammableSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkProgrammableSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyData.h"
#include "vtkStructuredPoints.h"
#include "vtkStructuredGrid.h"
#include "vtkUnstructuredGrid.h"
#include "vtkRectilinearGrid.h"
#include "vtkGraph.h"
#include "vtkMolecule.h"
#include "vtkTable.h"
#include "vtkProgrammableSource.h"

template<> void emscripten::internal::raw_destructor<vtkProgrammableSource>(vtkProgrammableSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProgrammableSource_class) {
  emscripten::class_<vtkProgrammableSource, emscripten::base<vtkDataObjectAlgorithm>>("vtkProgrammableSource")
    .smart_ptr<vtkSmartPointer<vtkProgrammableSource>>("vtkSmartPointer<vtkProgrammableSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProgrammableSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProgrammableSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProgrammableSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProgrammableSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProgrammableSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProgrammableSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExecuteMethod", emscripten::optional_override([](vtkProgrammableSource& self, emscripten::val arg_0, std::uintptr_t arg_1) -> void {  return self.SetExecuteMethod( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()),reinterpret_cast<void*>(arg_1));}))
    .function("SetExecuteMethodArgDelete", emscripten::optional_override([](vtkProgrammableSource& self, emscripten::val arg_0) -> void {  return self.SetExecuteMethodArgDelete( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("SetRequestInformationMethod", emscripten::optional_override([](vtkProgrammableSource& self, emscripten::val arg_0) -> void {  return self.SetRequestInformationMethod( reinterpret_cast<void(*)( void*)>(emscripten::val::module_property("addFunction")(arg_0, std::string("vi")).as<int>()));}))
    .function("GetPolyDataOutput", &vtkProgrammableSource::GetPolyDataOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredPointsOutput", &vtkProgrammableSource::GetStructuredPointsOutput, emscripten::allow_raw_pointers())
    .function("GetStructuredGridOutput", &vtkProgrammableSource::GetStructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetUnstructuredGridOutput", &vtkProgrammableSource::GetUnstructuredGridOutput, emscripten::allow_raw_pointers())
    .function("GetRectilinearGridOutput", &vtkProgrammableSource::GetRectilinearGridOutput, emscripten::allow_raw_pointers())
    .function("GetGraphOutput", &vtkProgrammableSource::GetGraphOutput, emscripten::allow_raw_pointers())
    .function("GetMoleculeOutput", &vtkProgrammableSource::GetMoleculeOutput, emscripten::allow_raw_pointers())
    .function("GetTableOutput", &vtkProgrammableSource::GetTableOutput, emscripten::allow_raw_pointers());
}
