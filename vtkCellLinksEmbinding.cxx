// JavaScript wrapper for vtkCellLinks with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCommonDataModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonDataModel.js/vtkCellLinksEmbinding.cxx \
 /home/jmh/github/vtk/Common/DataModel/vtkCellLinks.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractCellLinks.h"
#include "vtkCellLinks.h"

template<> void emscripten::internal::raw_destructor<vtkCellLinks>(vtkCellLinks * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellLinks_class) {
  emscripten::class_<vtkCellLinks, emscripten::base<vtkAbstractCellLinks>>("vtkCellLinks")
    .smart_ptr<vtkSmartPointer<vtkCellLinks>>("vtkSmartPointer<vtkCellLinks>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkCellLinks>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellLinks::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellLinks& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellLinks::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellLinks::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellLinks::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellLinks& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("BuildLinks", &vtkCellLinks::BuildLinks)
    .function("Allocate", &vtkCellLinks::Allocate)
    .function("Initialize", &vtkCellLinks::Initialize)
    .function("GetNcells", &vtkCellLinks::GetNcells)
    .function("GetCells", emscripten::optional_override([](vtkCellLinks& self, int arg_0) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetCells( arg_0)) / sizeof(int);}))
    .function("InsertNextPoint", &vtkCellLinks::InsertNextPoint)
    .function("InsertNextCellReference", &vtkCellLinks::InsertNextCellReference)
    .function("DeletePoint", &vtkCellLinks::DeletePoint)
    .function("RemoveCellReference", &vtkCellLinks::RemoveCellReference)
    .function("AddCellReference", &vtkCellLinks::AddCellReference)
    .function("ResizeCellList", &vtkCellLinks::ResizeCellList)
    .function("Squeeze", &vtkCellLinks::Squeeze)
    .function("Reset", &vtkCellLinks::Reset)
    .function("GetActualMemorySize", &vtkCellLinks::GetActualMemorySize)
    .function("DeepCopy", &vtkCellLinks::DeepCopy, emscripten::allow_raw_pointers())
    .function("ShallowCopy", &vtkCellLinks::ShallowCopy, emscripten::allow_raw_pointers());
}
