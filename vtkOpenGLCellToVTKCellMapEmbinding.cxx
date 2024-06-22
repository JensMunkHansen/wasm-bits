// JavaScript wrapper for vtkOpenGLCellToVTKCellMap with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLCellToVTKCellMapEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLCellToVTKCellMap.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkCellArray.h"
#include "vtkPoints.h"
#include "vtkOpenGLCellToVTKCellMap.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLCellToVTKCellMap>(vtkOpenGLCellToVTKCellMap * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLCellToVTKCellMap_class) {
  emscripten::class_<vtkOpenGLCellToVTKCellMap, emscripten::base<vtkObject>>("vtkOpenGLCellToVTKCellMap")
    .smart_ptr<vtkSmartPointer<vtkOpenGLCellToVTKCellMap>>("vtkSmartPointer<vtkOpenGLCellToVTKCellMap>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLCellToVTKCellMap>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCellToVTKCellMap::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLCellToVTKCellMap& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLCellToVTKCellMap::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLCellToVTKCellMap::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLCellToVTKCellMap::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLCellToVTKCellMap& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("ConvertOpenGLCellIdToVTKCellId", &vtkOpenGLCellToVTKCellMap::ConvertOpenGLCellIdToVTKCellId)
    .function("GetSize", &vtkOpenGLCellToVTKCellMap::GetSize)
    .function("GetPrimitiveOffsets", emscripten::optional_override([](vtkOpenGLCellToVTKCellMap& self) -> std::uintptr_t {  return reinterpret_cast<std::uintptr_t>(self.GetPrimitiveOffsets()) / sizeof(int);}))
    .function("GetValue", &vtkOpenGLCellToVTKCellMap::GetValue)
    .function("SetStartOffset", &vtkOpenGLCellToVTKCellMap::SetStartOffset)
    .function("GetFinalOffset", &vtkOpenGLCellToVTKCellMap::GetFinalOffset);
}
