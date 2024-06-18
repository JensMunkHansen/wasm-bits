// JavaScript wrapper for vtkNIFTIImageWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkIOImage.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOImage.js/vtkNIFTIImageWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/Image/vtkNIFTIImageWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMatrix4x4.h"
#include "vtkNIFTIImageHeader.h"
#include "vtkNIFTIImageWriter.h"

template<> void emscripten::internal::raw_destructor<vtkNIFTIImageWriter>(vtkNIFTIImageWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNIFTIImageWriter_class) {
  emscripten::class_<vtkNIFTIImageWriter, emscripten::base<vtkImageWriter>>("vtkNIFTIImageWriter")
    .smart_ptr<vtkSmartPointer<vtkNIFTIImageWriter>>("vtkSmartPointer<vtkNIFTIImageWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNIFTIImageWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNIFTIImageWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNIFTIImageWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNIFTIImageWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNIFTIImageWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNIFTIImageWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNIFTIImageWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNIFTIVersion", &vtkNIFTIImageWriter::SetNIFTIVersion)
    .function("GetNIFTIVersion", &vtkNIFTIImageWriter::GetNIFTIVersion)
    .function("SetDescription", emscripten::optional_override([](vtkNIFTIImageWriter& self, const std::string & arg_0) -> void {  return self.SetDescription( arg_0.c_str());}))
    .function("GetDescription", emscripten::optional_override([](vtkNIFTIImageWriter& self) -> std::string {  return self.GetDescription();}))
    .function("GetTimeDimension", &vtkNIFTIImageWriter::GetTimeDimension)
    .function("SetTimeDimension", &vtkNIFTIImageWriter::SetTimeDimension)
    .function("GetTimeSpacing", &vtkNIFTIImageWriter::GetTimeSpacing)
    .function("SetTimeSpacing", &vtkNIFTIImageWriter::SetTimeSpacing)
    .function("SetRescaleSlope", &vtkNIFTIImageWriter::SetRescaleSlope)
    .function("GetRescaleSlope", &vtkNIFTIImageWriter::GetRescaleSlope)
    .function("SetRescaleIntercept", &vtkNIFTIImageWriter::SetRescaleIntercept)
    .function("GetRescaleIntercept", &vtkNIFTIImageWriter::GetRescaleIntercept)
    .function("GetPlanarRGB", &vtkNIFTIImageWriter::GetPlanarRGB)
    .function("SetPlanarRGB", &vtkNIFTIImageWriter::SetPlanarRGB)
    .function("PlanarRGBOn", &vtkNIFTIImageWriter::PlanarRGBOn)
    .function("PlanarRGBOff", &vtkNIFTIImageWriter::PlanarRGBOff)
    .function("SetQFac", &vtkNIFTIImageWriter::SetQFac)
    .function("GetQFac", &vtkNIFTIImageWriter::GetQFac)
    .function("SetQFormMatrix", &vtkNIFTIImageWriter::SetQFormMatrix, emscripten::allow_raw_pointers())
    .function("GetQFormMatrix", &vtkNIFTIImageWriter::GetQFormMatrix, emscripten::allow_raw_pointers())
    .function("SetSFormMatrix", &vtkNIFTIImageWriter::SetSFormMatrix, emscripten::allow_raw_pointers())
    .function("GetSFormMatrix", &vtkNIFTIImageWriter::GetSFormMatrix, emscripten::allow_raw_pointers())
    .function("SetNIFTIHeader", &vtkNIFTIImageWriter::SetNIFTIHeader, emscripten::allow_raw_pointers())
    .function("GetNIFTIHeader", &vtkNIFTIImageWriter::GetNIFTIHeader, emscripten::allow_raw_pointers());
}
