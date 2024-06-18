// JavaScript wrapper for vtkXMLWriter2 with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkIOParallelXML.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallelXML.js/vtkXMLWriter2Embinding.cxx \
 /home/jmh/github/vtk/IO/ParallelXML/vtkXMLWriter2.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkInformation.h"
#include "vtkInformationVector.h"
#include "vtkXMLWriter2.h"

template<> void emscripten::internal::raw_destructor<vtkXMLWriter2>(vtkXMLWriter2 * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkXMLWriter2_class) {
  emscripten::class_<vtkXMLWriter2, emscripten::base<vtkXMLWriterBase>>("vtkXMLWriter2")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLWriter2::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkXMLWriter2& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkXMLWriter2::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkXMLWriter2::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkXMLWriter2::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkXMLWriter2& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkXMLWriter2::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkXMLWriter2::GetController, emscripten::allow_raw_pointers())
    .function("SetNumberOfGhostLevels", &vtkXMLWriter2::SetNumberOfGhostLevels)
    .function("GetNumberOfGhostLevelsMinValue", &vtkXMLWriter2::GetNumberOfGhostLevelsMinValue)
    .function("GetNumberOfGhostLevelsMaxValue", &vtkXMLWriter2::GetNumberOfGhostLevelsMaxValue)
    .function("GetNumberOfGhostLevels", &vtkXMLWriter2::GetNumberOfGhostLevels);
}
