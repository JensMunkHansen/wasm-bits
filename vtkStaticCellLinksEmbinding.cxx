// JavaScript wrapper for vtkStaticCellLinks with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkStaticCellLinksEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkStaticCellLinks.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractCellLinks.h"
#include "vtkStaticCellLinks.h"

template<> void emscripten::internal::raw_destructor<vtkStaticCellLinks>(vtkStaticCellLinks * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkStaticCellLinks_class) {
  emscripten::class_<vtkStaticCellLinks, emscripten::base<vtkAbstractCellLinks>>("vtkStaticCellLinks")
    .smart_ptr<vtkSmartPointer<vtkStaticCellLinks>>("vtkSmartPointer<vtkStaticCellLinks>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkStaticCellLinks>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCellLinks::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkStaticCellLinks& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkStaticCellLinks::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkStaticCellLinks::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkStaticCellLinks::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkStaticCellLinks& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildLinks", &vtkStaticCellLinks::BuildLinks)
    .function("GetNumberOfCells", &vtkStaticCellLinks::GetNumberOfCells)
    .function("GetNcells", &vtkStaticCellLinks::GetNcells)
    .function("GetCells", emscripten::optional_override([](vtkStaticCellLinks& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCells( arg_0)) / sizeof(int);}))
    .function("Initialize", &vtkStaticCellLinks::Initialize)
    .function("Squeeze", &vtkStaticCellLinks::Squeeze)
    .function("Reset", &vtkStaticCellLinks::Reset)
    .function("GetActualMemorySize", &vtkStaticCellLinks::GetActualMemorySize)
    .function("DeepCopy", &vtkStaticCellLinks::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkStaticCellLinks::ShallowCopy, emscripten::allow_raw_pointers());
}
