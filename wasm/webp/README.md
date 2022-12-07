# Demo(Memory inspect) page
https://raijp.github.io/wasm/webp/dist/ or http://localhost/raijp.github.io/wasm/webp/dist/

# Run:
```
cd raijp.github.io/wasm/webp
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' \
  -sEXPORTED_RUNTIME_METHODS=cwrap \
  -I libwebp \
  index.c \
  libwebp/src/{dec,dsp,demux,enc,mux,utils}/*.c \
  -o dist/index.html
```
