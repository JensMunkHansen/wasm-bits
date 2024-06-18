// JavaScript wrapper for vtkNetCDFCFWriter with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkIONetCDF.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIONetCDF.js/vtkNetCDFCFWriterEmbinding.cxx \
 /home/jmh/github/vtk/IO/NetCDF/vtkNetCDFCFWriter.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkNetCDFCFWriter.h"

template<> void emscripten::internal::raw_destructor<vtkNetCDFCFWriter>(vtkNetCDFCFWriter * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkNetCDFCFWriter_class) {
  emscripten::class_<vtkNetCDFCFWriter, emscripten::base<vtkWriter>>("vtkNetCDFCFWriter")
    .smart_ptr<vtkSmartPointer<vtkNetCDFCFWriter>>("vtkSmartPointer<vtkNetCDFCFWriter>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkNetCDFCFWriter>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCFWriter::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkNetCDFCFWriter& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkNetCDFCFWriter::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkNetCDFCFWriter::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkNetCDFCFWriter::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkNetCDFCFWriter& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkNetCDFCFWriter& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkNetCDFCFWriter& self) -> std::string {  return self.GetFileName();}))
    .function("SetCellArrayNamePostfix", emscripten::optional_override([](vtkNetCDFCFWriter& self, const std::string & arg_0) -> void {  return self.SetCellArrayNamePostfix( arg_0.c_str());}))
    .function("GetCellArrayNamePostfix", emscripten::optional_override([](vtkNetCDFCFWriter& self) -> std::string {  return self.GetCellArrayNamePostfix();}))
    .function("SetFillValue", &vtkNetCDFCFWriter::SetFillValue)
    .function("GetFillValue", &vtkNetCDFCFWriter::GetFillValue)
    .function("SetAttributeType", &vtkNetCDFCFWriter::SetAttributeType)
    .function("GetAttributeType", &vtkNetCDFCFWriter::GetAttributeType)
    .function("SetFillBlankedAttributes", &vtkNetCDFCFWriter::SetFillBlankedAttributes)
    .function("GetFillBlankedAttributes", &vtkNetCDFCFWriter::GetFillBlankedAttributes)
    .function("FillBlankedAttributesOn", &vtkNetCDFCFWriter::FillBlankedAttributesOn)
    .function("FillBlankedAttributesOff", &vtkNetCDFCFWriter::FillBlankedAttributesOff)
    .function("AddGridMappingAttribute", emscripten::select_overload<void(vtkNetCDFCFWriter&, const std::string &, const std::string &)>([](vtkNetCDFCFWriter& self, const std::string & arg_0, const std::string & arg_1) -> void { return self.AddGridMappingAttribute( arg_0.c_str(), arg_1.c_str()); }))
    .function("AddGridMappingAttribute", emscripten::select_overload<void(vtkNetCDFCFWriter&, const std::string &, double)>([](vtkNetCDFCFWriter& self, const std::string & arg_0, double arg_1) -> void { return self.AddGridMappingAttribute( arg_0.c_str(), arg_1); }))
    .function("ClearGridMappingAttributes", &vtkNetCDFCFWriter::ClearGridMappingAttributes);
}
