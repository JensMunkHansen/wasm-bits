// JavaScript wrapper for vtkTrivialProducer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkTrivialProducerEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkTrivialProducer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkDataObject.h"
#include "vtkTrivialProducer.h"

template<> void emscripten::internal::raw_destructor<vtkTrivialProducer>(vtkTrivialProducer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTrivialProducer_class) {
  emscripten::class_<vtkTrivialProducer, emscripten::base<vtkAlgorithm>>("vtkTrivialProducer")
    .smart_ptr<vtkSmartPointer<vtkTrivialProducer>>("vtkSmartPointer<vtkTrivialProducer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTrivialProducer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTrivialProducer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTrivialProducer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTrivialProducer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTrivialProducer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTrivialProducer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTrivialProducer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOutput", &vtkTrivialProducer::SetOutput, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkTrivialProducer::GetMTime)
    .function("SetWholeExtent", emscripten::select_overload<void(vtkTrivialProducer&, int, int, int, int, int, int)>([](vtkTrivialProducer& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .class_function("FillOutputDataInformation", &vtkTrivialProducer::FillOutputDataInformation, emscripten::allow_raw_pointers());
}
