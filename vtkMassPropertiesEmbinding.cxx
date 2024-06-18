// JavaScript wrapper for vtkMassProperties with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkMassPropertiesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkMassProperties.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkMassProperties.h"

template<> void emscripten::internal::raw_destructor<vtkMassProperties>(vtkMassProperties * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkMassProperties_class) {
  emscripten::class_<vtkMassProperties, emscripten::base<vtkPolyDataAlgorithm>>("vtkMassProperties")
    .smart_ptr<vtkSmartPointer<vtkMassProperties>>("vtkSmartPointer<vtkMassProperties>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkMassProperties>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMassProperties::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkMassProperties& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkMassProperties::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkMassProperties::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkMassProperties::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkMassProperties& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetVolume", &vtkMassProperties::GetVolume)
    .function("GetVolumeProjected", &vtkMassProperties::GetVolumeProjected)
    .function("GetVolumeX", &vtkMassProperties::GetVolumeX)
    .function("GetVolumeY", &vtkMassProperties::GetVolumeY)
    .function("GetVolumeZ", &vtkMassProperties::GetVolumeZ)
    .function("GetKx", &vtkMassProperties::GetKx)
    .function("GetKy", &vtkMassProperties::GetKy)
    .function("GetKz", &vtkMassProperties::GetKz)
    .function("GetSurfaceArea", &vtkMassProperties::GetSurfaceArea)
    .function("GetMinCellArea", &vtkMassProperties::GetMinCellArea)
    .function("GetMaxCellArea", &vtkMassProperties::GetMaxCellArea)
    .function("GetNormalizedShapeIndex", &vtkMassProperties::GetNormalizedShapeIndex);
}
