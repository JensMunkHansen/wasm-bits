// JavaScript wrapper for vtkImplicitVolume with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkImplicitVolumeEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkImplicitVolume.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkDataArray.h"
#include "vtkImplicitVolume.h"

template<> void emscripten::internal::raw_destructor<vtkImplicitVolume>(vtkImplicitVolume * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImplicitVolume_class) {
  emscripten::class_<vtkImplicitVolume, emscripten::base<vtkImplicitFunction>>("vtkImplicitVolume")
    .smart_ptr<vtkSmartPointer<vtkImplicitVolume>>("vtkSmartPointer<vtkImplicitVolume>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImplicitVolume>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitVolume::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImplicitVolume& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImplicitVolume::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImplicitVolume::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImplicitVolume::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImplicitVolume& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkImplicitVolume::GetMTime)
    .function("SetVolume", &vtkImplicitVolume::SetVolume, emscripten::allow_raw_pointers())
    .function("GetVolume", &vtkImplicitVolume::GetVolume, emscripten::allow_raw_pointers())
    .function("SetOutValue", &vtkImplicitVolume::SetOutValue)
    .function("GetOutValue", &vtkImplicitVolume::GetOutValue)
    .function("SetOutGradient", emscripten::select_overload<void(vtkImplicitVolume&, double, double, double)>([](vtkImplicitVolume& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetOutGradient( arg_0, arg_1, arg_2); }))
    .function("EvaluateFunction", emscripten::select_overload<void(vtkImplicitVolume&, vtkDataArray*, vtkDataArray*)>([](vtkImplicitVolume& self, vtkDataArray* arg_0, vtkDataArray* arg_1) -> void { return self.EvaluateFunction( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("EvaluateFunction", emscripten::select_overload<double(vtkImplicitVolume&, double, double, double)>([](vtkImplicitVolume& self, double arg_0, double arg_1, double arg_2) -> double { return self.EvaluateFunction( arg_0, arg_1, arg_2); }));
}
