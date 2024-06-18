// JavaScript wrapper for vtkCellGridQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridQueryEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGridQuery.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridQuery>(vtkCellGridQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridQuery_class) {
  emscripten::class_<vtkCellGridQuery, emscripten::base<vtkObject>>("vtkCellGridQuery")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkCellGridQuery::Initialize)
    .function("StartPass", &vtkCellGridQuery::StartPass)
    .function("GetPass", &vtkCellGridQuery::GetPass)
    .function("IsAnotherPassRequired", &vtkCellGridQuery::IsAnotherPassRequired)
    .function("Finalize", &vtkCellGridQuery::Finalize);
}
