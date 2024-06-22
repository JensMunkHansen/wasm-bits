// JavaScript wrapper for vtkImageEllipsoidSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImagingSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImageEllipsoidSourceEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Sources/vtkImageEllipsoidSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageEllipsoidSource.h"

template<> void emscripten::internal::raw_destructor<vtkImageEllipsoidSource>(vtkImageEllipsoidSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageEllipsoidSource_class) {
  emscripten::class_<vtkImageEllipsoidSource, emscripten::base<vtkImageAlgorithm>>("vtkImageEllipsoidSource")
    .smart_ptr<vtkSmartPointer<vtkImageEllipsoidSource>>("vtkSmartPointer<vtkImageEllipsoidSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageEllipsoidSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageEllipsoidSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageEllipsoidSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageEllipsoidSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageEllipsoidSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageEllipsoidSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageEllipsoidSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkImageEllipsoidSource&, int, int, int, int, int, int)>([](vtkImageEllipsoidSource& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetCenter", emscripten::select_overload<void(vtkImageEllipsoidSource&, double, double, double)>([](vtkImageEllipsoidSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetCenter( arg_0, arg_1, arg_2); }))
    .function("SetRadius", emscripten::select_overload<void(vtkImageEllipsoidSource&, double, double, double)>([](vtkImageEllipsoidSource& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetRadius( arg_0, arg_1, arg_2); }))
    .function("SetInValue", &vtkImageEllipsoidSource::SetInValue)
    .function("GetInValue", &vtkImageEllipsoidSource::GetInValue)
    .function("SetOutValue", &vtkImageEllipsoidSource::SetOutValue)
    .function("GetOutValue", &vtkImageEllipsoidSource::GetOutValue)
    .function("SetOutputScalarType", &vtkImageEllipsoidSource::SetOutputScalarType)
    .function("GetOutputScalarType", &vtkImageEllipsoidSource::GetOutputScalarType)
    .function("SetOutputScalarTypeToFloat", &vtkImageEllipsoidSource::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToDouble", &vtkImageEllipsoidSource::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToLong", &vtkImageEllipsoidSource::SetOutputScalarTypeToLong)
    .function("SetOutputScalarTypeToUnsignedLong", &vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedLong)
    .function("SetOutputScalarTypeToInt", &vtkImageEllipsoidSource::SetOutputScalarTypeToInt)
    .function("SetOutputScalarTypeToUnsignedInt", &vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedInt)
    .function("SetOutputScalarTypeToShort", &vtkImageEllipsoidSource::SetOutputScalarTypeToShort)
    .function("SetOutputScalarTypeToUnsignedShort", &vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedShort)
    .function("SetOutputScalarTypeToChar", &vtkImageEllipsoidSource::SetOutputScalarTypeToChar)
    .function("SetOutputScalarTypeToUnsignedChar", &vtkImageEllipsoidSource::SetOutputScalarTypeToUnsignedChar);
}
