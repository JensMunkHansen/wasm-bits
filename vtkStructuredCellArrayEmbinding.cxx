// JavaScript wrapper for vtkStructuredCellArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStructuredCellArrayEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStructuredCellArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkAbstractCellArray.h"
#include "vtkStructuredCellArray.h"

template<> void emscripten::internal::raw_destructor<vtkStructuredCellArray>(vtkStructuredCellArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStructuredCellArray_class) {
  emscripten::class_<vtkStructuredCellArray, emscripten::base<vtkAbstractCellArray>>("vtkStructuredCellArray")
    .smart_ptr<vtkSmartPointer<vtkStructuredCellArray>>("vtkSmartPointer<vtkStructuredCellArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkStructuredCellArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredCellArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStructuredCellArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStructuredCellArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStructuredCellArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStructuredCellArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStructuredCellArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkStructuredCellArray::Initialize)
    .function("GetNumberOfCells", &vtkStructuredCellArray::GetNumberOfCells)
    .function("GetNumberOfOffsets", &vtkStructuredCellArray::GetNumberOfOffsets)
    .function("GetOffset", &vtkStructuredCellArray::GetOffset)
    .function("GetNumberOfConnectivityIds", &vtkStructuredCellArray::GetNumberOfConnectivityIds)
    .function("IsStorageShareable", &vtkStructuredCellArray::IsStorageShareable)
    .function("IsHomogeneous", &vtkStructuredCellArray::IsHomogeneous)
    .function("GetCellAtId", emscripten::select_overload<void(vtkStructuredCellArray&, int, vtkIdList*)>([](vtkStructuredCellArray& self, int arg_0, vtkIdList* arg_1) -> void { return self.GetCellAtId( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("GetCellSize", &vtkStructuredCellArray::GetCellSize)
    .function("GetMaxCellSize", &vtkStructuredCellArray::GetMaxCellSize)
    .function("DeepCopy", &vtkStructuredCellArray::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkStructuredCellArray::ShallowCopy, emscripten::allow_raw_pointers());
}
