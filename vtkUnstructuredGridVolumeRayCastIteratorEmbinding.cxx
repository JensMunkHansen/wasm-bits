// JavaScript wrapper for vtkUnstructuredGridVolumeRayCastIterator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkRenderingVolume.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingVolume.js/vtkUnstructuredGridVolumeRayCastIteratorEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Volume/vtkUnstructuredGridVolumeRayCastIterator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkIdList.h"
#include "vtkDoubleArray.h"
#include "vtkDataArray.h"
#include "vtkUnstructuredGridVolumeRayCastIterator.h"

template<> void emscripten::internal::raw_destructor<vtkUnstructuredGridVolumeRayCastIterator>(vtkUnstructuredGridVolumeRayCastIterator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkUnstructuredGridVolumeRayCastIterator_class) {
  emscripten::class_<vtkUnstructuredGridVolumeRayCastIterator, emscripten::base<vtkObject>>("vtkUnstructuredGridVolumeRayCastIterator")
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayCastIterator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkUnstructuredGridVolumeRayCastIterator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkUnstructuredGridVolumeRayCastIterator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkUnstructuredGridVolumeRayCastIterator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkUnstructuredGridVolumeRayCastIterator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkUnstructuredGridVolumeRayCastIterator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetBounds", emscripten::select_overload<void(vtkUnstructuredGridVolumeRayCastIterator&, double, double)>([](vtkUnstructuredGridVolumeRayCastIterator& self, double arg_0, double arg_1) -> void { return self.SetBounds( arg_0, arg_1); }))
    .function("SetMaxNumberOfIntersections", &vtkUnstructuredGridVolumeRayCastIterator::SetMaxNumberOfIntersections)
    .function("GetMaxNumberOfIntersections", &vtkUnstructuredGridVolumeRayCastIterator::GetMaxNumberOfIntersections);
}
