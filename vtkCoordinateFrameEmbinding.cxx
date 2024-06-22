// JavaScript wrapper for vtkCoordinateFrame with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCoordinateFrameEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCoordinateFrame.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataArray.h"
#include "vtkCoordinateFrame.h"

template<> void emscripten::internal::raw_destructor<vtkCoordinateFrame>(vtkCoordinateFrame * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCoordinateFrame_class) {
  emscripten::class_<vtkCoordinateFrame, emscripten::base<vtkImplicitFunction>>("vtkCoordinateFrame")
    .smart_ptr<vtkSmartPointer<vtkCoordinateFrame>>("vtkSmartPointer<vtkCoordinateFrame>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCoordinateFrame>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinateFrame::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCoordinateFrame& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCoordinateFrame::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCoordinateFrame::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCoordinateFrame::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCoordinateFrame& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrigin", emscripten::select_overload<void(vtkCoordinateFrame&, double, double, double)>([](vtkCoordinateFrame& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOrigin( arg_0, arg_1, arg_2); }))
    .function("SetXAxis", emscripten::select_overload<void(vtkCoordinateFrame&, double, double, double)>([](vtkCoordinateFrame& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetXAxis( arg_0, arg_1, arg_2); }))
    .function("SetYAxis", emscripten::select_overload<void(vtkCoordinateFrame&, double, double, double)>([](vtkCoordinateFrame& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetYAxis( arg_0, arg_1, arg_2); }))
    .function("SetZAxis", emscripten::select_overload<void(vtkCoordinateFrame&, double, double, double)>([](vtkCoordinateFrame& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetZAxis( arg_0, arg_1, arg_2); }))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkCoordinateFrame&, vtkDataArray*, vtkDataArray*)>([](vtkCoordinateFrame& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkCoordinateFrame&, double, double, double)>([](vtkCoordinateFrame& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
