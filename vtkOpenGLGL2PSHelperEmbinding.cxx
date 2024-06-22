// JavaScript wrapper for vtkOpenGLGL2PSHelper with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkRenderingOpenGL2.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkRenderingOpenGL2.js/vtkOpenGLGL2PSHelperEmbinding.cxx \
 /home/jmh/github/vtk/Rendering/OpenGL2/vtkOpenGLGL2PSHelper.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkRenderWindow.h"
#include "vtkTransformFeedback.h"
#include "vtkRenderer.h"
#include "vtkActor.h"
#include "vtkTextProperty.h"
#include "vtkPath.h"
#include "vtkMatrix4x4.h"
#include "vtkImageData.h"
#include "vtkOpenGLGL2PSHelper.h"

EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLGL2PSHelper_class_enums) {
}
template<> void emscripten::internal::raw_destructor<vtkOpenGLGL2PSHelper>(vtkOpenGLGL2PSHelper * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkOpenGLGL2PSHelper_class) {
  using State=vtkOpenGLGL2PSHelper::State;
  emscripten::class_<vtkOpenGLGL2PSHelper, emscripten::base<vtkObject>>("vtkOpenGLGL2PSHelper")
    .smart_ptr<vtkSmartPointer<vtkOpenGLGL2PSHelper>>("vtkSmartPointer<vtkOpenGLGL2PSHelper>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkOpenGLGL2PSHelper>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGL2PSHelper::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkOpenGLGL2PSHelper& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkOpenGLGL2PSHelper::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkOpenGLGL2PSHelper::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkOpenGLGL2PSHelper::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkOpenGLGL2PSHelper& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .class_function("GetInstance", &vtkOpenGLGL2PSHelper::GetInstance, emscripten::allow_raw_pointers())
    .class_function("SetInstance", &vtkOpenGLGL2PSHelper::SetInstance, emscripten::allow_raw_pointers())
    .function("GetRenderWindow", &vtkOpenGLGL2PSHelper::GetRenderWindow, emscripten::allow_raw_pointers())
    .function("GetActiveState", &vtkOpenGLGL2PSHelper::GetActiveState)
    .function("SetPointSize", &vtkOpenGLGL2PSHelper::SetPointSize)
    .function("GetPointSize", &vtkOpenGLGL2PSHelper::GetPointSize)
    .function("SetLineWidth", &vtkOpenGLGL2PSHelper::SetLineWidth)
    .function("GetLineWidth", &vtkOpenGLGL2PSHelper::GetLineWidth)
    .function("SetLineStipple", &vtkOpenGLGL2PSHelper::SetLineStipple)
    .function("GetLineStipple", &vtkOpenGLGL2PSHelper::GetLineStipple);
}
EMSCRIPTEN_BINDINGS(vtkRenderingOpenGL2_vtkOpenGLGL2PSHelper_0_2_constants) {
    typedef vtkOpenGLGL2PSHelper::State cxx_enum_type;

  const struct { const char *name; cxx_enum_type value; }
    constants[3] = {
      { "vtkOpenGLGL2PSHelper_State_Inactive", vtkOpenGLGL2PSHelper::Inactive },
      { "vtkOpenGLGL2PSHelper_State_Background", vtkOpenGLGL2PSHelper::Background },
      { "vtkOpenGLGL2PSHelper_State_Capture", vtkOpenGLGL2PSHelper::Capture },
  };
  for (int c = 0; c < 3; c++)
  {
    emscripten::constant(constants[c].name, static_cast<int>(constants[c].value));
  }
}
