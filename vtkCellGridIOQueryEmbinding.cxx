// JavaScript wrapper for vtkCellGridIOQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkIOCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCellGrid.js/vtkCellGridIOQueryEmbinding.cxx \
 /home/jmh/github/vtk/IO/CellGrid/vtkCellGridIOQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGrid.h"
#include "vtkCellAttribute.h"
#include "vtkStringToken.h"
#include "vtkCellGridIOQuery.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridIOQuery>(vtkCellGridIOQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridIOQuery_class) {
  emscripten::class_<vtkCellGridIOQuery, emscripten::base<vtkCellGridQuery>>("vtkCellGridIOQuery")
    .smart_ptr<vtkSmartPointer<vtkCellGridIOQuery>>("vtkSmartPointer<vtkCellGridIOQuery>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellGridIOQuery>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridIOQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridIOQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridIOQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridIOQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridIOQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridIOQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetData", &vtkCellGridIOQuery::GetData, emscripten::allow_raw_pointers())
    .function("GetAttributeData", &vtkCellGridIOQuery::GetAttributeData, emscripten::allow_raw_pointers())
    .function("IsSerializing", &vtkCellGridIOQuery::IsSerializing);
}
