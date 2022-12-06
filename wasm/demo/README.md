# Demo(Memory inspect) page
https://raijp.github.io/wasm/demo/dist/demo-cpp.html

# Compilation:
```
cd raijp.github.io/wasm/demo
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' demo-cpp.cc -o dist/demo-cpp.html
```
# Reference:
1. https://developer.chrome.com/blog/wasm-debugging-2020/
2. https://memory-inspector.glitch.me/demo-cpp.html
3. https://www.youtube.com/watch?v=VBMHswhun-s&list=WL&index=26&t=459s
