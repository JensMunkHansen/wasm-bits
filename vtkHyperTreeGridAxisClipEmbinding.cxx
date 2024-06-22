// JavaScript wrapper for vtkHyperTreeGridAxisClip with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkFiltersHyperTree.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersHyperTree.js/vtkHyperTreeGridAxisClipEmbinding.cxx \
 /home/jmh/github/vtk/Filters/HyperTree/vtkHyperTreeGridAxisClip.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkQuadric.h"
#include "vtkHyperTreeGridAxisClip.h"

EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridAxisClip_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkHyperTreeGridAxisClip>(vtkHyperTreeGridAxisClip * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkHyperTreeGridAxisClip_class) {
  emscripten::class_<vtkHyperTreeGridAxisClip, emscripten::base<vtkHyperTreeGridAlgorithm>>("vtkHyperTreeGridAxisClip")
    .smart_ptr<vtkSmartPointer<vtkHyperTreeGridAxisClip>>("vtkSmartPointer<vtkHyperTreeGridAxisClip>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkHyperTreeGridAxisClip>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAxisClip::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkHyperTreeGridAxisClip& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkHyperTreeGridAxisClip::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkHyperTreeGridAxisClip::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkHyperTreeGridAxisClip::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkHyperTreeGridAxisClip& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetClipType", &vtkHyperTreeGridAxisClip::SetClipType)
    .function("GetClipTypeMinValue", &vtkHyperTreeGridAxisClip::GetClipTypeMinValue)
    .function("GetClipTypeMaxValue", &vtkHyperTreeGridAxisClip::GetClipTypeMaxValue)
    .function("GetClipType", &vtkHyperTreeGridAxisClip::GetClipType)
    .function("SetClipTypeToPlane", &vtkHyperTreeGridAxisClip::SetClipTypeToPlane)
    .function("SetClipTypeToBox", &vtkHyperTreeGridAxisClip::SetClipTypeToBox)
    .function("SetClipTypeToQuadric", &vtkHyperTreeGridAxisClip::SetClipTypeToQuadric)
    .function("SetPlaneNormalAxis", &vtkHyperTreeGridAxisClip::SetPlaneNormalAxis)
    .function("GetPlaneNormalAxisMinValue", &vtkHyperTreeGridAxisClip::GetPlaneNormalAxisMinValue)
    .function("GetPlaneNormalAxisMaxValue", &vtkHyperTreeGridAxisClip::GetPlaneNormalAxisMaxValue)
    .function("GetPlaneNormalAxis", &vtkHyperTreeGridAxisClip::GetPlaneNormalAxis)
    .function("SetPlanePosition", &vtkHyperTreeGridAxisClip::SetPlanePosition)
    .function("GetPlanePosition", &vtkHyperTreeGridAxisClip::GetPlanePosition)
    .function("SetBounds", emscripten::select_overload<void(vtkHyperTreeGridAxisClip&, double, double, double, double, double, double)>([](vtkHyperTreeGridAxisClip& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetInsideOut", &vtkHyperTreeGridAxisClip::SetInsideOut)
    .function("GetInsideOut", &vtkHyperTreeGridAxisClip::GetInsideOut)
    .function("InsideOutOn", &vtkHyperTreeGridAxisClip::InsideOutOn)
    .function("InsideOutOff", &vtkHyperTreeGridAxisClip::InsideOutOff)
    .function("SetQuadric", &vtkHyperTreeGridAxisClip::SetQuadric, emscripten::allow_raw_pointers())
    .function("GetQuadric", &vtkHyperTreeGridAxisClip::GetQuadric, emscripten::allow_raw_pointers())
    .function("SetQuadricCoefficients", emscripten::select_overload<void(vtkHyperTreeGridAxisClip&, double, double, double, double, double, double, double, double, double, double)>([](vtkHyperTreeGridAxisClip& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5, double arg_6, double arg_7, double arg_8, double arg_9) -> void { return self.SetQuadricCoefficients( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7, arg_8, arg_9); }))
    .function("GetQuadricCoefficients", emscripten::select_overload<std::uintptr_t(vtkHyperTreeGridAxisClip&)>([](vtkHyperTreeGridAxisClip& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetQuadricCoefficients()); }))
    .function("GetMTime", &vtkHyperTreeGridAxisClip::GetMTime);
}
EMSCRIPTEN_BINDINGS(vtkFiltersHyperTree_vtkHyperTreeGridAxisClip_0_2_constants) {
  const struct { const char *name; int value; }
    constants[3] = {
      { "vtkHyperTreeGridAxisClip_PLANE", vtkHyperTreeGridAxisClip::PLANE },
      { "vtkHyperTreeGridAxisClip_BOX", vtkHyperTreeGridAxisClip::BOX },
      { "vtkHyperTreeGridAxisClip_QUADRIC", vtkHyperTreeGridAxisClip::QUADRIC },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
