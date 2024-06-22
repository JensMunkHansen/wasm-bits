// JavaScript wrapper for vtkEnsembleSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkEnsembleSourceEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkEnsembleSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithm.h"
#include "vtkTable.h"
#include "vtkInformationDataObjectMetaDataKey.h"
#include "vtkInformationIntegerRequestKey.h"
#include "vtkEnsembleSource.h"

template<> void emscripten::internal::raw_destructor<vtkEnsembleSource>(vtkEnsembleSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEnsembleSource_class) {
  emscripten::class_<vtkEnsembleSource, emscripten::base<vtkAlgorithm>>("vtkEnsembleSource")
    .smart_ptr<vtkSmartPointer<vtkEnsembleSource>>("vtkSmartPointer<vtkEnsembleSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEnsembleSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnsembleSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEnsembleSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEnsembleSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEnsembleSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEnsembleSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEnsembleSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("AddMember", &vtkEnsembleSource::AddMember, emscripten::allow_raw_pointers())
    .function("RemoveAllMembers", &vtkEnsembleSource::RemoveAllMembers)
    .function("GetNumberOfMembers", &vtkEnsembleSource::GetNumberOfMembers)
    .function("SetCurrentMember", &vtkEnsembleSource::SetCurrentMember)
    .function("GetCurrentMember", &vtkEnsembleSource::GetCurrentMember)
    .function("SetMetaData", &vtkEnsembleSource::SetMetaData, emscripten::allow_raw_pointers())
    .class_function("META_DATA", &vtkEnsembleSource::META_DATA, emscripten::allow_raw_pointers())
    .class_function("UPDATE_MEMBER", &vtkEnsembleSource::UPDATE_MEMBER, emscripten::allow_raw_pointers());
}
