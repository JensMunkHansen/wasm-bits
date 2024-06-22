// JavaScript wrapper for vtkCellGridRangeQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridRangeQueryEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridRangeQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGrid.h"
#include "vtkCellAttribute.h"
#include "vtkCellGridRangeQuery.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridRangeQuery>(vtkCellGridRangeQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridRangeQuery_class) {
  emscripten::class_<vtkCellGridRangeQuery, emscripten::base<vtkCellGridQuery>>("vtkCellGridRangeQuery")
    .smart_ptr<vtkSmartPointer<vtkCellGridRangeQuery>>("vtkSmartPointer<vtkCellGridRangeQuery>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellGridRangeQuery>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridRangeQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridRangeQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridRangeQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridRangeQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridRangeQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridRangeQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetComponent", &vtkCellGridRangeQuery::SetComponent)
    .function("GetComponent", &vtkCellGridRangeQuery::GetComponent)
    .function("SetFiniteRange", &vtkCellGridRangeQuery::SetFiniteRange)
    .function("GetFiniteRange", &vtkCellGridRangeQuery::GetFiniteRange)
    .function("SetCellGrid", &vtkCellGridRangeQuery::SetCellGrid, emscripten::allow_raw_pointers())
    .function("GetCellGrid", &vtkCellGridRangeQuery::GetCellGrid, emscripten::allow_raw_pointers())
    .function("SetCellAttribute", &vtkCellGridRangeQuery::SetCellAttribute, emscripten::allow_raw_pointers())
    .function("GetCellAttribute", &vtkCellGridRangeQuery::GetCellAttribute, emscripten::allow_raw_pointers())
    .function("Initialize", &vtkCellGridRangeQuery::Initialize)
    .function("Finalize", &vtkCellGridRangeQuery::Finalize)
    .function("GetRange", emscripten::select_overload<void(vtkCellGridRangeQuery&, int, std::uintptr_t)>([](vtkCellGridRangeQuery& self, int arg_0, std::uintptr_t arg_1) -> void { return self.GetRange( arg_0,reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("GetRange", emscripten::select_overload<void(vtkCellGridRangeQuery&, std::uintptr_t)>([](vtkCellGridRangeQuery& self, std::uintptr_t arg_0) -> void { return self.GetRange(reinterpret_cast<double*>(arg_0 * sizeof(double))); }));
}
