// JavaScript wrapper for vtkWarpLens with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkWarpLensEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkWarpLens.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformation.h"
#include "vtkWarpLens.h"

template<> void emscripten::internal::raw_destructor<vtkWarpLens>(vtkWarpLens * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkWarpLens_class) {
  emscripten::class_<vtkWarpLens, emscripten::base<vtkPointSetAlgorithm>>("vtkWarpLens")
    .smart_ptr<vtkSmartPointer<vtkWarpLens>>("vtkSmartPointer<vtkWarpLens>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkWarpLens>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpLens::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkWarpLens& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkWarpLens::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkWarpLens::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkWarpLens::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkWarpLens& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetKappa", &vtkWarpLens::SetKappa)
    .function("GetKappa", &vtkWarpLens::GetKappa)
    .function("SetCenter", &vtkWarpLens::SetCenter)
    .function("SetPrincipalPoint", emscripten::select_overload<void(vtkWarpLens&, double, double)>([](vtkWarpLens& self, double arg_0, double arg_1) -> void { return self.SetPrincipalPoint( arg_0, arg_1); }))
    .function("SetK1", &vtkWarpLens::SetK1)
    .function("GetK1", &vtkWarpLens::GetK1)
    .function("SetK2", &vtkWarpLens::SetK2)
    .function("GetK2", &vtkWarpLens::GetK2)
    .function("SetP1", &vtkWarpLens::SetP1)
    .function("GetP1", &vtkWarpLens::GetP1)
    .function("SetP2", &vtkWarpLens::SetP2)
    .function("GetP2", &vtkWarpLens::GetP2)
    .function("SetFormatWidth", &vtkWarpLens::SetFormatWidth)
    .function("GetFormatWidth", &vtkWarpLens::GetFormatWidth)
    .function("SetFormatHeight", &vtkWarpLens::SetFormatHeight)
    .function("GetFormatHeight", &vtkWarpLens::GetFormatHeight)
    .function("SetImageWidth", &vtkWarpLens::SetImageWidth)
    .function("GetImageWidth", &vtkWarpLens::GetImageWidth)
    .function("SetImageHeight", &vtkWarpLens::SetImageHeight)
    .function("GetImageHeight", &vtkWarpLens::GetImageHeight)
    .function("FillInputPortInformation", &vtkWarpLens::FillInputPortInformation, emscripten::allow_raw_pointers());
}
