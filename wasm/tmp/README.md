# Demo page
https://raijp.github.io/wasm/tmp/dist/demo-cpp.html or http://localhost/raijp.github.io/wasm/tmp/dist/demo-cpp.html

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
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' demo-cpp.cc -o dist/demo-cpp.html
```
