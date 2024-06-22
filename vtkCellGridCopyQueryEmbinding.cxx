// JavaScript wrapper for vtkCellGridCopyQuery with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellGridCopyQueryEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellGridCopyQuery.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellGrid.h"
#include "vtkIdList.h"
#include "vtkCellAttribute.h"
#include "vtkStringToken.h"
#include "vtkCellGridCopyQuery.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridCopyQuery>(vtkCellGridCopyQuery * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridCopyQuery_class) {
  emscripten::class_<vtkCellGridCopyQuery, emscripten::base<vtkCellGridQuery>>("vtkCellGridCopyQuery")
    .smart_ptr<vtkSmartPointer<vtkCellGridCopyQuery>>("vtkSmartPointer<vtkCellGridCopyQuery>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridCopyQuery>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridCopyQuery::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridCopyQuery& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridCopyQuery::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridCopyQuery::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridCopyQuery::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridCopyQuery& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkCellGridCopyQuery::Initialize)
    .function("Finalize", &vtkCellGridCopyQuery::Finalize)
    .function("SetSource", &vtkCellGridCopyQuery::SetSource, emscripten::allow_raw_pointers())
    .function("GetSource", &vtkCellGridCopyQuery::GetSource, emscripten::allow_raw_pointers())
    .function("SetTarget", &vtkCellGridCopyQuery::SetTarget, emscripten::allow_raw_pointers())
    .function("GetTarget", &vtkCellGridCopyQuery::GetTarget, emscripten::allow_raw_pointers())
    .function("GetCopyCells", &vtkCellGridCopyQuery::GetCopyCells)
    .function("SetCopyCells", &vtkCellGridCopyQuery::SetCopyCells)
    .function("CopyCellsOn", &vtkCellGridCopyQuery::CopyCellsOn)
    .function("CopyCellsOff", &vtkCellGridCopyQuery::CopyCellsOff)
    .function("GetCopyOnlyShape", &vtkCellGridCopyQuery::GetCopyOnlyShape)
    .function("SetCopyOnlyShape", &vtkCellGridCopyQuery::SetCopyOnlyShape)
    .function("CopyOnlyShapeOn", &vtkCellGridCopyQuery::CopyOnlyShapeOn)
    .function("CopyOnlyShapeOff", &vtkCellGridCopyQuery::CopyOnlyShapeOff)
    .function("GetCopyArrays", &vtkCellGridCopyQuery::GetCopyArrays)
    .function("SetCopyArrays", &vtkCellGridCopyQuery::SetCopyArrays)
    .function("CopyArraysOn", &vtkCellGridCopyQuery::CopyArraysOn)
    .function("CopyArraysOff", &vtkCellGridCopyQuery::CopyArraysOff)
    .function("GetCopyArrayValues", &vtkCellGridCopyQuery::GetCopyArrayValues)
    .function("SetCopyArrayValues", &vtkCellGridCopyQuery::SetCopyArrayValues)
    .function("CopyArrayValuesOn", &vtkCellGridCopyQuery::CopyArrayValuesOn)
    .function("CopyArrayValuesOff", &vtkCellGridCopyQuery::CopyArrayValuesOff)
    .function("GetDeepCopyArrays", &vtkCellGridCopyQuery::GetDeepCopyArrays)
    .function("SetDeepCopyArrays", &vtkCellGridCopyQuery::SetDeepCopyArrays)
    .function("DeepCopyArraysOn", &vtkCellGridCopyQuery::DeepCopyArraysOn)
    .function("DeepCopyArraysOff", &vtkCellGridCopyQuery::DeepCopyArraysOff)
    .function("GetCopySchema", &vtkCellGridCopyQuery::GetCopySchema)
    .function("SetCopySchema", &vtkCellGridCopyQuery::SetCopySchema)
    .function("CopySchemaOn", &vtkCellGridCopyQuery::CopySchemaOn)
    .function("CopySchemaOff", &vtkCellGridCopyQuery::CopySchemaOff)
    .function("AddSourceCellAttributeId", &vtkCellGridCopyQuery::AddSourceCellAttributeId)
    .function("RemoveSourceCellAttributeId", &vtkCellGridCopyQuery::RemoveSourceCellAttributeId)
    .function("AddAllSourceCellAttributeIds", &vtkCellGridCopyQuery::AddAllSourceCellAttributeIds)
    .function("GetCellAttributeIds", emscripten::select_overload<void(vtkCellGridCopyQuery&, vtkIdList*)>([](vtkCellGridCopyQuery& self, vtkIdList* arg_0) -> void { return self.GetCellAttributeIds( arg_0); }), emscripten::allow_raw_pointers())
    .function("ResetCellAttributeIds", &vtkCellGridCopyQuery::ResetCellAttributeIds)
    .function("CopyAttributeArrays", &vtkCellGridCopyQuery::CopyAttributeArrays, emscripten::allow_raw_pointers())
    .function("CopyOrUpdateAttributeRecord", &vtkCellGridCopyQuery::CopyOrUpdateAttributeRecord, emscripten::allow_raw_pointers());
}
