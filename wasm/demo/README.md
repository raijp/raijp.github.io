```
git clone https://github.com/raijp/raijp.github.io.git && cd raijp.github.io/wasm/demo

docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='.' demo-cpp.cc -o demo-cpp.html
```
<br>Reference:
<br>1. https://developer.chrome.com/blog/wasm-debugging-2020/
<br>2. https://memory-inspector.glitch.me/demo-cpp.html
<br>3. https://www.youtube.com/watch?v=VBMHswhun-s&list=WL&index=26&t=459s
```
https://raijp.github.io/wasm/demo/demo-cpp.html
```
