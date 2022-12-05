# Demo page
https://raijp.github.io/wasm/fetch/dist/test01.html

# Compilation:
```
git clone https://github.com/raijp/raijp.github.io.git && cd raijp.github.io/wasm/fetch/
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' -sFETCH test01.c -o dist/test01.html
```
