// JavaScript wrapper for vtkImageCanvasSource2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImagingSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkImagingSources.js/vtkImageCanvasSource2DEmbinding.cxx \
 /home/jmh/github/vtk/Imaging/Sources/vtkImageCanvasSource2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkImageCanvasSource2D.h"

template<> void emscripten::internal::raw_destructor<vtkImageCanvasSource2D>(vtkImageCanvasSource2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkImageCanvasSource2D_class) {
  emscripten::class_<vtkImageCanvasSource2D, emscripten::base<vtkImageAlgorithm>>("vtkImageCanvasSource2D")
    .smart_ptr<vtkSmartPointer<vtkImageCanvasSource2D>>("vtkSmartPointer<vtkImageCanvasSource2D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkImageCanvasSource2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCanvasSource2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkImageCanvasSource2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkImageCanvasSource2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkImageCanvasSource2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkImageCanvasSource2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkImageCanvasSource2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetDrawColor", emscripten::select_overload<void(vtkImageCanvasSource2D&, double, double, double, double)>([](vtkImageCanvasSource2D& self, double arg_0, double arg_1, double arg_2, double arg_3) -> void { return self.SetDrawColor( arg_0, arg_1, arg_2, arg_3); }))
    .function("SetDrawColor", emscripten::select_overload<void(vtkImageCanvasSource2D&, double)>([](vtkImageCanvasSource2D& self, double arg_0) -> void { return self.SetDrawColor( arg_0); }))
    .function("SetDrawColor", emscripten::select_overload<void(vtkImageCanvasSource2D&, double, double)>([](vtkImageCanvasSource2D& self, double arg_0, double arg_1) -> void { return self.SetDrawColor( arg_0, arg_1); }))
    .function("SetDrawColor", emscripten::select_overload<void(vtkImageCanvasSource2D&, double, double, double)>([](vtkImageCanvasSource2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetDrawColor( arg_0, arg_1, arg_2); }))
    .function("InitializeCanvasVolume", &vtkImageCanvasSource2D::InitializeCanvasVolume, emscripten::allow_raw_pointers())
    .function("FillBox", &vtkImageCanvasSource2D::FillBox)
    .function("FillTube", &vtkImageCanvasSource2D::FillTube)
    .function("FillTriangle", &vtkImageCanvasSource2D::FillTriangle)
    .function("DrawCircle", &vtkImageCanvasSource2D::DrawCircle)
    .function("DrawPoint", &vtkImageCanvasSource2D::DrawPoint)
    .function("DrawSegment", &vtkImageCanvasSource2D::DrawSegment)
    .function("DrawSegment3D", emscripten::select_overload<void(vtkImageCanvasSource2D&, std::uintptr_t, std::uintptr_t)>([](vtkImageCanvasSource2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void { return self.DrawSegment3D(reinterpret_cast<double*>(arg_0 * sizeof(double)),reinterpret_cast<double*>(arg_1 * sizeof(double))); }))
    .function("DrawSegment3D", emscripten::select_overload<void(vtkImageCanvasSource2D&, double, double, double, double, double, double)>([](vtkImageCanvasSource2D& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.DrawSegment3D( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("DrawImage", emscripten::select_overload<void(vtkImageCanvasSource2D&, int, int, vtkImageData*)>([](vtkImageCanvasSource2D& self, int arg_0, int arg_1, vtkImageData* arg_2) -> void { return self.DrawImage( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("DrawImage", emscripten::select_overload<void(vtkImageCanvasSource2D&, int, int, vtkImageData*, int, int, int, int)>([](vtkImageCanvasSource2D& self, int arg_0, int arg_1, vtkImageData* arg_2, int arg_3, int arg_4, int arg_5, int arg_6) -> void { return self.DrawImage( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6); }), emscripten::allow_raw_pointers())
    .function("FillPixel", &vtkImageCanvasSource2D::FillPixel)
    .function("SetExtent", emscripten::select_overload<void(vtkImageCanvasSource2D&, std::uintptr_t)>([](vtkImageCanvasSource2D& self, std::uintptr_t arg_0) -> void { return self.SetExtent(reinterpret_cast<int*>(arg_0 * sizeof(int))); }))
    .function("SetExtent", emscripten::select_overload<void(vtkImageCanvasSource2D&, int, int, int, int, int, int)>([](vtkImageCanvasSource2D& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetDefaultZ", &vtkImageCanvasSource2D::SetDefaultZ)
    .function("GetDefaultZ", &vtkImageCanvasSource2D::GetDefaultZ)
    .function("SetRatio", emscripten::select_overload<void(vtkImageCanvasSource2D&, double, double, double)>([](vtkImageCanvasSource2D& self, double arg_0, double arg_1, double arg_2) -> void { return self.SetRatio( arg_0, arg_1, arg_2); }))
    .function("SetNumberOfScalarComponents", &vtkImageCanvasSource2D::SetNumberOfScalarComponents)
    .function("GetNumberOfScalarComponents", &vtkImageCanvasSource2D::GetNumberOfScalarComponents)
    .function("SetScalarTypeToFloat", &vtkImageCanvasSource2D::SetScalarTypeToFloat)
    .function("SetScalarTypeToDouble", &vtkImageCanvasSource2D::SetScalarTypeToDouble)
    .function("SetScalarTypeToInt", &vtkImageCanvasSource2D::SetScalarTypeToInt)
    .function("SetScalarTypeToUnsignedInt", &vtkImageCanvasSource2D::SetScalarTypeToUnsignedInt)
    .function("SetScalarTypeToLong", &vtkImageCanvasSource2D::SetScalarTypeToLong)
    .function("SetScalarTypeToUnsignedLong", &vtkImageCanvasSource2D::SetScalarTypeToUnsignedLong)
    .function("SetScalarTypeToShort", &vtkImageCanvasSource2D::SetScalarTypeToShort)
    .function("SetScalarTypeToUnsignedShort", &vtkImageCanvasSource2D::SetScalarTypeToUnsignedShort)
    .function("SetScalarTypeToUnsignedChar", &vtkImageCanvasSource2D::SetScalarTypeToUnsignedChar)
    .function("SetScalarTypeToChar", &vtkImageCanvasSource2D::SetScalarTypeToChar)
    .function("SetScalarType", &vtkImageCanvasSource2D::SetScalarType)
    .function("GetScalarType", &vtkImageCanvasSource2D::GetScalarType);
}
