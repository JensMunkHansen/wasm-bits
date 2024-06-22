// JavaScript wrapper for vtkCPExodusIIElementBlock with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkIOExodus.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExodus.js/vtkCPExodusIIElementBlockEmbinding.cxx \
 /home/jmh/github/vtk/IO/Exodus/vtkCPExodusIIElementBlock.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkIdList.h"
#include "vtkCellArray.h"
#include "vtkIdTypeArray.h"
#include "vtkCPExodusIIElementBlock.h"

template<> void emscripten::internal::raw_destructor<vtkCPExodusIIElementBlockImpl>(vtkCPExodusIIElementBlockImpl * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCPExodusIIElementBlockImpl_class) {
  emscripten::class_<vtkCPExodusIIElementBlockImpl, emscripten::base<vtkObject>>("vtkCPExodusIIElementBlockImpl")
    .smart_ptr<vtkSmartPointer<vtkCPExodusIIElementBlockImpl>>("vtkSmartPointer<vtkCPExodusIIElementBlockImpl>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCPExodusIIElementBlockImpl>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCPExodusIIElementBlockImpl::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCPExodusIIElementBlockImpl& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCPExodusIIElementBlockImpl::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCPExodusIIElementBlockImpl::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCPExodusIIElementBlockImpl::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCPExodusIIElementBlockImpl& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetExodusConnectivityArray", emscripten::optional_override([](vtkCPExodusIIElementBlockImpl& self, std::uintptr_t arg_0, const std::string& arg_1, int arg_2, int arg_3) -> bool {  return self.SetExodusConnectivityArray(reinterpret_cast<int*>(arg_0 * sizeof(int)), arg_1, arg_2, arg_3);}))
    .function("GetNumberOfCells", &vtkCPExodusIIElementBlockImpl::GetNumberOfCells)
    .function("GetCellType", &vtkCPExodusIIElementBlockImpl::GetCellType)
    .function("GetCellPoints", &vtkCPExodusIIElementBlockImpl::GetCellPoints, emscripten::allow_raw_pointers())
    .function("GetFaceStream", &vtkCPExodusIIElementBlockImpl::GetFaceStream, emscripten::allow_raw_pointers())
    .function("GetPolyhedronFaces", &vtkCPExodusIIElementBlockImpl::GetPolyhedronFaces, emscripten::allow_raw_pointers())
    .function("GetPointCells", &vtkCPExodusIIElementBlockImpl::GetPointCells, emscripten::allow_raw_pointers())
    .function("GetMaxCellSize", &vtkCPExodusIIElementBlockImpl::GetMaxCellSize)
    .function("GetIdsOfCellsOfType", &vtkCPExodusIIElementBlockImpl::GetIdsOfCellsOfType, emscripten::allow_raw_pointers())
    .function("IsHomogeneous", &vtkCPExodusIIElementBlockImpl::IsHomogeneous)
    .function("Allocate", &vtkCPExodusIIElementBlockImpl::Allocate)
    .function("InsertNextCell", emscripten::select_overload<int(vtkCPExodusIIElementBlockImpl&, int, vtkIdList*)>([](vtkCPExodusIIElementBlockImpl& self, int arg_0, vtkIdList* arg_1) -> int { return self.InsertNextCell( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
template<> void emscripten::internal::raw_destructor<vtkCPExodusIIElementBlock>(vtkCPExodusIIElementBlock * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCPExodusIIElementBlock_class) {
  emscripten::class_<vtkCPExodusIIElementBlock, emscripten::base<vtkUnstructuredGridBase>>("vtkCPExodusIIElementBlock")
    .smart_ptr<vtkSmartPointer<vtkCPExodusIIElementBlock>>("vtkSmartPointer<vtkCPExodusIIElementBlock>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCPExodusIIElementBlock>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCPExodusIIElementBlock::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCPExodusIIElementBlock& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCPExodusIIElementBlock::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCPExodusIIElementBlock::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCPExodusIIElementBlock::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCPExodusIIElementBlock& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
