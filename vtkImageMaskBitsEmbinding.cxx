// JavaScript wrapper for vtkImageMaskBits with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImagingMath.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingMath.js/vtkImageMaskBitsEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Math/vtkImageMaskBits.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageMaskBits.h"

template<> void emscripten::internal::raw_destructor<vtkImageMaskBits>(vtkImageMaskBits * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageMaskBits_class) {
  emscripten::class_<vtkImageMaskBits, emscripten::base<vtkThreadedImageAlgorithm>>("vtkImageMaskBits")
    .smart_ptr<vtkSmartPointer<vtkImageMaskBits>>("vtkSmartPointer<vtkImageMaskBits>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkImageMaskBits>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMaskBits::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageMaskBits& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageMaskBits::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageMaskBits::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageMaskBits::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageMaskBits& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetMasks", emscripten::select_overload<void(vtkImageMaskBits&, unsigned int, unsigned int, unsigned int, unsigned int)>([](vtkImageMaskBits& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2, unsigned int arg_3) -> void { return self.SetMasks( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetMasks", emscripten::select_overload<void(vtkImageMaskBits&, unsigned int, unsigned int)>([](vtkImageMaskBits& self, unsigned int arg_0, unsigned int arg_1) -> void { return self.SetMasks( arg_0, arg_1); }))
    .function("SetMasks", emscripten::select_overload<void(vtkImageMaskBits&, unsigned int, unsigned int, unsigned int)>([](vtkImageMaskBits& self, unsigned int arg_0, unsigned int arg_1, unsigned int arg_2) -> void { return self.SetMasks( arg_0, arg_1, arg_2); }))
    .function("SetMask", &vtkImageMaskBits::SetMask)
    .function("SetOperation", &vtkImageMaskBits::SetOperation)
    .function("GetOperation", &vtkImageMaskBits::GetOperation)
    .function("SetOperationToAnd", &vtkImageMaskBits::SetOperationToAnd)
    .function("SetOperationToOr", &vtkImageMaskBits::SetOperationToOr)
    .function("SetOperationToXor", &vtkImageMaskBits::SetOperationToXor)
    .function("SetOperationToNand", &vtkImageMaskBits::SetOperationToNand)
    .function("SetOperationToNor", &vtkImageMaskBits::SetOperationToNor);
}
