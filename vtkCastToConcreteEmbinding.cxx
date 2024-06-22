// JavaScript wrapper for vtkCastToConcrete with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCastToConcreteEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkCastToConcrete.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCastToConcrete.h"

template<> void emscripten::internal::raw_destructor<vtkCastToConcrete>(vtkCastToConcrete * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCastToConcrete_class) {
  emscripten::class_<vtkCastToConcrete, emscripten::base<vtkDataSetAlgorithm>>("vtkCastToConcrete")
    .smart_ptr<vtkSmartPointer<vtkCastToConcrete>>("vtkSmartPointer<vtkCastToConcrete>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCastToConcrete>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCastToConcrete::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCastToConcrete& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCastToConcrete::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCastToConcrete::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCastToConcrete::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCastToConcrete& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
