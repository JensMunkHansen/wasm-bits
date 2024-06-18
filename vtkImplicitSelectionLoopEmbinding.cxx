// JavaScript wrapper for vtkImplicitSelectionLoop with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitSelectionLoopEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitSelectionLoop.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkImplicitSelectionLoop.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitSelectionLoop>(vtkImplicitSelectionLoop * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitSelectionLoop_class) {
  emscripten::class_<vtkImplicitSelectionLoop, emscripten::base<vtkImplicitFunction>>("vtkImplicitSelectionLoop")
    .smart_ptr<vtkSmartPointer<vtkImplicitSelectionLoop>>("vtkSmartPointer<vtkImplicitSelectionLoop>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitSelectionLoop>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitSelectionLoop::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitSelectionLoop& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitSelectionLoop::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitSelectionLoop::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitSelectionLoop::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitSelectionLoop& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetLoop", &vtkImplicitSelectionLoop::SetLoop, emscripten::allow_raw_pointers())
    .function("GetLoop", &vtkImplicitSelectionLoop::GetLoop, emscripten::allow_raw_pointers())
    .function("SetAutomaticNormalGeneration", &vtkImplicitSelectionLoop::SetAutomaticNormalGeneration)
    .function("GetAutomaticNormalGeneration", &vtkImplicitSelectionLoop::GetAutomaticNormalGeneration)
    .function("AutomaticNormalGenerationOn", &vtkImplicitSelectionLoop::AutomaticNormalGenerationOn)
    .function("AutomaticNormalGenerationOff", &vtkImplicitSelectionLoop::AutomaticNormalGenerationOff)
    .function("SetNormal", emscripten::select_overload<void(vtkImplicitSelectionLoop&, double, double, double)>([](vtkImplicitSelectionLoop& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetNormal( arg_0, arg_1, arg_2); }))
    .function("GetMTime", &vtkImplicitSelectionLoop::GetMTime)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitSelectionLoop&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitSelectionLoop& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitSelectionLoop&, double, double, double)>([](vtkImplicitSelectionLoop& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
