// JavaScript wrapper for vtkUniformGrid with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkUniformGridEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkUniformGrid.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkAMRBox.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkUniformGrid.h"

template<> void emscripten::internal::raw_destructor<vtkUniformGrid>(vtkUniformGrid * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUniformGrid_class) {
  emscripten::class_<vtkUniformGrid, emscripten::base<vtkImageData>>("vtkUniformGrid")
    .smart_ptr<vtkSmartPointer<vtkUniformGrid>>("vtkSmartPointer<vtkUniformGrid>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkUniformGrid>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGrid::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUniformGrid& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUniformGrid::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUniformGrid::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUniformGrid::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUniformGrid& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("CopyStructure", &vtkUniformGrid::CopyStructure, emscripten::allow_raw_pointers())
    .function("GetDataObjectType", &vtkUniformGrid::GetDataObjectType)
    .function("Initialize", emscripten::select_overload<void(vtkUniformGrid&)>([](vtkUniformGrid& self) -> void { return self.Initialize(); }))
    .function("NewImageDataCopy", &vtkUniformGrid::NewImageDataCopy, emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUniformGrid*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkUniformGrid* { return vtkUniformGrid::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkUniformGrid*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkUniformGrid* { return vtkUniformGrid::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
