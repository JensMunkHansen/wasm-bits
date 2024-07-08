#include <iostream>
#include "emscripten/bind.h"


// Signature like VTK
class Object
{
public:
  static Object* New();
  void Delete() {
    std::cout << __PRETTY_FUNCTION__ << std::endl;
  }

  virtual const char* GetClassName() {
    return "Object";
  }  
protected:
  Object() = default;
  virtual ~Object() = default;
private:
  Object(const Object&) = delete;
  void operator=(const Object&) = delete;
};

Object* Object::New() {
  return new Object();
}


template <> void emscripten::internal::raw_destructor<Object>(Object *ptr) {
  ptr->Delete();
}

class ObjectWrapper : public emscripten::wrapper<Object> {
public:
  EMSCRIPTEN_WRAPPER(ObjectWrapper);
  const std::string GetClassName() const {
    return call<std::string>("GetClassName");
  }
};

EMSCRIPTEN_BINDINGS(Object) {
  // New class
  emscripten::class_<Object>("Object")
    .allow_subclass<ObjectWrapper>("ObjectWrapper")
    .constructor(&Object::New)
    .function("Delete", &Object::Delete)
    .function("GetClassName", emscripten::optional_override([](Object& self) -> std::string {
      return self.Object::GetClassName();
    }), emscripten::allow_raw_pointers());
}
