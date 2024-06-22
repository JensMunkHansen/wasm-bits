// JavaScript wrapper for vtkXMLDataWriterHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLDataWriterHelperEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLDataWriterHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLWriter2.h"
#include "vtkCompositeDataSet.h"
#include "vtkXMLDataElement.h"
#include "vtkXMLDataWriterHelper.h"

template<> void emscripten::internal::raw_destructor<vtkXMLDataWriterHelper>(vtkXMLDataWriterHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLDataWriterHelper_class) {
  emscripten::class_<vtkXMLDataWriterHelper, emscripten::base<vtkXMLWriter>>("vtkXMLDataWriterHelper")
    .smart_ptr<vtkSmartPointer<vtkXMLDataWriterHelper>>("vtkSmartPointer<vtkXMLDataWriterHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLDataWriterHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataWriterHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLDataWriterHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLDataWriterHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLDataWriterHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLDataWriterHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLDataWriterHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWriter", &vtkXMLDataWriterHelper::SetWriter, emscripten::allow_raw_pointers())
    .function("GetWriter", &vtkXMLDataWriterHelper::GetWriter, emscripten::allow_raw_pointers())
    .function("OpenFile", &vtkXMLDataWriterHelper::OpenFile)
    .function("BeginWriting", &vtkXMLDataWriterHelper::BeginWriting)
    .function("EndWriting", &vtkXMLDataWriterHelper::EndWriting)
    .function("AddGlobalFieldData", &vtkXMLDataWriterHelper::AddGlobalFieldData, emscripten::allow_raw_pointers())
    .function("AddXML", &vtkXMLDataWriterHelper::AddXML, emscripten::allow_raw_pointers())
    .function("SetDataSetName", &vtkXMLDataWriterHelper::SetDataSetName)
    .function("SetDataSetVersion", &vtkXMLDataWriterHelper::SetDataSetVersion)
    .function("GetDefaultFileExtension", emscripten::optional_override([](vtkXMLDataWriterHelper& self) -> std::string {  return self.GetDefaultFileExtension();}));
}
