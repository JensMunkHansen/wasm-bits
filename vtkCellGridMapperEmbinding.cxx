// JavaScript wrapper for vtkCellGridMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkCellGridMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkCellGridMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkCellGrid.h"
#include "vtkInformationVector.h"
#include "vtkInformation.h"
#include "vtkScalarsToColors.h"
#include "vtkCellGridMapper.h"

template<> void emscripten::internal::raw_destructor<vtkCellGridMapper>(vtkCellGridMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkCellGridMapper_class) {
  emscripten::class_<vtkCellGridMapper, emscripten::base<vtkMapper>>("vtkCellGridMapper")
    .smart_ptr<vtkSmartPointer<vtkCellGridMapper>>("vtkSmartPointer<vtkCellGridMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkCellGridMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkCellGridMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkCellGridMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkCellGridMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkCellGridMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkCellGridMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVisualizePCoords", &vtkCellGridMapper::SetVisualizePCoords)
    .function("GetVisualizePCoords", &vtkCellGridMapper::GetVisualizePCoords)
    .function("SetVisualizeBasisFunction", &vtkCellGridMapper::SetVisualizeBasisFunction)
    .function("GetVisualizeBasisFunction", &vtkCellGridMapper::GetVisualizeBasisFunction)
    .function("Render", &vtkCellGridMapper::Render, emscripten::allow_raw_pointers())
    .function("SetInputData", &vtkCellGridMapper::SetInputData, emscripten::allow_raw_pointers())
    .function("GetInput", &vtkCellGridMapper::GetInput, emscripten::allow_raw_pointers())
    .function("Update", emscripten::select_overload<void(vtkCellGridMapper&, int)>([](vtkCellGridMapper& self, int arg_0) -> void { return self.Update( arg_0); }))
    .function("Update", emscripten::select_overload<int(vtkCellGridMapper&, vtkInformation*)>([](vtkCellGridMapper& self, vtkInformation* arg_0) -> int { return self.Update( arg_0); }), emscripten::allow_raw_pointers())
    .function("Update", emscripten::select_overload<void(vtkCellGridMapper&)>([](vtkCellGridMapper& self) -> void { return self.Update(); }))
    .function("Update", emscripten::select_overload<int(vtkCellGridMapper&, int, vtkInformationVector*)>([](vtkCellGridMapper& self, int arg_0, vtkInformationVector* arg_1) -> int { return self.Update( arg_0, arg_1); }), emscripten::allow_raw_pointers())
    .function("PrepareColormap", &vtkCellGridMapper::PrepareColormap, emscripten::allow_raw_pointers())
    .function("HasTranslucentPolygonalGeometry", &vtkCellGridMapper::HasTranslucentPolygonalGeometry);
}
