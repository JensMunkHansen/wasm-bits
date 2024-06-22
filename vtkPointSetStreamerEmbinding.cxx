// JavaScript wrapper for vtkPointSetStreamer with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometryPreview.js/vtkFiltersGeometryPreview.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersGeometryPreview.js/vtkPointSetStreamerEmbinding.cxx \
 /home/jmh/github/vtk/Filters/GeometryPreview/vtkPointSetStreamer.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPointSetStreamer.h"

template<> void emscripten::internal::raw_destructor<vtkPointSetStreamer>(vtkPointSetStreamer * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPointSetStreamer_class) {
  emscripten::class_<vtkPointSetStreamer, emscripten::base<vtkPolyDataAlgorithm>>("vtkPointSetStreamer")
    .smart_ptr<vtkSmartPointer<vtkPointSetStreamer>>("vtkSmartPointer<vtkPointSetStreamer>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPointSetStreamer>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetStreamer::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPointSetStreamer& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPointSetStreamer::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPointSetStreamer::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPointSetStreamer::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPointSetStreamer& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPointsPerBucket", &vtkPointSetStreamer::SetNumberOfPointsPerBucket)
    .function("GetNumberOfPointsPerBucketMinValue", &vtkPointSetStreamer::GetNumberOfPointsPerBucketMinValue)
    .function("GetNumberOfPointsPerBucketMaxValue", &vtkPointSetStreamer::GetNumberOfPointsPerBucketMaxValue)
    .function("GetNumberOfPointsPerBucket", &vtkPointSetStreamer::GetNumberOfPointsPerBucket)
    .function("SetBucketId", &vtkPointSetStreamer::SetBucketId)
    .function("GetBucketIdMinValue", &vtkPointSetStreamer::GetBucketIdMinValue)
    .function("GetBucketIdMaxValue", &vtkPointSetStreamer::GetBucketIdMaxValue)
    .function("GetBucketId", &vtkPointSetStreamer::GetBucketId)
    .function("GetNumberOfBuckets", &vtkPointSetStreamer::GetNumberOfBuckets)
    .function("SetCreateVerticesCellArray", &vtkPointSetStreamer::SetCreateVerticesCellArray)
    .function("GetCreateVerticesCellArray", &vtkPointSetStreamer::GetCreateVerticesCellArray)
    .function("CreateVerticesCellArrayOn", &vtkPointSetStreamer::CreateVerticesCellArrayOn)
    .function("CreateVerticesCellArrayOff", &vtkPointSetStreamer::CreateVerticesCellArrayOff);
}
