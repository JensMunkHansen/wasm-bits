// JavaScript wrapper for vtkForEach with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkForEachEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkForEach.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationObjectBaseKey.h"
#include "vtkExecutionRange.h"
#include "vtkEndFor.h"
#include "vtkForEach.h"

template<> void emscripten::internal::raw_destructor<vtkForEach>(vtkForEach * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkForEach_class) {
  emscripten::class_<vtkForEach, emscripten::base<vtkDataObjectAlgorithm>>("vtkForEach")
    .smart_ptr<vtkSmartPointer<vtkForEach>>("vtkSmartPointer<vtkForEach>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkForEach>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForEach::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkForEach& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkForEach::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkForEach::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkForEach::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkForEach& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("FOR_EACH_FILTER", &vtkForEach::FOR_EACH_FILTER, emscripten::allow_raw_pointers())
    .function("SetRange", &vtkForEach::SetRange, emscripten::allow_raw_pointers())
    .function("IsIterating", &vtkForEach::IsIterating)
    .function("RegisterEndFor", &vtkForEach::RegisterEndFor, emscripten::allow_raw_pointers());
}
