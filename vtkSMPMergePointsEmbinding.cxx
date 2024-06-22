// JavaScript wrapper for vtkSMPMergePoints with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSMP.js/vtkFiltersSMP.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersSMP.js/vtkSMPMergePointsEmbinding.cxx \
 /home/jmh/github/vtk/Filters/SMP/vtkSMPMergePoints.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointData.h"
#include "vtkIdList.h"
#include "vtkSMPMergePoints.h"

template<> void emscripten::internal::raw_destructor<vtkSMPMergePoints>(vtkSMPMergePoints * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSMPMergePoints_class) {
  emscripten::class_<vtkSMPMergePoints, emscripten::base<vtkMergePoints>>("vtkSMPMergePoints")
    .smart_ptr<vtkSmartPointer<vtkSMPMergePoints>>("vtkSmartPointer<vtkSMPMergePoints>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSMPMergePoints>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSMPMergePoints::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSMPMergePoints& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSMPMergePoints::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSMPMergePoints::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSMPMergePoints::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSMPMergePoints& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("InitializeMerge", &vtkSMPMergePoints::InitializeMerge)
    .function("Merge", &vtkSMPMergePoints::Merge, emscripten::allow_raw_pointers())
    .function("FixSizeOfPointArray", &vtkSMPMergePoints::FixSizeOfPointArray)
    .function("GetMaxId", &vtkSMPMergePoints::GetMaxId)
    .function("GetNumberOfIdsInBucket", &vtkSMPMergePoints::GetNumberOfIdsInBucket)
    .function("GetNumberOfBuckets", &vtkSMPMergePoints::GetNumberOfBuckets);
}
