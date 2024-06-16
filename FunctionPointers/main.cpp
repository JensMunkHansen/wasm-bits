#include <emscripten/bind.h>
#include <emscripten/val.h>

int add(int a, int b, emscripten::val cb) {
  return cb.call<int>("call", 0, a + b);
};

EMSCRIPTEN_BINDINGS() {
  emscripten::function("add", &add);
}


#if 0
EMSCRIPTEN_BINDINGS( MyBindings ) {
	emscripten::class_<std::function<void(emscripten::val e)> >( "ListenerCallback" )
	.constructor<>()
	.function("onload", &std::function<void(emscripten::val e)>::operator() );
};

emscripten::val cb = emscripten::val( functor )[ "onload" ].call<emscripten::val>( "bind", emscripten::val(functor) );

// functor refers to a lambda function that matches the above binding
// description that you want to run in the callback. You can pass that
// to your Javascript through the val interface

helpers.call<void>( "loadAssetAsync", cb );  

// In JavaScript

function myJS(cb){
  cb({
   name:"Jane Doe",
   Age:"none"
});
}

// Your object would come back as an emscripten::val object. You would then access keys like

emscripten::val obj;

auto personName = obj["name"];
auto personAge = obj["Age"];

#endif
