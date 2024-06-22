// JavaScript wrapper for vtkVortexCore with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkFiltersFlowPaths.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersFlowPaths.js/vtkVortexCoreEmbinding.cxx \
 /home/jmh/github/vtk/Filters/FlowPaths/vtkVortexCore.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVortexCore.h"

template<> void emscripten::internal::raw_destructor<vtkVortexCore>(vtkVortexCore * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkVortexCore_class) {
  emscripten::class_<vtkVortexCore, emscripten::base<vtkPolyDataAlgorithm>>("vtkVortexCore")
    .smart_ptr<vtkSmartPointer<vtkVortexCore>>("vtkSmartPointer<vtkVortexCore>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkVortexCore>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVortexCore::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkVortexCore& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkVortexCore::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkVortexCore::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkVortexCore::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkVortexCore& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHigherOrderMethod", &vtkVortexCore::SetHigherOrderMethod)
    .function("GetHigherOrderMethod", &vtkVortexCore::GetHigherOrderMethod)
    .function("HigherOrderMethodOn", &vtkVortexCore::HigherOrderMethodOn)
    .function("HigherOrderMethodOff", &vtkVortexCore::HigherOrderMethodOff)
    .function("GetFasterApproximation", &vtkVortexCore::GetFasterApproximation)
    .function("SetFasterApproximation", &vtkVortexCore::SetFasterApproximation)
    .function("FasterApproximationOn", &vtkVortexCore::FasterApproximationOn)
    .function("FasterApproximationOff", &vtkVortexCore::FasterApproximationOff);
}
