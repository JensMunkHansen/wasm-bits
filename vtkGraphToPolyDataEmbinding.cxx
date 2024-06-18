// JavaScript wrapper for vtkGraphToPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkFiltersSources.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSources.js/vtkGraphToPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Sources/vtkGraphToPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkGraphToPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkGraphToPolyData>(vtkGraphToPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGraphToPolyData_class) {
  emscripten::class_<vtkGraphToPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkGraphToPolyData")
    .smart_ptr<vtkSmartPointer<vtkGraphToPolyData>>("vtkSmartPointer<vtkGraphToPolyData>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkGraphToPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphToPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGraphToPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGraphToPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGraphToPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGraphToPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGraphToPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetEdgeGlyphOutput", &vtkGraphToPolyData::SetEdgeGlyphOutput)
    .function("GetEdgeGlyphOutput", &vtkGraphToPolyData::GetEdgeGlyphOutput)
    .function("EdgeGlyphOutputOn", &vtkGraphToPolyData::EdgeGlyphOutputOn)
    .function("EdgeGlyphOutputOff", &vtkGraphToPolyData::EdgeGlyphOutputOff)
    .function("SetEdgeGlyphPosition", &vtkGraphToPolyData::SetEdgeGlyphPosition)
    .function("GetEdgeGlyphPosition", &vtkGraphToPolyData::GetEdgeGlyphPosition);
}
