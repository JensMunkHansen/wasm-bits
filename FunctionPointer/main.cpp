#include <emscripten.h>
#include <emscripten/bind.h>
#include <iostream>
#include <string>

#if 0
class_<std::function<std::string(std::string)>>("StringFunctorString")
        .constructor<>()
        .function("opcall", &std::function<std::string(std::string)>::operator())
        ;




#endif

static int runCallback(emscripten::val arg) {
  //  int fp = emscripten::val::module_property("addFunction")(arg, std::string("vi")).as<int>();
  int fp = emscripten::val::module_property("addFunction")(arg, std::string("vi")).as<int>();
  std::cout << "fp: " << fp << std::endl;
  void (*f)(int) = reinterpret_cast<void (*)(int)>(fp);
  f(7);
  std::cout << "ok" << std::endl;
  return 0;
}

#if 0
EMSCRIPTEN_DECLARE_VAL_TYPE(CallbackType);

int function_with_callback_param(CallbackType ct) {
    ct(val("hello"));
    return 0;
}

EMSCRIPTEN_BINDINGS(custom_val) {
  emscripten::function("function_with_callback_param", &function_with_callback_param);
  emscripten::register_type<CallbackType>("(message: string) => void");
}
#endif

EMSCRIPTEN_BINDINGS(fptr_bindings) {
    emscripten::function("runCallback", &runCallback);
}
