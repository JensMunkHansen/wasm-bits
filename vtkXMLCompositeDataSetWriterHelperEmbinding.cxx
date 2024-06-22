// JavaScript wrapper for vtkXMLCompositeDataSetWriterHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLCompositeDataSetWriterHelperEmbinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLCompositeDataSetWriterHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkXMLWriterBase.h"
#include "vtkDataObject.h"
#include "vtkXMLCompositeDataSetWriterHelper.h"

template<> void emscripten::internal::raw_destructor<vtkXMLCompositeDataSetWriterHelper>(vtkXMLCompositeDataSetWriterHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLCompositeDataSetWriterHelper_class) {
  emscripten::class_<vtkXMLCompositeDataSetWriterHelper, emscripten::base<vtkObject>>("vtkXMLCompositeDataSetWriterHelper")
    .smart_ptr<vtkSmartPointer<vtkXMLCompositeDataSetWriterHelper>>("vtkSmartPointer<vtkXMLCompositeDataSetWriterHelper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkXMLCompositeDataSetWriterHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLCompositeDataSetWriterHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLCompositeDataSetWriterHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLCompositeDataSetWriterHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLCompositeDataSetWriterHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLCompositeDataSetWriterHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLCompositeDataSetWriterHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWriter", &vtkXMLCompositeDataSetWriterHelper::SetWriter, emscripten::allow_raw_pointers())
    .function("GetWriter", emscripten::select_overload<vtkXMLWriterBase*(vtkXMLCompositeDataSetWriterHelper&)>([](vtkXMLCompositeDataSetWriterHelper& self) -> vtkXMLWriterBase* { return self.GetWriter(); }), emscripten::allow_raw_pointers())
    .function("WriteDataSet", &vtkXMLCompositeDataSetWriterHelper::WriteDataSet, emscripten::allow_raw_pointers());
}
