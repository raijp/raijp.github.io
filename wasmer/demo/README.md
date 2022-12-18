# Run:
```
cd raijp.github.io/wasmer/demo
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' index.c -o dist/index.wasm
```
```
docker run \
  --rm \
  -t \
  -v $(pwd):/src \
  raijp/wasmer \
  /root/.wasmer/bin/./wasmer /src/dist/index.wasm
```
