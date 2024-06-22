// JavaScript wrapper for vtkPDFContextDevice2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExportPDF.js/vtkIOExportPDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExportPDF.js/vtkPDFContextDevice2DEmbinding.cxx \
 /home/jmh/github/vtk/IO/ExportPDF/vtkPDFContextDevice2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkImageData.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkPolyData.h"
#include "vtkUnsignedCharArray.h"
#include "vtkMatrix3x3.h"
#include "vtkPDFContextDevice2D.h"

template<> void emscripten::internal::raw_destructor<vtkPDFContextDevice2D>(vtkPDFContextDevice2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPDFContextDevice2D_class) {
  emscripten::class_<vtkPDFContextDevice2D, emscripten::base<vtkContextDevice2D>>("vtkPDFContextDevice2D")
    .smart_ptr<vtkSmartPointer<vtkPDFContextDevice2D>>("vtkSmartPointer<vtkPDFContextDevice2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPDFContextDevice2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDFContextDevice2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPDFContextDevice2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPDFContextDevice2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPDFContextDevice2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPDFContextDevice2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPDFContextDevice2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetHaruObjects", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, std::uintptr_t arg_1) -> void {  return self.SetHaruObjects(reinterpret_cast<void*>(arg_0),reinterpret_cast<void*>(arg_1));}))
    .function("SetRenderer", &vtkPDFContextDevice2D::SetRenderer, emscripten::allow_raw_pointers())
    .function("DrawPoly", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawPoly(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawLines", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawLines(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawPoints", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawPointSprites", emscripten::optional_override([](vtkPDFContextDevice2D& self, vtkImageData* arg_0, std::uintptr_t arg_1, int arg_2, std::uintptr_t arg_3, int arg_4) -> void {  return self.DrawPointSprites( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2,reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)), arg_4);}), emscripten::allow_raw_pointers())
    .function("DrawMarkers", emscripten::optional_override([](vtkPDFContextDevice2D& self, int arg_0, bool arg_1, std::uintptr_t arg_2, int arg_3, std::uintptr_t arg_4, int arg_5) -> void {  return self.DrawMarkers( arg_0, arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)), arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5);}))
    .function("DrawQuad", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawQuad(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawQuadStrip", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawQuadStrip(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawPolygon", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawColoredPolygon", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawColoredPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawEllipseWedge", &vtkPDFContextDevice2D::DrawEllipseWedge)
    .function("DrawEllipticArc", &vtkPDFContextDevice2D::DrawEllipticArc)
    .function("DrawString", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, const vtkStdString& arg_1) -> void {  return self.DrawString(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawMathTextString", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0, const vtkStdString& arg_1) -> void {  return self.DrawMathTextString(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawImage", emscripten::select_overload<void(vtkPDFContextDevice2D&, const vtkRectf&, vtkImageData*)>([](vtkPDFContextDevice2D& self, const vtkRectf& arg_0, vtkImageData* arg_1) -> void { return self.DrawImage( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetTexture", &vtkPDFContextDevice2D::SetTexture, emscripten::allow_raw_pointers())
    .function("SetPointSize", &vtkPDFContextDevice2D::SetPointSize)
    .function("SetLineWidth", &vtkPDFContextDevice2D::SetLineWidth)
    .function("SetLineType", &vtkPDFContextDevice2D::SetLineType)
    .function("SetMatrix", &vtkPDFContextDevice2D::SetMatrix, emscripten::allow_raw_pointers())
    .function("GetMatrix", &vtkPDFContextDevice2D::GetMatrix, emscripten::allow_raw_pointers())
    .function("MultiplyMatrix", &vtkPDFContextDevice2D::MultiplyMatrix, emscripten::allow_raw_pointers())
    .function("PushMatrix", &vtkPDFContextDevice2D::PushMatrix)
    .function("PopMatrix", &vtkPDFContextDevice2D::PopMatrix)
    .function("SetClipping", emscripten::optional_override([](vtkPDFContextDevice2D& self, std::uintptr_t arg_0) -> void {  return self.SetClipping(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("EnableClipping", &vtkPDFContextDevice2D::EnableClipping);
}
