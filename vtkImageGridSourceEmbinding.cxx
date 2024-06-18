// JavaScript wrapper for vtkImageGridSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImagingSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImageGridSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Sources/vtkImageGridSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageGridSource.h"

template<> void emscripten::internal::raw_destructor<vtkImageGridSource>(vtkImageGridSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageGridSource_class) {
  emscripten::class_<vtkImageGridSource, emscripten::base<vtkImageAlgorithm>>("vtkImageGridSource")
    .smart_ptr<vtkSmartPointer<vtkImageGridSource>>("vtkSmartPointer<vtkImageGridSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageGridSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGridSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageGridSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageGridSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageGridSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageGridSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageGridSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetGridSpacing", emscripten::select_overload<void(vtkImageGridSource&, int, int, int)>([](vtkImageGridSource& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetGridSpacing( arg_0, arg_1, arg_2); }))
    .function("SetGridOrigin", emscripten::select_overload<void(vtkImageGridSource&, int, int, int)>([](vtkImageGridSource& self, int arg_0, int arg_1, int arg_2) -> void { return self.SetGridOrigin( arg_0, arg_1, arg_2); }))
    .function("SetLineValue", &vtkImageGridSource::SetLineValue)
    .function("GetLineValue", &vtkImageGridSource::GetLineValue)
    .function("SetFillValue", &vtkImageGridSource::SetFillValue)
    .function("GetFillValue", &vtkImageGridSource::GetFillValue)
    .function("SetDataScalarType", &vtkImageGridSource::SetDataScalarType)
    .function("SetDataScalarTypeToDouble", &vtkImageGridSource::SetDataScalarTypeToDouble)
    .function("SetDataScalarTypeToInt", &vtkImageGridSource::SetDataScalarTypeToInt)
    .function("SetDataScalarTypeToShort", &vtkImageGridSource::SetDataScalarTypeToShort)
    .function("SetDataScalarTypeToUnsignedShort", &vtkImageGridSource::SetDataScalarTypeToUnsignedShort)
    .function("SetDataScalarTypeToUnsignedChar", &vtkImageGridSource::SetDataScalarTypeToUnsignedChar)
    .function("GetDataScalarType", &vtkImageGridSource::GetDataScalarType)
    .function("GetDataScalarTypeAsString", emscripten::optional_override([](vtkImageGridSource& self) -> std::string {  return self.GetDataScalarTypeAsString();}))
    .function("SetDataExtent", emscripten::select_overload<void(vtkImageGridSource&, int, int, int, int, int, int)>([](vtkImageGridSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetDataExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetDataSpacing", emscripten::select_overload<void(vtkImageGridSource&, double, double, double)>([](vtkImageGridSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataSpacing( arg_0, arg_1, arg_2); }))
    .function("SetDataOrigin", emscripten::select_overload<void(vtkImageGridSource&, double, double, double)>([](vtkImageGridSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDataOrigin( arg_0, arg_1, arg_2); }));
}
