// JavaScript wrapper for vtkSVGContextDevice2D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkIOExport.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOExport.js/vtkSVGContextDevice2DEmbinding.cxx \
 /home/jmh/github/vtk/IO/Export/vtkSVGContextDevice2D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLDataElement.h"
#include "vtkViewport.h"
#include "vtkImageData.h"
#include "vtkStdString.h"
#include "vtkRect.h"
#include "vtkMatrix3x3.h"
#include "vtkSVGContextDevice2D.h"

template<> void emscripten::internal::raw_destructor<vtkSVGContextDevice2D>(vtkSVGContextDevice2D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSVGContextDevice2D_class) {
  emscripten::class_<vtkSVGContextDevice2D, emscripten::base<vtkContextDevice2D>>("vtkSVGContextDevice2D")
    .smart_ptr<vtkSmartPointer<vtkSVGContextDevice2D>>("vtkSmartPointer<vtkSVGContextDevice2D>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkSVGContextDevice2D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSVGContextDevice2D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSVGContextDevice2D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSVGContextDevice2D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSVGContextDevice2D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSVGContextDevice2D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSVGContextDevice2D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetSVGContext", &vtkSVGContextDevice2D::SetSVGContext, emscripten::allow_raw_pointers())
    .function("SetEmbedFonts", &vtkSVGContextDevice2D::SetEmbedFonts)
    .function("GetEmbedFonts", &vtkSVGContextDevice2D::GetEmbedFonts)
    .function("EmbedFontsOn", &vtkSVGContextDevice2D::EmbedFontsOn)
    .function("EmbedFontsOff", &vtkSVGContextDevice2D::EmbedFontsOff)
    .function("SetTextAsPath", &vtkSVGContextDevice2D::SetTextAsPath)
    .function("GetTextAsPath", &vtkSVGContextDevice2D::GetTextAsPath)
    .function("TextAsPathOn", &vtkSVGContextDevice2D::TextAsPathOn)
    .function("TextAsPathOff", &vtkSVGContextDevice2D::TextAsPathOff)
    .function("SetSubdivisionThreshold", &vtkSVGContextDevice2D::SetSubdivisionThreshold)
    .function("GetSubdivisionThreshold", &vtkSVGContextDevice2D::GetSubdivisionThreshold)
    .function("GenerateDefinitions", &vtkSVGContextDevice2D::GenerateDefinitions)
    .function("Begin", &vtkSVGContextDevice2D::Begin, emscripten::allow_raw_pointers())
    .function("End", &vtkSVGContextDevice2D::End)
    .function("DrawPoly", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawPoly(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawLines", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawLines(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawPoints", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawPoints(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawPointSprites", emscripten::optional_override([](vtkSVGContextDevice2D& self, vtkImageData* arg_0, std::uintptr_t arg_1, int arg_2, std::uintptr_t arg_3, int arg_4) -> void {  return self.DrawPointSprites( arg_0,reinterpret_cast<float*>(arg_1 * sizeof(float)), arg_2,reinterpret_cast<unsigned char*>(arg_3 * sizeof(unsigned char)), arg_4);}), emscripten::allow_raw_pointers())
    .function("DrawMarkers", emscripten::optional_override([](vtkSVGContextDevice2D& self, int arg_0, bool arg_1, std::uintptr_t arg_2, int arg_3, std::uintptr_t arg_4, int arg_5) -> void {  return self.DrawMarkers( arg_0, arg_1,reinterpret_cast<float*>(arg_2 * sizeof(float)), arg_3,reinterpret_cast<unsigned char*>(arg_4 * sizeof(unsigned char)), arg_5);}))
    .function("DrawQuad", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawQuad(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawQuadStrip", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawQuadStrip(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawPolygon", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, int arg_1) -> void {  return self.DrawPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawColoredPolygon", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, int arg_1, std::uintptr_t arg_2, int arg_3) -> void {  return self.DrawColoredPolygon(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1,reinterpret_cast<unsigned char*>(arg_2 * sizeof(unsigned char)), arg_3);}))
    .function("DrawEllipseWedge", &vtkSVGContextDevice2D::DrawEllipseWedge)
    .function("DrawEllipticArc", &vtkSVGContextDevice2D::DrawEllipticArc)
    .function("DrawString", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, const vtkStdString& arg_1) -> void {  return self.DrawString(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawMathTextString", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0, const vtkStdString& arg_1) -> void {  return self.DrawMathTextString(reinterpret_cast<float*>(arg_0 * sizeof(float)), arg_1);}))
    .function("DrawImage", emscripten::select_overload<void(vtkSVGContextDevice2D&, const vtkRectf&, vtkImageData*)>([](vtkSVGContextDevice2D& self, const vtkRectf& arg_0, vtkImageData* arg_1) -> void { return self.DrawImage( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("SetTexture", &vtkSVGContextDevice2D::SetTexture, emscripten::allow_raw_pointers())
    .function("SetPointSize", &vtkSVGContextDevice2D::SetPointSize)
    .function("SetLineWidth", &vtkSVGContextDevice2D::SetLineWidth)
    .function("SetLineType", &vtkSVGContextDevice2D::SetLineType)
    .function("SetMatrix", &vtkSVGContextDevice2D::SetMatrix, emscripten::allow_raw_pointers())
    .function("GetMatrix", &vtkSVGContextDevice2D::GetMatrix, emscripten::allow_raw_pointers())
    .function("MultiplyMatrix", &vtkSVGContextDevice2D::MultiplyMatrix, emscripten::allow_raw_pointers())
    .function("PushMatrix", &vtkSVGContextDevice2D::PushMatrix)
    .function("PopMatrix", &vtkSVGContextDevice2D::PopMatrix)
    .function("SetClipping", emscripten::optional_override([](vtkSVGContextDevice2D& self, std::uintptr_t arg_0) -> void {  return self.SetClipping(reinterpret_cast<int*>(arg_0 * sizeof(int)));}))
    .function("EnableClipping", &vtkSVGContextDevice2D::EnableClipping);
}
