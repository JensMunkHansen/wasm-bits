// JavaScript wrapper for vtkPolyDataStreamer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkPolyDataStreamerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkPolyDataStreamer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPolyDataStreamer.h"

template<> void emscripten::internal::raw_destructor<vtkPolyDataStreamer>(vtkPolyDataStreamer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPolyDataStreamer_class) {
  emscripten::class_<vtkPolyDataStreamer, emscripten::base<vtkStreamerBase>>("vtkPolyDataStreamer")
    .smart_ptr<vtkSmartPointer<vtkPolyDataStreamer>>("vtkSmartPointer<vtkPolyDataStreamer>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPolyDataStreamer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataStreamer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPolyDataStreamer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPolyDataStreamer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPolyDataStreamer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPolyDataStreamer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPolyDataStreamer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfStreamDivisions", &vtkPolyDataStreamer::SetNumberOfStreamDivisions)
    .function("GetNumberOfStreamDivisions", &vtkPolyDataStreamer::GetNumberOfStreamDivisions)
    .function("SetColorByPiece", &vtkPolyDataStreamer::SetColorByPiece)
    .function("GetColorByPiece", &vtkPolyDataStreamer::GetColorByPiece)
    .function("ColorByPieceOn", &vtkPolyDataStreamer::ColorByPieceOn)
    .function("ColorByPieceOff", &vtkPolyDataStreamer::ColorByPieceOff);
}
