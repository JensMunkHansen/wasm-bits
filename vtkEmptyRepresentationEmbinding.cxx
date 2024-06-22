// JavaScript wrapper for vtkEmptyRepresentation with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkViewsCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkViewsCore.js/vtkEmptyRepresentationEmbinding.cxx \
 /home/jmh/github/vtk/Views/Core/vtkEmptyRepresentation.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAlgorithmOutput.h"
#include "vtkEmptyRepresentation.h"

template<> void emscripten::internal::raw_destructor<vtkEmptyRepresentation>(vtkEmptyRepresentation * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkEmptyRepresentation_class) {
  emscripten::class_<vtkEmptyRepresentation, emscripten::base<vtkDataRepresentation>>("vtkEmptyRepresentation")
    .smart_ptr<vtkSmartPointer<vtkEmptyRepresentation>>("vtkSmartPointer<vtkEmptyRepresentation>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkEmptyRepresentation>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEmptyRepresentation::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkEmptyRepresentation& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkEmptyRepresentation::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkEmptyRepresentation::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkEmptyRepresentation::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkEmptyRepresentation& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("GetInternalAnnotationOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkEmptyRepresentation&)>([](vtkEmptyRepresentation& self) -> vtkAlgorithmOutput* { return self.GetInternalAnnotationOutputPort(); }), emscripten::allow_raw_pointers())
    .function("GetInternalAnnotationOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkEmptyRepresentation&, int)>([](vtkEmptyRepresentation& self, int arg_0) -> vtkAlgorithmOutput* { return self.GetInternalAnnotationOutputPort( arg_0); }), emscripten::allow_raw_pointers())
    .function("GetInternalAnnotationOutputPort", emscripten::select_overload<vtkAlgorithmOutput*(vtkEmptyRepresentation&, int, int)>([](vtkEmptyRepresentation& self, int arg_0, int arg_1) -> vtkAlgorithmOutput* { return self.GetInternalAnnotationOutputPort( arg_0, arg_1); }), emscripten::allow_raw_pointers());
}
