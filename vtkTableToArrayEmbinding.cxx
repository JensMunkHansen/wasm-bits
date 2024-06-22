// JavaScript wrapper for vtkTableToArray with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkInfovisCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkInfovisCore.js/vtkTableToArrayEmbinding.cxx \
 /home/jmh/github/vtk/Infovis/Core/vtkTableToArray.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkTableToArray.h"

template<> void emscripten::internal::raw_destructor<vtkTableToArray>(vtkTableToArray * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkTableToArray_class) {
  emscripten::class_<vtkTableToArray, emscripten::base<vtkArrayDataAlgorithm>>("vtkTableToArray")
    .smart_ptr<vtkSmartPointer<vtkTableToArray>>("vtkSmartPointer<vtkTableToArray>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkTableToArray>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToArray::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkTableToArray& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkTableToArray::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkTableToArray::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkTableToArray::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkTableToArray& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ClearColumns", &vtkTableToArray::ClearColumns)
    .function("AddColumn", emscripten::select_overload<void(vtkTableToArray&, const std::string &)>([](vtkTableToArray& self, const std::string & arg_0) -> void { return self.AddColumn( arg_0.c_str()); }))
    .function("AddColumn", emscripten::select_overload<void(vtkTableToArray&, int)>([](vtkTableToArray& self, int arg_0) -> void { return self.AddColumn( arg_0); }))
    .function("AddAllColumns", &vtkTableToArray::AddAllColumns);
}
