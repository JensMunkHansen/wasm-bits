// JavaScript wrapper for vtkPicker with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkRenderingCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingCore.js/vtkPickerEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/Core/vtkPicker.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkAbstractMapper3D.h"
#include "vtkDataSet.h"
#include "vtkCompositeDataSet.h"
#include "vtkProp3DCollection.h"
#include "vtkActorCollection.h"
#include "vtkPoints.h"
#include "vtkRenderer.h"
#include "vtkPicker.h"

template<> void emscripten::internal::raw_destructor<vtkPicker>(vtkPicker * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPicker_class) {
  emscripten::class_<vtkPicker, emscripten::base<vtkAbstractPropPicker>>("vtkPicker")
    .smart_ptr<vtkSmartPointer<vtkPicker>>("vtkSmartPointer<vtkPicker>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPicker>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPicker::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPicker& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPicker::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPicker::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPicker::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPicker& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetTolerance", &vtkPicker::SetTolerance)
    .function("GetTolerance", &vtkPicker::GetTolerance)
    .function("GetMapper", &vtkPicker::GetMapper, emscripten::allow_raw_pointers())
    .function("GetDataSet", &vtkPicker::GetDataSet, emscripten::allow_raw_pointers())
    .function("GetCompositeDataSet", &vtkPicker::GetCompositeDataSet, emscripten::allow_raw_pointers())
    .function("GetFlatBlockIndex", &vtkPicker::GetFlatBlockIndex)
    .function("GetProp3Ds", &vtkPicker::GetProp3Ds, emscripten::allow_raw_pointers())
    .function("GetActors", &vtkPicker::GetActors, emscripten::allow_raw_pointers())
    .function("GetPickedPositions", &vtkPicker::GetPickedPositions, emscripten::allow_raw_pointers())
    .function("Pick", emscripten::select_overload<int(vtkPicker&, double, double, double, vtkRenderer*)>([](vtkPicker& self, double arg_0, double arg_1, double arg_2, vtkRenderer* arg_3) -> int { return self.Pick( arg_0, arg_1, arg_2, arg_3); }), emscripten::allow_raw_pointers());
}
