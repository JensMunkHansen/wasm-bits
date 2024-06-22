// JavaScript wrapper for vtkSynchronizedTemplates3D with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkSynchronizedTemplates3DEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkSynchronizedTemplates3D.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkImageData.h"
#include "vtkInformation.h"
#include "vtkDataArray.h"
#include "vtkSynchronizedTemplates3D.h"

template<> void emscripten::internal::raw_destructor<vtkSynchronizedTemplates3D>(vtkSynchronizedTemplates3D * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkSynchronizedTemplates3D_class) {
  emscripten::class_<vtkSynchronizedTemplates3D, emscripten::base<vtkPolyDataAlgorithm>>("vtkSynchronizedTemplates3D")
    .smart_ptr<vtkSmartPointer<vtkSynchronizedTemplates3D>>("vtkSmartPointer<vtkSynchronizedTemplates3D>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkSynchronizedTemplates3D>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizedTemplates3D::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkSynchronizedTemplates3D& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkSynchronizedTemplates3D::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkSynchronizedTemplates3D::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkSynchronizedTemplates3D::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkSynchronizedTemplates3D& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkSynchronizedTemplates3D::GetMTime)
    .function("SetComputeNormals", &vtkSynchronizedTemplates3D::SetComputeNormals)
    .function("GetComputeNormals", &vtkSynchronizedTemplates3D::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkSynchronizedTemplates3D::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkSynchronizedTemplates3D::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkSynchronizedTemplates3D::SetComputeGradients)
    .function("GetComputeGradients", &vtkSynchronizedTemplates3D::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkSynchronizedTemplates3D::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkSynchronizedTemplates3D::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkSynchronizedTemplates3D::SetComputeScalars)
    .function("GetComputeScalars", &vtkSynchronizedTemplates3D::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkSynchronizedTemplates3D::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkSynchronizedTemplates3D::ComputeScalarsOff)
    .function("SetGenerateTriangles", &vtkSynchronizedTemplates3D::SetGenerateTriangles)
    .function("GetGenerateTriangles", &vtkSynchronizedTemplates3D::GetGenerateTriangles)
    .function("GenerateTrianglesOn", &vtkSynchronizedTemplates3D::GenerateTrianglesOn)
    .function("GenerateTrianglesOff", &vtkSynchronizedTemplates3D::GenerateTrianglesOff)
    .function("SetValue", &vtkSynchronizedTemplates3D::SetValue)
    .function("GetValue", &vtkSynchronizedTemplates3D::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkSynchronizedTemplates3D&)>([](vtkSynchronizedTemplates3D& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkSynchronizedTemplates3D&, std::uintptr_t)>([](vtkSynchronizedTemplates3D& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkSynchronizedTemplates3D::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkSynchronizedTemplates3D::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkSynchronizedTemplates3D&, int, double, double)>([](vtkSynchronizedTemplates3D& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("ThreadedExecute", &vtkSynchronizedTemplates3D::ThreadedExecute, emscripten::allow_raw_pointers())
    .function("SetInputMemoryLimit", &vtkSynchronizedTemplates3D::SetInputMemoryLimit)
    .function("GetInputMemoryLimit", &vtkSynchronizedTemplates3D::GetInputMemoryLimit)
    .function("SetArrayComponent", &vtkSynchronizedTemplates3D::SetArrayComponent)
    .function("GetArrayComponent", &vtkSynchronizedTemplates3D::GetArrayComponent);
}
