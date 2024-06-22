// JavaScript wrapper for vtkContext2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkRenderingContext2D.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingContext2D.js/vtkContext2DEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Context2D/vtkContext2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContextDevice2D.h"
#include "vtkAbstractContextBufferId.h"
#include "vtkPoints2D.h"
#include "vtkDataArray.h"
#include "vtkUnsignedCharArray.h"
#include "vtkImageData.h"
#include "vtkRect.h"
#include "vtkPolyData.h"
#include "vtkStdString.h"
#include "vtkPen.h"
#include "vtkBrush.h"
#include "vtkTextProperty.h"
#include "vtkTransform2D.h"
#include "vtkContext3D.h"
#include "vtkContext2D.h"

template<> void emscripten::internal::raw_destructor<vtkContext2D>(vtkContext2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkContext2D_class) {
  emscripten::class_<vtkContext2D, emscripten::base<vtkObject>>("vtkContext2D")
    .smart_ptr<vtkSmartPointer<vtkContext2D>>("vtkSmartPointer<vtkContext2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkContext2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContext2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkContext2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkContext2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkContext2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkContext2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkContext2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Begin", &vtkContext2D::Begin, emscripten::allow_raw_pointers())
    .function("GetDevice", &vtkContext2D::GetDevice, emscripten::allow_raw_pointers())
    .function("End", &vtkContext2D::End)
    .function("GetBufferIdMode", &vtkContext2D::GetBufferIdMode)
    .function("BufferIdModeBegin", &vtkContext2D::BufferIdModeBegin, emscripten::allow_raw_pointers())
    .function("BufferIdModeEnd", &vtkContext2D::BufferIdModeEnd)
    .function("DrawLine", emscripten::select_overload<void(vtkContext2D&, float, float, float, float)>([](vtkContext2D& self, float arg_0, float arg_1, float arg_2, float arg_3) -> void { return self.DrawLine( arg_0, arg_1, arg_2, arg_3); }))
    .function("DrawLine", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*)>([](vtkContext2D& self, vtkPoints2D* arg_0) -> void { return self.DrawLine( arg_0); }), emscripten::allow_raw_pointers())
    .function("DrawPoly", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.DrawPoly(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2); }))
    .function("DrawPoly", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*)>([](vtkContext2D& self, vtkPoints2D* arg_0) -> void { return self.DrawPoly( arg_0); }), emscripten::allow_raw_pointers())
    .function("DrawPoly", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, int arg_1) -> void { return self.DrawPoly(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("DrawPoly", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void { return self.DrawPoly(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3); }))
    .function("DrawLines", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*)>([](vtkContext2D& self, vtkPoints2D* arg_0) -> void { return self.DrawLines( arg_0); }), emscripten::allow_raw_pointers())
    .function("DrawLines", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, int arg_1) -> void { return self.DrawLines(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("DrawPoint", &vtkContext2D::DrawPoint)
    .function("DrawPoints", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.DrawPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2); }))
    .function("DrawPoints", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*)>([](vtkContext2D& self, vtkPoints2D* arg_0) -> void { return self.DrawPoints( arg_0); }), emscripten::allow_raw_pointers())
    .function("DrawPoints", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, int arg_1) -> void { return self.DrawPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("DrawPointSprites", emscripten::select_overload<void(vtkContext2D&, vtkImageData*, vtkPoints2D*)>([](vtkContext2D& self, vtkImageData* arg_0, vtkPoints2D* arg_1) -> void { return self.DrawPointSprites( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("DrawPointSprites", emscripten::select_overload<void(vtkContext2D&, vtkImageData*, vtkPoints2D*, vtkUnsignedCharArray*)>([](vtkContext2D& self, vtkImageData* arg_0, vtkPoints2D* arg_1, vtkUnsignedCharArray* arg_2) -> void { return self.DrawPointSprites( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("DrawPointSprites", emscripten::select_overload<void(vtkContext2D&, vtkImageData*, std::uintptr_t, int)>([](vtkContext2D& self, vtkImageData* arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.DrawPointSprites( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2); }), emscripten::allow_raw_pointers())
    .function("DrawPointSprites", emscripten::select_overload<void(vtkContext2D&, vtkImageData*, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContext2D& self, vtkImageData* arg_0, std::uintptr_t arg_1, int arg_2, std::uintptr_t arg_3, int arg_4) -> void { return self.DrawPointSprites( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2,reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)), arg_4); }), emscripten::allow_raw_pointers())
    .function("DrawMarkers", emscripten::select_overload<void(vtkContext2D&, int, bool, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContext2D& self, int arg_0, bool arg_1, std::uintptr_t arg_2, int arg_3, std::uintptr_t arg_4, int arg_5) -> void { return self.DrawMarkers( arg_0, arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)), arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5); }))
    .function("DrawMarkers", emscripten::select_overload<void(vtkContext2D&, int, bool, std::uintptr_t, int)>([](vtkContext2D& self, int arg_0, bool arg_1, std::uintptr_t arg_2, int arg_3) -> void { return self.DrawMarkers( arg_0, arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)), arg_3); }))
    .function("DrawMarkers", emscripten::select_overload<void(vtkContext2D&, int, bool, vtkPoints2D*, vtkUnsignedCharArray*)>([](vtkContext2D& self, int arg_0, bool arg_1, vtkPoints2D* arg_2, vtkUnsignedCharArray* arg_3) -> void { return self.DrawMarkers( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("DrawMarkers", emscripten::select_overload<void(vtkContext2D&, int, bool, vtkPoints2D*)>([](vtkContext2D& self, int arg_0, bool arg_1, vtkPoints2D* arg_2) -> void { return self.DrawMarkers( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("DrawRect", &vtkContext2D::DrawRect)
    .function("DrawQuad", emscripten::select_overload<void(vtkContext2D&, float, float, float, float, float, float, float, float)>([](vtkContext2D& self, float arg_0, float arg_1, float arg_2, float arg_3, float arg_4, float arg_5, float arg_6, float arg_7) -> void { return self.DrawQuad( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5, arg_6, arg_7); }))
    .function("DrawQuad", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t)>([](vtkContext2D& self, std::uintptr_t arg_0) -> void { return self.DrawQuad(reinterpret_cast<float*>(arg_0 * sizeof(float))); }))
    .function("DrawQuadStrip", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*)>([](vtkContext2D& self, vtkPoints2D* arg_0) -> void { return self.DrawQuadStrip( arg_0); }), emscripten::allow_raw_pointers())
    .function("DrawQuadStrip", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, int arg_1) -> void { return self.DrawQuadStrip(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("DrawPolygon", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.DrawPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2); }))
    .function("DrawPolygon", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, std::uintptr_t, int)>([](vtkContext2D& self, vtkPoints2D* arg_0, std::uintptr_t arg_1, int arg_2) -> void { return self.DrawPolygon( arg_0,reinterpret_cast<unsigned char*>(arg_1 * sizeof(unsigned char)), arg_2); }), emscripten::allow_raw_pointers())
    .function("DrawPolygon", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*)>([](vtkContext2D& self, vtkPoints2D* arg_0) -> void { return self.DrawPolygon( arg_0); }), emscripten::allow_raw_pointers())
    .function("DrawPolygon", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, int arg_1) -> void { return self.DrawPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1); }))
    .function("DrawPolygon", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1, int arg_2, std::uintptr_t arg_3, int arg_4) -> void { return self.DrawPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)),reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2,reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)), arg_4); }))
    .function("DrawPolygon", emscripten::select_overload<void(vtkContext2D&, std::uintptr_t, int, std::uintptr_t, int)>([](vtkContext2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void { return self.DrawPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3); }))
    .function("DrawEllipse", &vtkContext2D::DrawEllipse)
    .function("DrawWedge", &vtkContext2D::DrawWedge)
    .function("DrawEllipseWedge", &vtkContext2D::DrawEllipseWedge)
    .function("DrawArc", &vtkContext2D::DrawArc)
    .function("DrawEllipticArc", &vtkContext2D::DrawEllipticArc)
    .function("DrawImage", emscripten::select_overload<void(vtkContext2D&, float, float, vtkImageData*)>([](vtkContext2D& self, float arg_0, float arg_1, vtkImageData* arg_2) -> void { return self.DrawImage( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("DrawImage", emscripten::select_overload<void(vtkContext2D&, float, float, float, vtkImageData*)>([](vtkContext2D& self, float arg_0, float arg_1, float arg_2, vtkImageData* arg_3) -> void { return self.DrawImage( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers())
    .function("DrawImage", emscripten::select_overload<void(vtkContext2D&, const vtkRectf&, vtkImageData*)>([](vtkContext2D& self, const vtkRectf& arg_0, vtkImageData* arg_1) -> void { return self.DrawImage( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("DrawPolyData", &vtkContext2D::DrawPolyData, emscripten::allow_raw_pointers())
    .function("DrawStringRect", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const vtkStdString&)>([](vtkContext2D& self, vtkPoints2D* arg_0, const vtkStdString& arg_1) -> void { return self.DrawStringRect( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("DrawStringRect", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const std::string &)>([](vtkContext2D& self, vtkPoints2D* arg_0, const std::string & arg_1) -> void { return self.DrawStringRect( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("DrawString", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const vtkStdString&)>([](vtkContext2D& self, vtkPoints2D* arg_0, const vtkStdString& arg_1) -> void { return self.DrawString( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("DrawString", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const std::string &)>([](vtkContext2D& self, vtkPoints2D* arg_0, const std::string & arg_1) -> void { return self.DrawString( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("DrawString", emscripten::select_overload<void(vtkContext2D&, float, float, const vtkStdString&)>([](vtkContext2D& self, float arg_0, float arg_1, const vtkStdString& arg_2) -> void { return self.DrawString( arg_0, arg_1, arg_2); }))
    .function("DrawString", emscripten::select_overload<void(vtkContext2D&, float, float, const std::string &)>([](vtkContext2D& self, float arg_0, float arg_1, const std::string & arg_2) -> void { return self.DrawString( arg_0, arg_1, arg_2.c_str()); }))
    .function("ComputeStringBounds", emscripten::select_overload<void(vtkContext2D&, const vtkStdString&, vtkPoints2D*)>([](vtkContext2D& self, const vtkStdString& arg_0, vtkPoints2D* arg_1) -> void { return self.ComputeStringBounds( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("ComputeStringBounds", emscripten::select_overload<void(vtkContext2D&, const std::string &, vtkPoints2D*)>([](vtkContext2D& self, const std::string & arg_0, vtkPoints2D* arg_1) -> void { return self.ComputeStringBounds( arg_0.c_str(), arg_1); }), emscripten::allow_raw_pointers())
    .function("ComputeFontSizeForBoundedString", &vtkContext2D::ComputeFontSizeForBoundedString)
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const vtkStdString&)>([](vtkContext2D& self, vtkPoints2D* arg_0, const vtkStdString& arg_1) -> void { return self.DrawMathTextString( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const std::string &)>([](vtkContext2D& self, vtkPoints2D* arg_0, const std::string & arg_1) -> void { return self.DrawMathTextString( arg_0, arg_1.c_str()); }), emscripten::allow_raw_pointers())
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, float, float, const vtkStdString&)>([](vtkContext2D& self, float arg_0, float arg_1, const vtkStdString& arg_2) -> void { return self.DrawMathTextString( arg_0, arg_1, arg_2); }))
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, float, float, const std::string &)>([](vtkContext2D& self, float arg_0, float arg_1, const std::string & arg_2) -> void { return self.DrawMathTextString( arg_0, arg_1, arg_2.c_str()); }))
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const vtkStdString&, const vtkStdString&)>([](vtkContext2D& self, vtkPoints2D* arg_0, const vtkStdString& arg_1, const vtkStdString& arg_2) -> void { return self.DrawMathTextString( arg_0, arg_1, arg_2); }), emscripten::allow_raw_pointers())
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, vtkPoints2D*, const std::string &, const std::string &)>([](vtkContext2D& self, vtkPoints2D* arg_0, const std::string & arg_1, const std::string & arg_2) -> void { return self.DrawMathTextString( arg_0, arg_1.c_str(), arg_2.c_str()); }), emscripten::allow_raw_pointers())
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, float, float, const vtkStdString&, const vtkStdString&)>([](vtkContext2D& self, float arg_0, float arg_1, const vtkStdString& arg_2, const vtkStdString& arg_3) -> void { return self.DrawMathTextString( arg_0, arg_1, arg_2, arg_3); }))
    .function("DrawMathTextString", emscripten::select_overload<void(vtkContext2D&, float, float, const std::string &, const std::string &)>([](vtkContext2D& self, float arg_0, float arg_1, const std::string & arg_2, const std::string & arg_3) -> void { return self.DrawMathTextString( arg_0, arg_1, arg_2.c_str(), arg_3.c_str()); }))
    .function("MathTextIsSupported", &vtkContext2D::MathTextIsSupported)
    .function("ApplyPen", &vtkContext2D::ApplyPen, emscripten::allow_raw_pointers())
    .function("GetPen", &vtkContext2D::GetPen, emscripten::allow_raw_pointers())
    .function("ApplyBrush", &vtkContext2D::ApplyBrush, emscripten::allow_raw_pointers())
    .function("GetBrush", &vtkContext2D::GetBrush, emscripten::allow_raw_pointers())
    .function("ApplyTextProp", &vtkContext2D::ApplyTextProp, emscripten::allow_raw_pointers())
    .function("GetTextProp", &vtkContext2D::GetTextProp, emscripten::allow_raw_pointers())
    .function("SetTransform", &vtkContext2D::SetTransform, emscripten::allow_raw_pointers())
    .function("GetTransform", &vtkContext2D::GetTransform, emscripten::allow_raw_pointers())
    .function("AppendTransform", &vtkContext2D::AppendTransform, emscripten::allow_raw_pointers())
    .function("PushMatrix", &vtkContext2D::PushMatrix)
    .function("PopMatrix", &vtkContext2D::PopMatrix)
    .function("ApplyId", &vtkContext2D::ApplyId)
    .class_function("FloatToInt", &vtkContext2D::FloatToInt)
    .function("GetContext3D", &vtkContext2D::GetContext3D, emscripten::allow_raw_pointers())
    .function("SetContext3D", &vtkContext2D::SetContext3D, emscripten::allow_raw_pointers());
}
