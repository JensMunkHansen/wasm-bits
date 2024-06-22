// JavaScript wrapper for vtkThinPlateSplineTransform with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkCommonTransforms.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonTransforms.js/vtkThinPlateSplineTransformEmbinding.cxx \
 /home/jmh/github/vtk/Common/Transforms/vtkThinPlateSplineTransform.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPoints.h"
#include "vtkAbstractTransform.h"
#include "vtkThinPlateSplineTransform.h"

EMSCRIPTEN_BINDINGS(vtkCommonTransforms_vtkThinPlateSplineTransform_0_1_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "VTK_RBF_CUSTOM", 0 },
      { "VTK_RBF_R", 1 },
      { "VTK_RBF_R2LOGR", 2 },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkThinPlateSplineTransform>(vtkThinPlateSplineTransform * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkThinPlateSplineTransform_class) {
  emscripten::class_<vtkThinPlateSplineTransform, emscripten::base<vtkWarpTransform>>("vtkThinPlateSplineTransform")
    .smart_ptr<vtkSmartPointer<vtkThinPlateSplineTransform>>("vtkSmartPointer<vtkThinPlateSplineTransform>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkThinPlateSplineTransform>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThinPlateSplineTransform::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkThinPlateSplineTransform& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkThinPlateSplineTransform::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkThinPlateSplineTransform::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkThinPlateSplineTransform::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkThinPlateSplineTransform& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetSigma", &vtkThinPlateSplineTransform::GetSigma)
    .function("SetSigma", &vtkThinPlateSplineTransform::SetSigma)
    .function("SetBasis", &vtkThinPlateSplineTransform::SetBasis)
    .function("GetBasis", &vtkThinPlateSplineTransform::GetBasis)
    .function("SetBasisToR", &vtkThinPlateSplineTransform::SetBasisToR)
    .function("SetBasisToR2LogR", &vtkThinPlateSplineTransform::SetBasisToR2LogR)
    .function("GetBasisAsString", emscripten::optional_override([](vtkThinPlateSplineTransform& self) -> std::string {  return self.GetBasisAsString();}))
    .function("SetBasisFunction", emscripten::optional_override([](vtkThinPlateSplineTransform& self, emscripten::val arg_0) -> void {  return self.SetBasisFunction( reinterpret_cast<double(*)( double)>(emscripten::val::module_property("addFunction")(arg_0, std::string("dd")).as<int>()));}))
    .function("SetSourceLandmarks", &vtkThinPlateSplineTransform::SetSourceLandmarks, emscripten::allow_raw_pointers())
    .function("GetSourceLandmarks", &vtkThinPlateSplineTransform::GetSourceLandmarks, emscripten::allow_raw_pointers())
    .function("SetTargetLandmarks", &vtkThinPlateSplineTransform::SetTargetLandmarks, emscripten::allow_raw_pointers())
    .function("GetTargetLandmarks", &vtkThinPlateSplineTransform::GetTargetLandmarks, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkThinPlateSplineTransform::GetMTime)
    .function("MakeTransform", &vtkThinPlateSplineTransform::MakeTransform, emscripten::allow_raw_pointers())
    .function("GetRegularizeBulkTransform", &vtkThinPlateSplineTransform::GetRegularizeBulkTransform)
    .function("SetRegularizeBulkTransform", &vtkThinPlateSplineTransform::SetRegularizeBulkTransform)
    .function("RegularizeBulkTransformOn", &vtkThinPlateSplineTransform::RegularizeBulkTransformOn)
    .function("RegularizeBulkTransformOff", &vtkThinPlateSplineTransform::RegularizeBulkTransformOff);
}
