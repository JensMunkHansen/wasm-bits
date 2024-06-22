// Teaches emscripten how to delete vtkObject derived instances.
#define vtkAddDestructor(cname)                                                \
  template <> void emscripten::internal::raw_destructor<cname>(cname * ptr) {  \
    ptr->Delete();                                                             \
  }
