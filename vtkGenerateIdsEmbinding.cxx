// JavaScript wrapper for vtkGenerateIds with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkGenerateIdsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkGenerateIds.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGenerateIds.h"

template<> void emscripten::internal::raw_destructor<vtkGenerateIds>(vtkGenerateIds * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGenerateIds_class) {
  emscripten::class_<vtkGenerateIds, emscripten::base<vtkPassInputTypeAlgorithm>>("vtkGenerateIds")
    .smart_ptr<vtkSmartPointer<vtkGenerateIds>>("vtkSmartPointer<vtkGenerateIds>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGenerateIds>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateIds::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGenerateIds& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGenerateIds::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGenerateIds::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGenerateIds::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGenerateIds& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPointIds", &vtkGenerateIds::SetPointIds)
    .function("GetPointIds", &vtkGenerateIds::GetPointIds)
    .function("PointIdsOn", &vtkGenerateIds::PointIdsOn)
    .function("PointIdsOff", &vtkGenerateIds::PointIdsOff)
    .function("SetCellIds", &vtkGenerateIds::SetCellIds)
    .function("GetCellIds", &vtkGenerateIds::GetCellIds)
    .function("CellIdsOn", &vtkGenerateIds::CellIdsOn)
    .function("CellIdsOff", &vtkGenerateIds::CellIdsOff)
    .function("SetFieldData", &vtkGenerateIds::SetFieldData)
    .function("GetFieldData", &vtkGenerateIds::GetFieldData)
    .function("FieldDataOn", &vtkGenerateIds::FieldDataOn)
    .function("FieldDataOff", &vtkGenerateIds::FieldDataOff)
    .function("SetPointIdsArrayName", &vtkGenerateIds::SetPointIdsArrayName)
    .function("GetPointIdsArrayName", &vtkGenerateIds::GetPointIdsArrayName)
    .function("SetCellIdsArrayName", &vtkGenerateIds::SetCellIdsArrayName)
    .function("GetCellIdsArrayName", &vtkGenerateIds::GetCellIdsArrayName);
}
