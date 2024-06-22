// JavaScript wrapper for vtkClipConvexPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkFiltersGeneral.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeneral.js/vtkClipConvexPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/General/vtkClipConvexPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPlaneCollection.h"
#include "vtkClipConvexPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkClipConvexPolyData>(vtkClipConvexPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkClipConvexPolyData_class) {
  emscripten::class_<vtkClipConvexPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkClipConvexPolyData")
    .smart_ptr<vtkSmartPointer<vtkClipConvexPolyData>>("vtkSmartPointer<vtkClipConvexPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkClipConvexPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipConvexPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkClipConvexPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkClipConvexPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkClipConvexPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkClipConvexPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkClipConvexPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetPlanes", &vtkClipConvexPolyData::SetPlanes, emscripten::allow_raw_pointers())
    .function("GetPlanes", &vtkClipConvexPolyData::GetPlanes, emscripten::allow_raw_pointers())
    .function("GetMTime", &vtkClipConvexPolyData::GetMTime);
}
