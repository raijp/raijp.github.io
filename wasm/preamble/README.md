# Demo page
https://raijp.github.io/wasm/tmp/dist/ or http://localhost/raijp.github.io/wasm/tmp/dist/

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
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' index.c -o index.html
```
