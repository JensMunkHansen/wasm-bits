// JavaScript wrapper for vtkImageRectilinearWipe with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImagingHybrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingHybrid.js/vtkImageRectilinearWipeEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Hybrid/vtkImageRectilinearWipe.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkDataObject.h"
#include "vtkImageRectilinearWipe.h"

EMSCRIPTEN_BINDINGS(vtkImagingHybrid_vtkImageRectilinearWipe_0_1_constants) {
  const struct { const char *name; int value; }
    constants[7] = {
      { "VTK_WIPE_QUAD", 0 },
      { "VTK_WIPE_HORIZONTAL", 1 },
      { "VTK_WIPE_VERTICAL", 2 },
      { "VTK_WIPE_LOWER_LEFT", 3 },
      { "VTK_WIPE_LOWER_RIGHT", 4 },
      { "VTK_WIPE_UPPER_LEFT", 5 },
      { "VTK_WIPE_UPPER_RIGHT", 6 },
  };
  for (int c = 0; c < 7; c++)
  {
    emscripten::constant(constants[c].name, constants[c].value);
  }
}
template<> void emscripten::internal::raw_destructor<vtkImageRectilinearWipe>(vtkImageRectilinearWipe * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageRectilinearWipe_class) {
  emscripten::class_<vtkImageRectilinearWipe, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageRectilinearWipe")
    .smart_ptr<vtkSmartPointer<vtkImageRectilinearWipe>>("vtkSmartPointer<vtkImageRectilinearWipe>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageRectilinearWipe>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRectilinearWipe::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageRectilinearWipe& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageRectilinearWipe::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageRectilinearWipe::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageRectilinearWipe::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageRectilinearWipe& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPosition", emscripten::select_overload<void(vtkImageRectilinearWipe&, int, int)>([](vtkImageRectilinearWipe& self, int arg_0, int arg_1) -> void { return self.SetPosition( arg_0, arg_1); }))
    .function("SetAxis", emscripten::select_overload<void(vtkImageRectilinearWipe&, int, int)>([](vtkImageRectilinearWipe& self, int arg_0, int arg_1) -> void { return self.SetAxis( arg_0, arg_1); }))
    .function("SetInput1Data", &vtkImageRectilinearWipe::SetInput1Data, emscripten::allow_raw_pointers())
    .function("SetInput2Data", &vtkImageRectilinearWipe::SetInput2Data, emscripten::allow_raw_pointers())
    .function("SetWipe", &vtkImageRectilinearWipe::SetWipe)
    .function("GetWipeMinValue", &vtkImageRectilinearWipe::GetWipeMinValue)
    .function("GetWipeMaxValue", &vtkImageRectilinearWipe::GetWipeMaxValue)
    .function("GetWipe", &vtkImageRectilinearWipe::GetWipe)
    .function("SetWipeToQuad", &vtkImageRectilinearWipe::SetWipeToQuad)
    .function("SetWipeToHorizontal", &vtkImageRectilinearWipe::SetWipeToHorizontal)
    .function("SetWipeToVertical", &vtkImageRectilinearWipe::SetWipeToVertical)
    .function("SetWipeToLowerLeft", &vtkImageRectilinearWipe::SetWipeToLowerLeft)
    .function("SetWipeToLowerRight", &vtkImageRectilinearWipe::SetWipeToLowerRight)
    .function("SetWipeToUpperLeft", &vtkImageRectilinearWipe::SetWipeToUpperLeft)
    .function("SetWipeToUpperRight", &vtkImageRectilinearWipe::SetWipeToUpperRight);
}
