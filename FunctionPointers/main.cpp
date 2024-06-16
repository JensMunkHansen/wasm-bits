#include <emscripten/bind.h>
#include <emscripten/val.h>

int add(int a, int b, emscripten::val cb) {
  return cb.call<int>("call", 0, a + b);
};

EMSCRIPTEN_BINDINGS() {
  emscripten::function("add", &add);
}
