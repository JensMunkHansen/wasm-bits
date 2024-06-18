// JavaScript wrapper for vtkRemoveDuplicatePolys with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkRemoveDuplicatePolysEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkRemoveDuplicatePolys.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkObjectBase.h"
#include "vtkRemoveDuplicatePolys.h"

template<> void emscripten::internal::raw_destructor<vtkRemoveDuplicatePolys>(vtkRemoveDuplicatePolys * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRemoveDuplicatePolys_class) {
  emscripten::class_<vtkRemoveDuplicatePolys, emscripten::base<vtkPolyDataAlgorithm>>("vtkRemoveDuplicatePolys")
    .smart_ptr<vtkSmartPointer<vtkRemoveDuplicatePolys>>("vtkSmartPointer<vtkRemoveDuplicatePolys>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkRemoveDuplicatePolys>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveDuplicatePolys::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRemoveDuplicatePolys& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRemoveDuplicatePolys::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRemoveDuplicatePolys::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRemoveDuplicatePolys::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRemoveDuplicatePolys& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}));
}
