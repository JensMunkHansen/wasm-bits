// JavaScript wrapper for vtkPerlinNoise with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPerlinNoiseEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPerlinNoise.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkPerlinNoise.h"

template<> void emscripten::internal::raw_destructor<vtkPerlinNoise>(vtkPerlinNoise * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPerlinNoise_class) {
  emscripten::class_<vtkPerlinNoise, emscripten::base<vtkImplicitFunction>>("vtkPerlinNoise")
    .smart_ptr<vtkSmartPointer<vtkPerlinNoise>>("vtkSmartPointer<vtkPerlinNoise>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPerlinNoise>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPerlinNoise::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPerlinNoise& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPerlinNoise::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPerlinNoise::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPerlinNoise::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPerlinNoise& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFrequency", emscripten::select_overload<void(vtkPerlinNoise&, double, double, double)>([](vtkPerlinNoise& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetFrequency( arg_0, arg_1, arg_2); }))
    .function("SetPhase", emscripten::select_overload<void(vtkPerlinNoise&, double, double, double)>([](vtkPerlinNoise& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetPhase( arg_0, arg_1, arg_2); }))
    .function("SetAmplitude", &vtkPerlinNoise::SetAmplitude)
    .function("GetAmplitude", &vtkPerlinNoise::GetAmplitude)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkPerlinNoise&, vtkDataArray*, vtkDataArray*)>([](vtkPerlinNoise& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkPerlinNoise&, double, double, double)>([](vtkPerlinNoise& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
