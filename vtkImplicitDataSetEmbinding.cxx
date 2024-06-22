// JavaScript wrapper for vtkImplicitDataSet with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitDataSetEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitDataSet.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataSet.h"
#include "vtkDataArray.h"
#include "vtkImplicitDataSet.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitDataSet>(vtkImplicitDataSet * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitDataSet_class) {
  emscripten::class_<vtkImplicitDataSet, emscripten::base<vtkImplicitFunction>>("vtkImplicitDataSet")
    .smart_ptr<vtkSmartPointer<vtkImplicitDataSet>>("vtkSmartPointer<vtkImplicitDataSet>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitDataSet>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitDataSet::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitDataSet& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitDataSet::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitDataSet::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitDataSet::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitDataSet& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImplicitDataSet::GetMTime)
    .function("SetDataSet", &vtkImplicitDataSet::SetDataSet, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkImplicitDataSet::GetDataSet, emscripten::allow_raw_pointers())
    .function("SetOutValue", &vtkImplicitDataSet::SetOutValue)
    .function("GetOutValue", &vtkImplicitDataSet::GetOutValue)
    .function("SetOutGradient", emscripten::select_overload<void(vtkImplicitDataSet&, double, double, double)>([](vtkImplicitDataSet& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutGradient( arg_0, arg_1, arg_2); }))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitDataSet&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitDataSet& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitDataSet&, double, double, double)>([](vtkImplicitDataSet& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
