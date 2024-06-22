// JavaScript wrapper for vtkMultiPieceDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkMultiPieceDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkMultiPieceDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataObject.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkMultiPieceDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkMultiPieceDataSet>(vtkMultiPieceDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMultiPieceDataSet_class) {
  emscripten::class_<vtkMultiPieceDataSet, emscripten::base<vtkPartitionedDataSet>>("vtkMultiPieceDataSet")
    .smart_ptr<vtkSmartPointer<vtkMultiPieceDataSet>>("vtkSmartPointer<vtkMultiPieceDataSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMultiPieceDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiPieceDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMultiPieceDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMultiPieceDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMultiPieceDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMultiPieceDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMultiPieceDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkMultiPieceDataSet::GetDataObjectType)
    .function("SetNumberOfPieces", &vtkMultiPieceDataSet::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkMultiPieceDataSet::GetNumberOfPieces)
    .function("GetPiece", &vtkMultiPieceDataSet::GetPiece, emscripten::allow_raw_pointers())
    .function("GetPieceAsDataObject", &vtkMultiPieceDataSet::GetPieceAsDataObject, emscripten::allow_raw_pointers())
    .function("SetPiece", &vtkMultiPieceDataSet::SetPiece, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkMultiPieceDataSet*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkMultiPieceDataSet* { return vtkMultiPieceDataSet::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkMultiPieceDataSet*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkMultiPieceDataSet* { return vtkMultiPieceDataSet::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
