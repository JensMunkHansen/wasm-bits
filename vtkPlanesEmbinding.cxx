// JavaScript wrapper for vtkPlanes with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkPlanesEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkPlanes.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkDataArray.h"
#include "vtkPlane.h"
#include "vtkPlanes.h"

template<> void emscripten::internal::raw_destructor<vtkPlanes>(vtkPlanes * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlanes_class) {
  emscripten::class_<vtkPlanes, emscripten::base<vtkImplicitFunction>>("vtkPlanes")
    .smart_ptr<vtkSmartPointer<vtkPlanes>>("vtkSmartPointer<vtkPlanes>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlanes>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlanes::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlanes& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlanes::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlanes::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlanes::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlanes& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPoints", &vtkPlanes::SetPoints, emscripten::allow_raw_pointers())
    .function("GetPoints", &vtkPlanes::GetPoints, emscripten::allow_raw_pointers())
    .function("SetNormals", &vtkPlanes::SetNormals, emscripten::allow_raw_pointers())
    .function("GetNormals", &vtkPlanes::GetNormals, emscripten::allow_raw_pointers())
    .function("SetBounds", emscripten::select_overload<void(vtkPlanes&, double, double, double, double, double, double)>([](vtkPlanes& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("GetNumberOfPlanes", &vtkPlanes::GetNumberOfPlanes)
    .function("GetPlane", emscripten::select_overload<vtkPlane*(vtkPlanes&, int)>([](vtkPlanes& self, int arg_0) -> vtkPlane* { return self.GetPlane( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetPlane", emscripten::select_overload<void(vtkPlanes&, int, vtkPlane*)>([](vtkPlanes& self, int arg_0, vtkPlane* arg_1) -> void { return self.GetPlane( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<void(vtkPlanes&, vtkDataArray*, vtkDataArray*)>([](vtkPlanes& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkPlanes&, double, double, double)>([](vtkPlanes& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
