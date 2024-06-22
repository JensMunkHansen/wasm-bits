// JavaScript wrapper for vtkOpenGLCellGridMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCellGrid.js/vtkRenderingCellGrid.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCellGrid.js/vtkOpenGLCellGridMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/CellGrid/vtkOpenGLCellGridMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkAbstractMapper.h"
#include "vtkOpenGLCellGridMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLCellGridMapper>(vtkOpenGLCellGridMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLCellGridMapper_class) {
  emscripten::class_<vtkOpenGLCellGridMapper, emscripten::base<vtkCellGridMapper>>("vtkOpenGLCellGridMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLCellGridMapper>>("vtkSmartPointer<vtkOpenGLCellGridMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLCellGridMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCellGridMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLCellGridMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLCellGridMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLCellGridMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCellGridMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLCellGridMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLCellGridMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLCellGridMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetSupportsSelection", &vtkOpenGLCellGridMapper::GetSupportsSelection)
    .function("ShallowCopy", &vtkOpenGLCellGridMapper::ShallowCopy, emscripten::allow_raw_pointers());
}
