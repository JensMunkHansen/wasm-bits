// JavaScript wrapper for vtkDistributedGraphHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkDistributedGraphHelperEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkDistributedGraphHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationIntegerKey.h"
#include "vtkDistributedGraphHelper.h"

template<> void emscripten::internal::raw_destructor<vtkDistributedGraphHelper>(vtkDistributedGraphHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkDistributedGraphHelper_class) {
  emscripten::class_<vtkDistributedGraphHelper, emscripten::base<vtkObject>>("vtkDistributedGraphHelper")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistributedGraphHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkDistributedGraphHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkDistributedGraphHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkDistributedGraphHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkDistributedGraphHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkDistributedGraphHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVertexOwner", &vtkDistributedGraphHelper::GetVertexOwner)
    .function("GetVertexIndex", &vtkDistributedGraphHelper::GetVertexIndex)
    .function("GetEdgeOwner", &vtkDistributedGraphHelper::GetEdgeOwner)
    .function("GetEdgeIndex", &vtkDistributedGraphHelper::GetEdgeIndex)
    .function("MakeDistributedId", &vtkDistributedGraphHelper::MakeDistributedId)
    .function("GetVertexOwnerByPedigreeId", &vtkDistributedGraphHelper::GetVertexOwnerByPedigreeId)
    .class_function("DISTRIBUTEDVERTEXIDS", &vtkDistributedGraphHelper::DISTRIBUTEDVERTEXIDS, emscripten::allow_raw_pointers())
    .class_function("DISTRIBUTEDEDGEIDS", &vtkDistributedGraphHelper::DISTRIBUTEDEDGEIDS, emscripten::allow_raw_pointers());
}
