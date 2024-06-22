// JavaScript wrapper for vtkProjectedTetrahedraMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkProjectedTetrahedraMapperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkProjectedTetrahedraMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkVisibilitySort.h"
#include "vtkDataArray.h"
#include "vtkVolumeProperty.h"
#include "vtkPoints.h"
#include "vtkFloatArray.h"
#include "vtkRenderWindow.h"
#include "vtkProjectedTetrahedraMapper.h"

template<> void emscripten::internal::raw_destructor<vtkProjectedTetrahedraMapper>(vtkProjectedTetrahedraMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkProjectedTetrahedraMapper_class) {
  emscripten::class_<vtkProjectedTetrahedraMapper, emscripten::base<vtkUnstructuredGridVolumeMapper>>("vtkProjectedTetrahedraMapper")
    .smart_ptr<vtkSmartPointer<vtkProjectedTetrahedraMapper>>("vtkSmartPointer<vtkProjectedTetrahedraMapper>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkProjectedTetrahedraMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectedTetrahedraMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkProjectedTetrahedraMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkProjectedTetrahedraMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkProjectedTetrahedraMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkProjectedTetrahedraMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkProjectedTetrahedraMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetVisibilitySort", &vtkProjectedTetrahedraMapper::SetVisibilitySort, emscripten::allow_raw_pointers())
    .function("GetVisibilitySort", &vtkProjectedTetrahedraMapper::GetVisibilitySort, emscripten::allow_raw_pointers())
    .class_function("MapScalarsToColors", &vtkProjectedTetrahedraMapper::MapScalarsToColors, emscripten::allow_raw_pointers())
    .function("IsSupported", &vtkProjectedTetrahedraMapper::IsSupported, emscripten::allow_raw_pointers());
}
