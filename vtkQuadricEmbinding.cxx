// JavaScript wrapper for vtkQuadric with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkQuadricEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkQuadric.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkQuadric.h"

template<> void emscripten::internal::raw_destructor<vtkQuadric>(vtkQuadric * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkQuadric_class) {
  emscripten::class_<vtkQuadric, emscripten::base<vtkImplicitFunction>>("vtkQuadric")
    .smart_ptr<vtkSmartPointer<vtkQuadric>>("vtkSmartPointer<vtkQuadric>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkQuadric>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadric::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkQuadric& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkQuadric::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkQuadric::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkQuadric::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkQuadric& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetCoefficients", emscripten::select_overload<void(vtkQuadric&, double, double, double, double, double, double, double, double, double, double)>([](vtkQuadric& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8, double arg_9) -> void { return self.SetCoefficients( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9); }))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkQuadric&, vtkDataArray*, vtkDataArray*)>([](vtkQuadric& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkQuadric&, double, double, double)>([](vtkQuadric& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
