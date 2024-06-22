// JavaScript wrapper for vtkCubeSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkCubeSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkCubeSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCubeSource.h"

template<> void emscripten::internal::raw_destructor<vtkCubeSource>(vtkCubeSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCubeSource_class) {
  emscripten::class_<vtkCubeSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkCubeSource")
    .smart_ptr<vtkSmartPointer<vtkCubeSource>>("vtkSmartPointer<vtkCubeSource>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCubeSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubeSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCubeSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCubeSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCubeSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCubeSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCubeSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetXLength", &vtkCubeSource::SetXLength)
    .function("GetXLengthMinValue", &vtkCubeSource::GetXLengthMinValue)
    .function("GetXLengthMaxValue", &vtkCubeSource::GetXLengthMaxValue)
    .function("GetXLength", &vtkCubeSource::GetXLength)
    .function("SetYLength", &vtkCubeSource::SetYLength)
    .function("GetYLengthMinValue", &vtkCubeSource::GetYLengthMinValue)
    .function("GetYLengthMaxValue", &vtkCubeSource::GetYLengthMaxValue)
    .function("GetYLength", &vtkCubeSource::GetYLength)
    .function("SetZLength", &vtkCubeSource::SetZLength)
    .function("GetZLengthMinValue", &vtkCubeSource::GetZLengthMinValue)
    .function("GetZLengthMaxValue", &vtkCubeSource::GetZLengthMaxValue)
    .function("GetZLength", &vtkCubeSource::GetZLength)
    .function("SetCenter", emscripten::select_overload<void(vtkCubeSource&, double, double, double)>([](vtkCubeSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetBounds", emscripten::select_overload<void(vtkCubeSource&, double, double, double, double, double, double)>([](vtkCubeSource& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOutputPointsPrecision", &vtkCubeSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkCubeSource::GetOutputPointsPrecision);
}
