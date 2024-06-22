// JavaScript wrapper for vtkNonOverlappingAMR with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkNonOverlappingAMREmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkNonOverlappingAMR.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkNonOverlappingAMR.h"

template<> void emscripten::internal::raw_destructor<vtkNonOverlappingAMR>(vtkNonOverlappingAMR * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNonOverlappingAMR_class) {
  emscripten::class_<vtkNonOverlappingAMR, emscripten::base<vtkUniformGridAMR>>("vtkNonOverlappingAMR")
    .smart_ptr<vtkSmartPointer<vtkNonOverlappingAMR>>("vtkSmartPointer<vtkNonOverlappingAMR>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkNonOverlappingAMR>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonOverlappingAMR::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNonOverlappingAMR& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNonOverlappingAMR::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNonOverlappingAMR::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNonOverlappingAMR::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNonOverlappingAMR& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetDataObjectType", &vtkNonOverlappingAMR::GetDataObjectType)
    .class_function("GetData", emscripten::select_overload<vtkNonOverlappingAMR*( vtkInformation*)>([]( vtkInformation* arg_0) -> vtkNonOverlappingAMR* { return vtkNonOverlappingAMR::GetData( arg_0); }), emscripten::allow_raw_pointers())
    .class_function("GetData", emscripten::select_overload<vtkNonOverlappingAMR*( vtkInformationVector*, int)>([]( vtkInformationVector* arg_0, int arg_1) -> vtkNonOverlappingAMR* { return vtkNonOverlappingAMR::GetData( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
