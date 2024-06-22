// JavaScript wrapper for vtkPlot3DMetaReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkPlot3DMetaReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkPlot3DMetaReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlot3DMetaReader.h"

template<> void emscripten::internal::raw_destructor<vtkPlot3DMetaReader>(vtkPlot3DMetaReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPlot3DMetaReader_class) {
  emscripten::class_<vtkPlot3DMetaReader, emscripten::base<vtkMultiBlockDataSetAlgorithm>>("vtkPlot3DMetaReader")
    .smart_ptr<vtkSmartPointer<vtkPlot3DMetaReader>>("vtkSmartPointer<vtkPlot3DMetaReader>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPlot3DMetaReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlot3DMetaReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPlot3DMetaReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPlot3DMetaReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPlot3DMetaReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPlot3DMetaReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPlot3DMetaReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetFileName", emscripten::optional_override([](vtkPlot3DMetaReader& self, const std::string & arg_0) -> void {  return self.SetFileName( arg_0.c_str());}))
    .function("GetFileName", emscripten::optional_override([](vtkPlot3DMetaReader& self) -> std::string {  return self.GetFileName();}));
}
