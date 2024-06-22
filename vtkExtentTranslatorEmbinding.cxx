// JavaScript wrapper for vtkExtentTranslator with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkCommonExecutionModel.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonExecutionModel.js/vtkExtentTranslatorEmbinding.cxx \
 /home/jmh/github/vtk/Common/ExecutionModel/vtkExtentTranslator.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkInformationIntegerRequestKey.h"
#include "vtkExtentTranslator.h"

EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkExtentTranslator_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkExtentTranslator>(vtkExtentTranslator * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkExtentTranslator_class) {
  using Modes=vtkExtentTranslator::Modes;
  emscripten::class_<vtkExtentTranslator, emscripten::base<vtkObject>>("vtkExtentTranslator")
    .smart_ptr<vtkSmartPointer<vtkExtentTranslator>>("vtkSmartPointer<vtkExtentTranslator>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkExtentTranslator>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtentTranslator::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkExtentTranslator& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkExtentTranslator::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkExtentTranslator::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkExtentTranslator::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkExtentTranslator& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("SetWholeExtent", emscripten::select_overload<void(vtkExtentTranslator&, int, int, int, int, int, int)>([](vtkExtentTranslator& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetWholeExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetExtent", emscripten::select_overload<void(vtkExtentTranslator&, int, int, int, int, int, int)>([](vtkExtentTranslator& self, int arg_0, int arg_1, int arg_2, int arg_3, int arg_4, int arg_5) -> void { return self.SetExtent( arg_0, arg_1, arg_2, arg_3, arg_4, arg_5); }))
    .function("SetPiece", &vtkExtentTranslator::SetPiece)
    .function("GetPiece", &vtkExtentTranslator::GetPiece)
    .function("SetNumberOfPieces", &vtkExtentTranslator::SetNumberOfPieces)
    .function("GetNumberOfPieces", &vtkExtentTranslator::GetNumberOfPieces)
    .function("SetGhostLevel", &vtkExtentTranslator::SetGhostLevel)
    .function("GetGhostLevel", &vtkExtentTranslator::GetGhostLevel)
    .function("PieceToExtent", &vtkExtentTranslator::PieceToExtent)
    .function("PieceToExtentByPoints", &vtkExtentTranslator::PieceToExtentByPoints)
    .function("PieceToExtentThreadSafe", emscripten::optional_override([](vtkExtentTranslator& self, int arg_0, int arg_1, int arg_2, std::uintptr_t arg_3, std::uintptr_t arg_4, int arg_5, int arg_6) -> int {  return self.PieceToExtentThreadSafe( arg_0, arg_1, arg_2,reinterpret_cast<int*>(arg_3 * sizeof(int)),reinterpret_cast<int*>(arg_4 * sizeof(int)), arg_5, arg_6);}))
    .function("SetSplitModeToBlock", &vtkExtentTranslator::SetSplitModeToBlock)
    .function("SetSplitModeToXSlab", &vtkExtentTranslator::SetSplitModeToXSlab)
    .function("SetSplitModeToYSlab", &vtkExtentTranslator::SetSplitModeToYSlab)
    .function("SetSplitModeToZSlab", &vtkExtentTranslator::SetSplitModeToZSlab)
    .function("GetSplitMode", &vtkExtentTranslator::GetSplitMode)
    .function("SetSplitPath", emscripten::optional_override([](vtkExtentTranslator& self, int arg_0, std::uintptr_t arg_1) -> void {  return self.SetSplitPath( arg_0,reinterpret_cast<int*>(arg_1 * sizeof(int)));}))
    .class_function("UPDATE_SPLIT_MODE", &vtkExtentTranslator::UPDATE_SPLIT_MODE, emscripten::allow_raw_pointers());
}
EMSCRIPTEN_BINDINGS(vtkCommonExecutionModel_vtkExtentTranslator_0_2_constants) {
    typedef vtkExtentTranslator::Modes cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[4] = {
      { "vtkExtentTranslator_Modes_X_SLAB_MODE", vtkExtentTranslator::X_SLAB_MODE },
      { "vtkExtentTranslator_Modes_Y_SLAB_MODE", vtkExtentTranslator::Y_SLAB_MODE },
      { "vtkExtentTranslator_Modes_Z_SLAB_MODE", vtkExtentTranslator::Z_SLAB_MODE },
      { "vtkExtentTranslator_Modes_BLOCK_MODE", vtkExtentTranslator::BLOCK_MODE },
  };
  for (int c = 0; c < 4; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
