// JavaScript wrapper for vtkObjectBase with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkObjectBaseEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkObjectBase.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"

template<> void emscripten::internal::raw_destructor<vtkObjectBase>(vtkObjectBase * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkObjectBase_class) {
  emscripten::class_<vtkObjectBase>("vtkObjectBase")
    .smart_ptr<vtkSmartPointer<vtkObjectBase>>("vtkSmartPointer<vtkObjectBase>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkObjectBase>)
    .function("GetClassName", emscripten::optional_override([](vtkObjectBase& self) -> std::string {  return self.GetClassName();}))
    .function("GetObjectDescription", &vtkObjectBase::GetObjectDescription)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectBase::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkObjectBase& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkObjectBase::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkObjectBase& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InitializeObjectBase", &vtkObjectBase::InitializeObjectBase)
    .function("UsesGarbageCollector", &vtkObjectBase::UsesGarbageCollector)
    .function("GetReferenceCount", &vtkObjectBase::GetReferenceCount)
    .function("SetReferenceCount", &vtkObjectBase::SetReferenceCount);
}
