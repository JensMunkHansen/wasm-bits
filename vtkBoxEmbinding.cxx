// JavaScript wrapper for vtkBox with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkBoxEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkBox.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkBox.h"

template<> void emscripten::internal::raw_destructor<vtkBox>(vtkBox * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBox_class) {
  emscripten::class_<vtkBox, emscripten::base<vtkImplicitFunction>>("vtkBox")
    .smart_ptr<vtkSmartPointer<vtkBox>>("vtkSmartPointer<vtkBox>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkBox>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBox::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBox& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBox::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBox::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBox::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBox& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXMin", emscripten::select_overload<void(vtkBox&, double, double, double)>([](vtkBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXMin( arg_0, arg_1, arg_2); }))
    .function("SetXMax", emscripten::select_overload<void(vtkBox&, double, double, double)>([](vtkBox& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXMax( arg_0, arg_1, arg_2); }))
    .function("SetBounds", emscripten::select_overload<void(vtkBox&, double, double, double, double, double, double)>([](vtkBox& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkBox&, vtkDataArray*, vtkDataArray*)>([](vtkBox& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkBox&, double, double, double)>([](vtkBox& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
