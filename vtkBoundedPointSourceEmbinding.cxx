// JavaScript wrapper for vtkBoundedPointSource with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkFiltersPoints.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersPoints.js/vtkBoundedPointSourceEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Points/vtkBoundedPointSource.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkBoundedPointSource.h"

template<> void emscripten::internal::raw_destructor<vtkBoundedPointSource>(vtkBoundedPointSource * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBoundedPointSource_class) {
  emscripten::class_<vtkBoundedPointSource, emscripten::base<vtkPolyDataAlgorithm>>("vtkBoundedPointSource")
    .smart_ptr<vtkSmartPointer<vtkBoundedPointSource>>("vtkSmartPointer<vtkBoundedPointSource>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBoundedPointSource>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoundedPointSource::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBoundedPointSource& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBoundedPointSource::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBoundedPointSource::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBoundedPointSource::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBoundedPointSource& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetNumberOfPoints", &vtkBoundedPointSource::SetNumberOfPoints)
    .function("GetNumberOfPointsMinValue", &vtkBoundedPointSource::GetNumberOfPointsMinValue)
    .function("GetNumberOfPointsMaxValue", &vtkBoundedPointSource::GetNumberOfPointsMaxValue)
    .function("GetNumberOfPoints", &vtkBoundedPointSource::GetNumberOfPoints)
    .function("SetBounds", emscripten::select_overload<void(vtkBoundedPointSource&, double, double, double, double, double, double)>([](vtkBoundedPointSource& self, double arg_0, double arg_1, double arg_2, double arg_3, double arg_4, double arg_5) -> void { return self.SetBounds( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetOutputPointsPrecision", &vtkBoundedPointSource::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecision", &vtkBoundedPointSource::GetOutputPointsPrecision)
    .function("SetProduceCellOutput", &vtkBoundedPointSource::SetProduceCellOutput)
    .function("GetProduceCellOutput", &vtkBoundedPointSource::GetProduceCellOutput)
    .function("ProduceCellOutputOn", &vtkBoundedPointSource::ProduceCellOutputOn)
    .function("ProduceCellOutputOff", &vtkBoundedPointSource::ProduceCellOutputOff)
    .function("SetProduceRandomScalars", &vtkBoundedPointSource::SetProduceRandomScalars)
    .function("GetProduceRandomScalars", &vtkBoundedPointSource::GetProduceRandomScalars)
    .function("ProduceRandomScalarsOn", &vtkBoundedPointSource::ProduceRandomScalarsOn)
    .function("ProduceRandomScalarsOff", &vtkBoundedPointSource::ProduceRandomScalarsOff)
    .function("SetScalarRange", emscripten::select_overload<void(vtkBoundedPointSource&, double, double)>([](vtkBoundedPointSource& self, double arg_0, double arg_1) -> void { return self.SetScalarRange( arg_0, arg_1); }));
}
