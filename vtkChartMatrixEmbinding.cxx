// JavaScript wrapper for vtkChartMatrix with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkChartsCore.js/vtkChartMatrixEmbinding.cxx \
 /home/jmh/github/vtk/Charts/Core/vtkChartMatrix.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkContext2D.h"
#include "vtkVector.h"
#include "vtkChart.h"
#include "vtkRect.h"
#include "vtkChartMatrix.h"

EMSCRIPTEN_BINDINGS(vtkChartsCore_vtkChartMatrix_class_enums) {
  emscripten::enum_<vtkChartMatrix::StretchType>("vtkChartMatrix_StretchType")
    .value("SCENE", vtkChartMatrix::StretchType::SCENE)
    .value("CUSTOM", vtkChartMatrix::StretchType::CUSTOM);
}
template<> void emscripten::internal::raw_destructor<vtkChartMatrix>(vtkChartMatrix * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkChartMatrix_class) {
  using StretchType=vtkChartMatrix::StretchType;
  emscripten::class_<vtkChartMatrix, emscripten::base<vtkAbstractContextItem>>("vtkChartMatrix")
    .smart_ptr<vtkSmartPointer<vtkChartMatrix>>("vtkSmartPointer<vtkChartMatrix>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkChartMatrix>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartMatrix::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkChartMatrix& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkChartMatrix::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkChartMatrix::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkChartMatrix::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkChartMatrix& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Update", &vtkChartMatrix::Update)
    .function("Paint", &vtkChartMatrix::Paint, emscripten::allow_raw_pointers())
    .function("SetSize", &vtkChartMatrix::SetSize)
    .function("GetSize", &vtkChartMatrix::GetSize)
    .function("SetBorders", &vtkChartMatrix::SetBorders)
    .function("SetBorderLeft", &vtkChartMatrix::SetBorderLeft)
    .function("SetBorderBottom", &vtkChartMatrix::SetBorderBottom)
    .function("SetBorderRight", &vtkChartMatrix::SetBorderRight)
    .function("SetBorderTop", &vtkChartMatrix::SetBorderTop)
    .function("SetGutter", &vtkChartMatrix::SetGutter)
    .function("SetGutterX", &vtkChartMatrix::SetGutterX)
    .function("SetGutterY", &vtkChartMatrix::SetGutterY)
    .function("SetPadding", &vtkChartMatrix::SetPadding)
    .function("SetSpecificResize", &vtkChartMatrix::SetSpecificResize)
    .function("ClearSpecificResizes", &vtkChartMatrix::ClearSpecificResizes)
    .function("GetGutter", &vtkChartMatrix::GetGutter)
    .function("Allocate", &vtkChartMatrix::Allocate)
    .function("SetChart", &vtkChartMatrix::SetChart, emscripten::allow_raw_pointers())
    .function("GetChart", &vtkChartMatrix::GetChart, emscripten::allow_raw_pointers())
    .function("SetChartSpan", &vtkChartMatrix::SetChartSpan)
    .function("GetChartSpan", &vtkChartMatrix::GetChartSpan)
    .function("GetChartIndex", &vtkChartMatrix::GetChartIndex)
    .function("GetFlatIndex", &vtkChartMatrix::GetFlatIndex)
    .function("GetNumberOfCharts", &vtkChartMatrix::GetNumberOfCharts)
    .function("LabelOuter", &vtkChartMatrix::LabelOuter)
    .function("Link", emscripten::select_overload<void(vtkChartMatrix&, const vtkVector2i&, const vtkVector2i&, int)>([](vtkChartMatrix& self, const vtkVector2i& arg_0, const vtkVector2i& arg_1, int arg_2) -> void { return self.Link( arg_0, arg_1, arg_2); }))
    .function("Link", emscripten::select_overload<void(vtkChartMatrix&, const size_t&, const size_t&, int)>([](vtkChartMatrix& self, const size_t& arg_0, const size_t& arg_1, int arg_2) -> void { return self.Link( arg_0, arg_1, arg_2); }))
    .function("LinkAll", emscripten::select_overload<void(vtkChartMatrix&, const vtkVector2i&, int)>([](vtkChartMatrix& self, const vtkVector2i& arg_0, int arg_1) -> void { return self.LinkAll( arg_0, arg_1); }))
    .function("LinkAll", emscripten::select_overload<void(vtkChartMatrix&, const size_t&, int)>([](vtkChartMatrix& self, const size_t& arg_0, int arg_1) -> void { return self.LinkAll( arg_0, arg_1); }))
    .function("Unlink", emscripten::select_overload<void(vtkChartMatrix&, const vtkVector2i&, const vtkVector2i&, int)>([](vtkChartMatrix& self, const vtkVector2i& arg_0, const vtkVector2i& arg_1, int arg_2) -> void { return self.Unlink( arg_0, arg_1, arg_2); }))
    .function("Unlink", emscripten::select_overload<void(vtkChartMatrix&, const size_t&, const size_t&, int)>([](vtkChartMatrix& self, const size_t& arg_0, const size_t& arg_1, int arg_2) -> void { return self.Unlink( arg_0, arg_1, arg_2); }))
    .function("UnlinkAll", emscripten::select_overload<void(vtkChartMatrix&, const vtkVector2i&, int)>([](vtkChartMatrix& self, const vtkVector2i& arg_0, int arg_1) -> void { return self.UnlinkAll( arg_0, arg_1); }))
    .function("UnlinkAll", emscripten::select_overload<void(vtkChartMatrix&, const size_t&, int)>([](vtkChartMatrix& self, const size_t& arg_0, int arg_1) -> void { return self.UnlinkAll( arg_0, arg_1); }))
    .function("ResetLinks", &vtkChartMatrix::ResetLinks)
    .function("ResetLinkedLayout", &vtkChartMatrix::ResetLinkedLayout)
    .function("SetRect", &vtkChartMatrix::SetRect)
    .function("GetRect", &vtkChartMatrix::GetRect)
    .function("SetChartMatrix", &vtkChartMatrix::SetChartMatrix, emscripten::allow_raw_pointers())
    .function("GetChartMatrix", &vtkChartMatrix::GetChartMatrix, emscripten::allow_raw_pointers())
    .function("IsDoneWithTraversal", &vtkChartMatrix::IsDoneWithTraversal)
    .function("ComputeCurrentElementSceneRect", &vtkChartMatrix::ComputeCurrentElementSceneRect)
    .function("SetFillStrategy", &vtkChartMatrix::SetFillStrategy)
    .function("GetFillStrategy", &vtkChartMatrix::GetFillStrategy);
}
