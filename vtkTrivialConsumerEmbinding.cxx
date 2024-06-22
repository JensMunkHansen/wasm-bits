// JavaScript wrapper for vtkTrivialConsumer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkTrivialConsumerEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkTrivialConsumer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTrivialConsumer.h"

template<> void emscripten::internal::raw_destructor<vtkTrivialConsumer>(vtkTrivialConsumer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTrivialConsumer_class) {
  emscripten::class_<vtkTrivialConsumer, emscripten::base<vtkAlgorithm>>("vtkTrivialConsumer")
    .smart_ptr<vtkSmartPointer<vtkTrivialConsumer>>("vtkSmartPointer<vtkTrivialConsumer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTrivialConsumer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTrivialConsumer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTrivialConsumer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTrivialConsumer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTrivialConsumer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTrivialConsumer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTrivialConsumer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
