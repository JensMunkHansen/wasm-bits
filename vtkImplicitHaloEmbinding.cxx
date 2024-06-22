// JavaScript wrapper for vtkImplicitHalo with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitHaloEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitHalo.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkImplicitHalo.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitHalo>(vtkImplicitHalo * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitHalo_class) {
  emscripten::class_<vtkImplicitHalo, emscripten::base<vtkImplicitFunction>>("vtkImplicitHalo")
    .smart_ptr<vtkSmartPointer<vtkImplicitHalo>>("vtkSmartPointer<vtkImplicitHalo>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImplicitHalo>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitHalo::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitHalo& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitHalo::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitHalo::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitHalo::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitHalo& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkImplicitHalo::SetRadius)
    .function("GetRadius", &vtkImplicitHalo::GetRadius)
    .function("SetCenter", emscripten::select_overload<void(vtkImplicitHalo&, double, double, double)>([](vtkImplicitHalo& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetFadeOut", &vtkImplicitHalo::SetFadeOut)
    .function("GetFadeOut", &vtkImplicitHalo::GetFadeOut)
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitHalo&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitHalo& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitHalo&, double, double, double)>([](vtkImplicitHalo& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
