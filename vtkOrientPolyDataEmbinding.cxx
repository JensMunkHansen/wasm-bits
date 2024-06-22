// JavaScript wrapper for vtkOrientPolyData with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkOrientPolyDataEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkOrientPolyData.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkOrientPolyData.h"

template<> void emscripten::internal::raw_destructor<vtkOrientPolyData>(vtkOrientPolyData * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOrientPolyData_class) {
  emscripten::class_<vtkOrientPolyData, emscripten::base<vtkPolyDataAlgorithm>>("vtkOrientPolyData")
    .smart_ptr<vtkSmartPointer<vtkOrientPolyData>>("vtkSmartPointer<vtkOrientPolyData>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkOrientPolyData>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientPolyData::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOrientPolyData& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOrientPolyData::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOrientPolyData::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOrientPolyData::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOrientPolyData& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetConsistency", &vtkOrientPolyData::SetConsistency)
    .function("GetConsistency", &vtkOrientPolyData::GetConsistency)
    .function("ConsistencyOn", &vtkOrientPolyData::ConsistencyOn)
    .function("ConsistencyOff", &vtkOrientPolyData::ConsistencyOff)
    .function("SetAutoOrientNormals", &vtkOrientPolyData::SetAutoOrientNormals)
    .function("GetAutoOrientNormals", &vtkOrientPolyData::GetAutoOrientNormals)
    .function("AutoOrientNormalsOn", &vtkOrientPolyData::AutoOrientNormalsOn)
    .function("AutoOrientNormalsOff", &vtkOrientPolyData::AutoOrientNormalsOff)
    .function("SetNonManifoldTraversal", &vtkOrientPolyData::SetNonManifoldTraversal)
    .function("GetNonManifoldTraversal", &vtkOrientPolyData::GetNonManifoldTraversal)
    .function("NonManifoldTraversalOn", &vtkOrientPolyData::NonManifoldTraversalOn)
    .function("NonManifoldTraversalOff", &vtkOrientPolyData::NonManifoldTraversalOff)
    .function("SetFlipNormals", &vtkOrientPolyData::SetFlipNormals)
    .function("GetFlipNormals", &vtkOrientPolyData::GetFlipNormals)
    .function("FlipNormalsOn", &vtkOrientPolyData::FlipNormalsOn)
    .function("FlipNormalsOff", &vtkOrientPolyData::FlipNormalsOff);
}
