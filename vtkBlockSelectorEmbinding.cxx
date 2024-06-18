// JavaScript wrapper for vtkBlockSelector with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkFiltersExtraction.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkFiltersExtraction.js/vtkBlockSelectorEmbinding.cxx \
 /home/jmh/github/vtk/Filters/Extraction/vtkBlockSelector.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkSelectionNode.h"
#include "vtkDataObject.h"
#include "vtkBlockSelector.h"

template<> void emscripten::internal::raw_destructor<vtkBlockSelector>(vtkBlockSelector * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkBlockSelector_class) {
  emscripten::class_<vtkBlockSelector, emscripten::base<vtkSelector>>("vtkBlockSelector")
    .smart_ptr<vtkSmartPointer<vtkBlockSelector>>("vtkSmartPointer<vtkBlockSelector>")
    .constructor(&vtk::MakeAvtkSmartPointer<vtkBlockSelector>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlockSelector::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkBlockSelector& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkBlockSelector::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkBlockSelector::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkBlockSelector::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkBlockSelector& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Initialize", &vtkBlockSelector::Initialize, emscripten::allow_raw_pointers())
    .function("Execute", &vtkBlockSelector::Execute, emscripten::allow_raw_pointers());
}
