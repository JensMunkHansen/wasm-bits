// JavaScript wrapper for vtkOpenGLMoleculeMapper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistryOpenGL2.js/vtkDomainsChemistryOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkDomainsChemistryOpenGL2.js/vtkOpenGLMoleculeMapperEmbinding.cxx \
 /home/jmh/github/vtk/Domains/ChemistryOpenGL2/vtkOpenGLMoleculeMapper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkWindow.h"
#include "vtkOpenGLSphereMapper.h"
#include "vtkHardwareSelector.h"
#include "vtkProp.h"
#include "vtkOpenGLMoleculeMapper.h"

template<> void emscripten::internal::raw_destructor<vtkOpenGLMoleculeMapper>(vtkOpenGLMoleculeMapper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLMoleculeMapper_class) {
  emscripten::class_<vtkOpenGLMoleculeMapper, emscripten::base<vtkMoleculeMapper>>("vtkOpenGLMoleculeMapper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLMoleculeMapper>>("vtkSmartPointer<vtkOpenGLMoleculeMapper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLMoleculeMapper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLMoleculeMapper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLMoleculeMapper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLMoleculeMapper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLMoleculeMapper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLMoleculeMapper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLMoleculeMapper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Render", &vtkOpenGLMoleculeMapper::Render, emscripten::allow_raw_pointers())
    .function("ReleaseGraphicsResources", &vtkOpenGLMoleculeMapper::ReleaseGraphicsResources, emscripten::allow_raw_pointers())
    .function("GetFastAtomMapper", &vtkOpenGLMoleculeMapper::GetFastAtomMapper, emscripten::allow_raw_pointers())
    .function("ProcessSelectorPixelBuffers", emscripten::optional_override([](vtkOpenGLMoleculeMapper& self, vtkHardwareSelector* arg_0, std::vector<unsigned int>& arg_1, vtkProp* arg_2) -> void {  return self.ProcessSelectorPixelBuffers( arg_0, arg_1, arg_2);}), emscripten::allow_raw_pointers())
    .function("SetMapScalars", &vtkOpenGLMoleculeMapper::SetMapScalars);
}
