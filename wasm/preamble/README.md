# Demo page
https://raijp.github.io/wasm/preamble/dist/ or http://localhost/raijp.github.io/wasm/preamble/dist/

# Run:
```
cd raijp.github.io/wasm/tmp/
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' index.c -o dist/index.html -sEXPORTED_RUNTIME_METHODS=ccall,cwrap -sEXPORTED_FUNCTIONS=_main,_test
```
# Copy and paste below into devtools
```
Module.ccall('test', 'number', ['number'], [10])
```
