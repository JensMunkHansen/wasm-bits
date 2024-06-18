// JavaScript wrapper for vtkPChacoReader with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkIOParallel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkIOParallel.js/vtkPChacoReaderEmbinding.cxx \
 /home/jmh/github/vtk/IO/Parallel/vtkPChacoReader.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMultiProcessController.h"
#include "vtkPChacoReader.h"

template<> void emscripten::internal::raw_destructor<vtkPChacoReader>(vtkPChacoReader * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPChacoReader_class) {
  emscripten::class_<vtkPChacoReader, emscripten::base<vtkChacoReader>>("vtkPChacoReader")
    .smart_ptr<vtkSmartPointer<vtkPChacoReader>>("vtkSmartPointer<vtkPChacoReader>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkPChacoReader>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPChacoReader::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPChacoReader& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPChacoReader::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPChacoReader::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPChacoReader::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPChacoReader& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetController", &vtkPChacoReader::SetController, emscripten::allow_raw_pointers())
    .function("GetController", &vtkPChacoReader::GetController, emscripten::allow_raw_pointers());
}
