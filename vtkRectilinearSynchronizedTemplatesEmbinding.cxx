// JavaScript wrapper for vtkRectilinearSynchronizedTemplates with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkFiltersCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersCore.js/vtkRectilinearSynchronizedTemplatesEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Core/vtkRectilinearSynchronizedTemplates.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRectilinearGrid.h"
#include "vtkRectilinearSynchronizedTemplates.h"

template<> void emscripten::internal::raw_destructor<vtkRectilinearSynchronizedTemplates>(vtkRectilinearSynchronizedTemplates * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkRectilinearSynchronizedTemplates_class) {
  emscripten::class_<vtkRectilinearSynchronizedTemplates, emscripten::base<vtkPolyDataAlgorithm>>("vtkRectilinearSynchronizedTemplates")
    .smart_ptr<vtkSmartPointer<vtkRectilinearSynchronizedTemplates>>("vtkSmartPointer<vtkRectilinearSynchronizedTemplates>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkRectilinearSynchronizedTemplates>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearSynchronizedTemplates::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkRectilinearSynchronizedTemplates& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkRectilinearSynchronizedTemplates::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkRectilinearSynchronizedTemplates::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkRectilinearSynchronizedTemplates::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkRectilinearSynchronizedTemplates& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetMTime", &vtkRectilinearSynchronizedTemplates::GetMTime)
    .function("SetComputeNormals", &vtkRectilinearSynchronizedTemplates::SetComputeNormals)
    .function("GetComputeNormals", &vtkRectilinearSynchronizedTemplates::GetComputeNormals)
    .function("ComputeNormalsOn", &vtkRectilinearSynchronizedTemplates::ComputeNormalsOn)
    .function("ComputeNormalsOff", &vtkRectilinearSynchronizedTemplates::ComputeNormalsOff)
    .function("SetComputeGradients", &vtkRectilinearSynchronizedTemplates::SetComputeGradients)
    .function("GetComputeGradients", &vtkRectilinearSynchronizedTemplates::GetComputeGradients)
    .function("ComputeGradientsOn", &vtkRectilinearSynchronizedTemplates::ComputeGradientsOn)
    .function("ComputeGradientsOff", &vtkRectilinearSynchronizedTemplates::ComputeGradientsOff)
    .function("SetComputeScalars", &vtkRectilinearSynchronizedTemplates::SetComputeScalars)
    .function("GetComputeScalars", &vtkRectilinearSynchronizedTemplates::GetComputeScalars)
    .function("ComputeScalarsOn", &vtkRectilinearSynchronizedTemplates::ComputeScalarsOn)
    .function("ComputeScalarsOff", &vtkRectilinearSynchronizedTemplates::ComputeScalarsOff)
    .function("SetValue", &vtkRectilinearSynchronizedTemplates::SetValue)
    .function("GetValue", &vtkRectilinearSynchronizedTemplates::GetValue)
    .function("GetValues", emscripten::select_overload<std::uintptr_t(vtkRectilinearSynchronizedTemplates&)>([](vtkRectilinearSynchronizedTemplates& self) -> std::uintptr_t { return reinterpret_cast<std::uintptr_t>(self.GetValues()); }))
    .function("GetValues", emscripten::select_overload<void(vtkRectilinearSynchronizedTemplates&, std::uintptr_t)>([](vtkRectilinearSynchronizedTemplates& self, std::uintptr_t arg_0) -> void { return self.GetValues(reinterpret_cast<double*>(arg_0 * sizeof(double))); }))
    .function("SetNumberOfContours", &vtkRectilinearSynchronizedTemplates::SetNumberOfContours)
    .function("GetNumberOfContours", &vtkRectilinearSynchronizedTemplates::GetNumberOfContours)
    .function("GenerateValues", emscripten::select_overload<void(vtkRectilinearSynchronizedTemplates&, int, double, double)>([](vtkRectilinearSynchronizedTemplates& self, int arg_0, double arg_1, double arg_2) -> void { return self.GenerateValues( arg_0, arg_1, arg_2); }))
    .function("SetArrayComponent", &vtkRectilinearSynchronizedTemplates::SetArrayComponent)
    .function("GetArrayComponent", &vtkRectilinearSynchronizedTemplates::GetArrayComponent)
    .function("SetGenerateTriangles", &vtkRectilinearSynchronizedTemplates::SetGenerateTriangles)
    .function("GetGenerateTriangles", &vtkRectilinearSynchronizedTemplates::GetGenerateTriangles)
    .function("GenerateTrianglesOn", &vtkRectilinearSynchronizedTemplates::GenerateTrianglesOn)
    .function("GenerateTrianglesOff", &vtkRectilinearSynchronizedTemplates::GenerateTrianglesOff);
}
