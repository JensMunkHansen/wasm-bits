// JavaScript wrapper for vtkPriorityQueue with embind 
//
// This file was auto-generated using :
/*
node /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/bin/vtkWrapJavaScript.js \
 @/home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkCommonCore.js.Release.args \
 -o \
 /home/jmh/github/VTKCMake/build/library/VTK-prefix/src/VTK-build/CMakeFiles/vtkCommonCore.js/vtkPriorityQueueEmbinding.cxx \
 /home/jmh/github/vtk/Common/Core/vtkPriorityQueue.h
*/
#include "vtkEmbindSmartPointerTrait.h"
#include <emscripten.h>
#include <string>
#include "vtkVariant.h"
#include "vtkObjectBase.h"
#include "vtkIndent.h"
#include "vtkPriorityQueue.h"

template<> void emscripten::internal::raw_destructor<vtkPriorityQueue>(vtkPriorityQueue * ptr){ ptr->Delete(); }
EMSCRIPTEN_BINDINGS(vtkPriorityQueue_class) {
  emscripten::class_<vtkPriorityQueue, emscripten::base<vtkObject>>("vtkPriorityQueue")
    .smart_ptr<vtkSmartPointer<vtkPriorityQueue>>("vtkSmartPointer<vtkPriorityQueue>")
    .constructor(&vtk::MakeVTKSmartPtr<vtkPriorityQueue>)
    .class_function("IsTypeOf", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPriorityQueue::IsTypeOf( arg_0.c_str());}))
    .function("IsA", emscripten::optional_override([](vtkPriorityQueue& self, const std::string & arg_0) -> int {  return self.IsA( arg_0.c_str());}))
    .class_function("SafeDownCast", &vtkPriorityQueue::SafeDownCast, emscripten::allow_raw_pointers())
    .function("NewInstance", &vtkPriorityQueue::NewInstance, emscripten::allow_raw_pointers())
    .class_function("GetNumberOfGenerationsFromBaseType", emscripten::optional_override([]( const std::string & arg_0) -> int {  return vtkPriorityQueue::GetNumberOfGenerationsFromBaseType( arg_0.c_str());}))
    .function("GetNumberOfGenerationsFromBase", emscripten::optional_override([](vtkPriorityQueue& self, const std::string & arg_0) -> int {  return self.GetNumberOfGenerationsFromBase( arg_0.c_str());}))
    .function("Allocate", &vtkPriorityQueue::Allocate)
    .function("Insert", &vtkPriorityQueue::Insert)
    .function("Pop", emscripten::select_overload<int(vtkPriorityQueue&, int)>([](vtkPriorityQueue& self, int arg_0) -> int { return self.Pop( arg_0); }))
    .function("Peek", emscripten::select_overload<int(vtkPriorityQueue&, int)>([](vtkPriorityQueue& self, int arg_0) -> int { return self.Peek( arg_0); }))
    .function("DeleteId", &vtkPriorityQueue::DeleteId)
    .function("GetPriority", &vtkPriorityQueue::GetPriority)
    .function("GetNumberOfItems", &vtkPriorityQueue::GetNumberOfItems)
    .function("Reset", &vtkPriorityQueue::Reset);
}
