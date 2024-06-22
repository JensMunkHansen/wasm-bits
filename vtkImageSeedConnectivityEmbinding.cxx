// JavaScript wrapper for vtkImageSeedConnectivity with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImagingMorphological.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMorphological.js/vtkImageSeedConnectivityEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Morphological/vtkImageSeedConnectivity.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageConnector.h"
#include "vtkImageSeedConnectivity.h"

template<> void emscripten::internal::raw_destructor<vtkImageSeedConnectivity>(vtkImageSeedConnectivity * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSeedConnectivity_class) {
  emscripten::class_<vtkImageSeedConnectivity, emscripten::base<vtkImageAlgorithm>>("vtkImageSeedConnectivity")
    .smart_ptr<vtkSmartPointer<vtkImageSeedConnectivity>>("vtkSmartPointer<vtkImageSeedConnectivity>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageSeedConnectivity>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSeedConnectivity::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSeedConnectivity& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSeedConnectivity::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSeedConnectivity::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSeedConnectivity::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSeedConnectivity& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("RemoveAllSeeds", &vtkImageSeedConnectivity::RemoveAllSeeds)
    .function("AddSeed", emscripten::select_overload<void(vtkImageSeedConnectivity&, int, std::uintptr_t)>([](vtkImageSeedConnectivity& self, int arg_0, std::uintptr_t arg_1) -> void { return self.AddSeed( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int))); }))
    .function("AddSeed", emscripten::select_overload<void(vtkImageSeedConnectivity&, int, int)>([](vtkImageSeedConnectivity& self, int arg_0, int arg_1) -> void { return self.AddSeed( arg_0, arg_1); }))
    .function("AddSeed", emscripten::select_overload<void(vtkImageSeedConnectivity&, int, int, int)>([](vtkImageSeedConnectivity& self, int arg_0, int arg_1, int arg_2) -> void { return self.AddSeed( arg_0, arg_1, arg_2); }))
    .function("SetInputConnectValue", &vtkImageSeedConnectivity::SetInputConnectValue)
    .function("GetInputConnectValue", &vtkImageSeedConnectivity::GetInputConnectValue)
    .function("SetOutputConnectedValue", &vtkImageSeedConnectivity::SetOutputConnectedValue)
    .function("GetOutputConnectedValue", &vtkImageSeedConnectivity::GetOutputConnectedValue)
    .function("SetOutputUnconnectedValue", &vtkImageSeedConnectivity::SetOutputUnconnectedValue)
    .function("GetOutputUnconnectedValue", &vtkImageSeedConnectivity::GetOutputUnconnectedValue)
    .function("GetConnector", &vtkImageSeedConnectivity::GetConnector, emscripten::allow_raw_pointers())
    .function("SetDimensionality", &vtkImageSeedConnectivity::SetDimensionality)
    .function("GetDimensionality", &vtkImageSeedConnectivity::GetDimensionality);
}
