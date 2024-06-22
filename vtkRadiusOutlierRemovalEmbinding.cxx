// JavaScript wrapper for vtkRadiusOutlierRemoval with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkRadiusOutlierRemovalEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkRadiusOutlierRemoval.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractPointLocator.h"
#include "vtkRadiusOutlierRemoval.h"

template<> void emscripten::internal::raw_destructor<vtkRadiusOutlierRemoval>(vtkRadiusOutlierRemoval * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRadiusOutlierRemoval_class) {
  emscripten::class_<vtkRadiusOutlierRemoval, emscripten::base<vtkPointCloudFilter>>("vtkRadiusOutlierRemoval")
    .smart_ptr<vtkSmartPointer<vtkRadiusOutlierRemoval>>("vtkSmartPointer<vtkRadiusOutlierRemoval>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRadiusOutlierRemoval>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRadiusOutlierRemoval::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRadiusOutlierRemoval& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRadiusOutlierRemoval::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRadiusOutlierRemoval::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRadiusOutlierRemoval::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRadiusOutlierRemoval& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetRadius", &vtkRadiusOutlierRemoval::SetRadius)
    .function("GetRadiusMinValue", &vtkRadiusOutlierRemoval::GetRadiusMinValue)
    .function("GetRadiusMaxValue", &vtkRadiusOutlierRemoval::GetRadiusMaxValue)
    .function("GetRadius", &vtkRadiusOutlierRemoval::GetRadius)
    .function("SetNumberOfNeighbors", &vtkRadiusOutlierRemoval::SetNumberOfNeighbors)
    .function("GetNumberOfNeighborsMinValue", &vtkRadiusOutlierRemoval::GetNumberOfNeighborsMinValue)
    .function("GetNumberOfNeighborsMaxValue", &vtkRadiusOutlierRemoval::GetNumberOfNeighborsMaxValue)
    .function("GetNumberOfNeighbors", &vtkRadiusOutlierRemoval::GetNumberOfNeighbors)
    .function("SetLocator", &vtkRadiusOutlierRemoval::SetLocator, emscripten::allow_raw_pointers())
    .function("GetLocator", &vtkRadiusOutlierRemoval::GetLocator, emscripten::allow_raw_pointers());
}
