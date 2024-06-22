// JavaScript wrapper for vtkCellGridBoundsQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridBoundsQueryEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridBoundsQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBoundingBox.h"
#include "vtkCellGridBoundsQuery.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridBoundsQuery>(vtkCellGridBoundsQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridBoundsQuery_class) {
  emscripten::class_<vtkCellGridBoundsQuery, emscripten::base<vtkCellGridQuery>>("vtkCellGridBoundsQuery")
    .smart_ptr<vtkSmartPointer<vtkCellGridBoundsQuery>>("vtkSmartPointer<vtkCellGridBoundsQuery>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellGridBoundsQuery>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridBoundsQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridBoundsQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridBoundsQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridBoundsQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridBoundsQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridBoundsQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkCellGridBoundsQuery::Initialize)
    .function("GetBounds", emscripten::optional_override([](vtkCellGridBoundsQuery& self, std::uintptr_t arg_0) -> void {  return self.GetBounds(reinterpret_cast<double*>(arg_0 * sizeof(double)));}));
}
