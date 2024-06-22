// JavaScript wrapper for vtkImageSlab with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImagingGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingGeneral.js/vtkImageSlabEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/General/vtkImageSlab.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageSlab.h"

template<> void emscripten::internal::raw_destructor<vtkImageSlab>(vtkImageSlab * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageSlab_class) {
  emscripten::class_<vtkImageSlab, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageSlab")
    .smart_ptr<vtkSmartPointer<vtkImageSlab>>("vtkSmartPointer<vtkImageSlab>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageSlab>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSlab::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageSlab& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageSlab::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageSlab::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageSlab::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageSlab& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetOrientation", &vtkImageSlab::SetOrientation)
    .function("GetOrientationMinValue", &vtkImageSlab::GetOrientationMinValue)
    .function("GetOrientationMaxValue", &vtkImageSlab::GetOrientationMaxValue)
    .function("SetOrientationToX", &vtkImageSlab::SetOrientationToX)
    .function("SetOrientationToY", &vtkImageSlab::SetOrientationToY)
    .function("SetOrientationToZ", &vtkImageSlab::SetOrientationToZ)
    .function("GetOrientation", &vtkImageSlab::GetOrientation)
    .function("SetSliceRange", emscripten::select_overload<void(vtkImageSlab&, int, int)>([](vtkImageSlab& self, int arg_0, int arg_1) -> void { return self.SetSliceRange( arg_0, arg_1); }))
    .function("SetOperation", &vtkImageSlab::SetOperation)
    .function("GetOperationMinValue", &vtkImageSlab::GetOperationMinValue)
    .function("GetOperationMaxValue", &vtkImageSlab::GetOperationMaxValue)
    .function("SetOperationToMin", &vtkImageSlab::SetOperationToMin)
    .function("SetOperationToMax", &vtkImageSlab::SetOperationToMax)
    .function("SetOperationToMean", &vtkImageSlab::SetOperationToMean)
    .function("SetOperationToSum", &vtkImageSlab::SetOperationToSum)
    .function("GetOperation", &vtkImageSlab::GetOperation)
    .function("GetOperationAsString", emscripten::optional_override([](vtkImageSlab& self) -> std::string {  return self.GetOperationAsString();}))
    .function("SetTrapezoidIntegration", &vtkImageSlab::SetTrapezoidIntegration)
    .function("TrapezoidIntegrationOn", &vtkImageSlab::TrapezoidIntegrationOn)
    .function("TrapezoidIntegrationOff", &vtkImageSlab::TrapezoidIntegrationOff)
    .function("GetTrapezoidIntegration", &vtkImageSlab::GetTrapezoidIntegration)
    .function("SetMultiSliceOutput", &vtkImageSlab::SetMultiSliceOutput)
    .function("MultiSliceOutputOn", &vtkImageSlab::MultiSliceOutputOn)
    .function("MultiSliceOutputOff", &vtkImageSlab::MultiSliceOutputOff)
    .function("GetMultiSliceOutput", &vtkImageSlab::GetMultiSliceOutput)
    .function("SetOutputScalarTypeToFloat", &vtkImageSlab::SetOutputScalarTypeToFloat)
    .function("SetOutputScalarTypeToDouble", &vtkImageSlab::SetOutputScalarTypeToDouble)
    .function("SetOutputScalarTypeToInputScalarType", &vtkImageSlab::SetOutputScalarTypeToInputScalarType)
    .function("GetOutputScalarType", &vtkImageSlab::GetOutputScalarType);
}
