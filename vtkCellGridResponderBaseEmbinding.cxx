// JavaScript wrapper for vtkCellGridResponderBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridResponderBaseEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridResponderBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridQuery.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridResponders.h"
#include "vtkCellGridResponderBase.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridResponderBase>(vtkCellGridResponderBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridResponderBase_class) {
  emscripten::class_<vtkCellGridResponderBase, emscripten::base<vtkObject>>("vtkCellGridResponderBase")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridResponderBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridResponderBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridResponderBase::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridResponderBase::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridResponderBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridResponderBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
