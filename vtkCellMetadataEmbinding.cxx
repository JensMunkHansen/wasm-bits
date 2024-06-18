// JavaScript wrapper for vtkCellMetadata with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellMetadataEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellMetadata.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkCellGrid.h"
#include "vtkStringToken.h"
#include "vtkCellGridQuery.h"
#include "vtkCellGridResponders.h"
#include "vtkCellMetadata.h"

template<> void emscripten::internal::raw_destructor<vtkCellMetadata>(vtkCellMetadata * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellMetadata_class) {
  emscripten::class_<vtkCellMetadata, emscripten::base<vtkObject>>("vtkCellMetadata")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellMetadata::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellMetadata& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellMetadata::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", emscripten::select_overload<vtkCellMetadata*(vtkCellMetadata&)>([](vtkCellMetadata& self) -> vtkCellMetadata* { return self.NewInstance(); }), emscripten::allow_raw_pointers())
    .class_function("NewInstance", emscripten::select_overload<vtkSmartPointer<vtkCellMetadata>( vtkStringToken, vtkCellGrid*)>([]( vtkStringToken arg_0, vtkCellGrid* arg_1) -> vtkSmartPointer<vtkCellMetadata> { return vtkCellMetadata::NewInstance( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellMetadata::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellMetadata& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCellGrid", &vtkCellMetadata::SetCellGrid, emscripten::allow_raw_pointers())
    .function("GetCellGrid", &vtkCellMetadata::GetCellGrid, emscripten::allow_raw_pointers())
    .function("GetNumberOfCells", &vtkCellMetadata::GetNumberOfCells)
    .function("Query", &vtkCellMetadata::Query, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkCellMetadata::ShallowCopy, emscripten::allow_raw_pointers())
    .function("DeepCopy", &vtkCellMetadata::DeepCopy, emscripten::allow_raw_pointers())
    .class_function("GetResponders", &vtkCellMetadata::GetResponders, emscripten::allow_raw_pointers())
    .function("GetCaches", &vtkCellMetadata::GetCaches, emscripten::allow_raw_pointers());
}
