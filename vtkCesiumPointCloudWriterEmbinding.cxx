// JavaScript wrapper for vtkCesiumPointCloudWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkIOCesium3DTiles.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOCesium3DTiles.js/vtkCesiumPointCloudWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Cesium3DTiles/vtkCesiumPointCloudWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkCesiumPointCloudWriter.h"

template<> void emscripten::internal::raw_destructor<vtkCesiumPointCloudWriter>(vtkCesiumPointCloudWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCesiumPointCloudWriter_class) {
  emscripten::class_<vtkCesiumPointCloudWriter, emscripten::base<vtkWriter>>("vtkCesiumPointCloudWriter")
    .smart_ptr<vtkSmartPointer<vtkCesiumPointCloudWriter>>("vtkSmartPointer<vtkCesiumPointCloudWriter>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCesiumPointCloudWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesiumPointCloudWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCesiumPointCloudWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCesiumPointCloudWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCesiumPointCloudWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCesiumPointCloudWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCesiumPointCloudWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkCesiumPointCloudWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkCesiumPointCloudWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetPointIds", &vtkCesiumPointCloudWriter::SetPointIds, emscripten::allow_raw_pointers())
    .function("GetPointIds", &vtkCesiumPointCloudWriter::GetPointIds, emscripten::allow_raw_pointers());
}
