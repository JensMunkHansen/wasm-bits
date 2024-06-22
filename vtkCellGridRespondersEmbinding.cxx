// JavaScript wrapper for vtkCellGridResponders with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridRespondersEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridResponders.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellMetadata.h"
#include "vtkCellGridQuery.h"
#include "vtkStringToken.h"
#include "vtkCellAttributeCalculator.h"
#include "vtkSmartPointer.h"
#include "vtkCellAttribute.h"
#include "vtkCellGridResponders.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridResponders>(vtkCellGridResponders * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridResponders_class) {
  emscripten::class_<vtkCellGridResponders, emscripten::base<vtkObject>>("vtkCellGridResponders")
    .smart_ptr<vtkSmartPointer<vtkCellGridResponders>>("vtkSmartPointer<vtkCellGridResponders>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridResponders>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridResponders::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridResponders& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridResponders::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridResponders::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridResponders::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridResponders& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Query", &vtkCellGridResponders::Query, emscripten::allow_raw_pointers())
    .function("GetCacheData", &vtkCellGridResponders::GetCacheData)
    .function("SetCacheData", &vtkCellGridResponders::SetCacheData);
}
