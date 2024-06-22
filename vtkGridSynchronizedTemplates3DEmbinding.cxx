// JavaScript wrapper for vtkGridSynchronizedTemplates3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkGridSynchronizedTemplates3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkGridSynchronizedTemplates3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkStructuredGrid.h"
#include "vtkInformationVector.h"
#include "vtkInformation.h"
#include "vtkGridSynchronizedTemplates3D.h"

template<> void emscripten::internal::raw_destructor<vtkGridSynchronizedTemplates3D>(vtkGridSynchronizedTemplates3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkGridSynchronizedTemplates3D_class) {
  emscripten::class_<vtkGridSynchronizedTemplates3D, emscripten::base<vtkPolyDataAlgorithm>>("vtkGridSynchronizedTemplates3D")
    .smart_ptr<vtkSmartPointer<vtkGridSynchronizedTemplates3D>>("vtkSmartPointer<vtkGridSynchronizedTemplates3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkGridSynchronizedTemplates3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGridSynchronizedTemplates3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkGridSynchronizedTemplates3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkGridSynchronizedTemplates3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkGridSynchronizedTemplates3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkGridSynchronizedTemplates3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkGridSynchronizedTemplates3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkGridSynchronizedTemplates3D::GetMTime)
    .function("SetComputeNormals", &vtkGridSynchronizedTemplates3D::SetComputeNormals)
    .function("GetComputeNormals", &vtkGridSynchronizedTemplates3D::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkGridSynchronizedTemplates3D::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkGridSynchronizedTemplates3D::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkGridSynchronizedTemplates3D::SetComputeGradients)
    .function("GetComputeGradients", &vtkGridSynchronizedTemplates3D::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkGridSynchronizedTemplates3D::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkGridSynchronizedTemplates3D::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkGridSynchronizedTemplates3D::SetComputeScalars)
    .function("GetComputeScalars", &vtkGridSynchronizedTemplates3D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkGridSynchronizedTemplates3D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkGridSynchronizedTemplates3D::ComputeScalarsOff)
    .function("SetGenerateTriangles", &vtkGridSynchronizedTemplates3D::SetGenerateTriangles)
    .function("GetGenerateTriangles", &vtkGridSynchronizedTemplates3D::GetGenerateTriangles)
    .function("GenerateTrianglesOn", &vtkGridSynchronizedTemplates3D::GenerateTrianglesOn)
    .function("GenerateTrianglesOff", &vtkGridSynchronizedTemplates3D::GenerateTrianglesOff)
    .function("SetValue", &vtkGridSynchronizedTemplates3D::SetValue)
    .function("GetValue", &vtkGridSynchronizedTemplates3D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkGridSynchronizedTemplates3D&)>([](vtkGridSynchronizedTemplates3D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkGridSynchronizedTemplates3D&, std::uintptr_t)>([](vtkGridSynchronizedTemplates3D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkGridSynchronizedTemplates3D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkGridSynchronizedTemplates3D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkGridSynchronizedTemplates3D&, int, double, double)>([](vtkGridSynchronizedTemplates3D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetInputMemoryLimit", &vtkGridSynchronizedTemplates3D::SetInputMemoryLimit)
    .function("SetOutputPointsPrecision", &vtkGridSynchronizedTemplates3D::SetOutputPointsPrecision)
    .function("GetOutputPointsPrecisionMinValue", &vtkGridSynchronizedTemplates3D::GetOutputPointsPrecisionMinValue)
    .function("GetOutputPointsPrecisionMaxValue", &vtkGridSynchronizedTemplates3D::GetOutputPointsPrecisionMaxValue)
    .function("GetOutputPointsPrecision", &vtkGridSynchronizedTemplates3D::GetOutputPointsPrecision);
}
