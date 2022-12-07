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
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' \
  index.c -o dist/index.html \
  -sEXPORTED_RUNTIME_METHODS=ccall,cwrap,getValue,setValue,UTF8ToString,stringToUTF8 \
  -sEXPORTED_FUNCTIONS=_main,_test01,_test02
```
# Copy and paste below into devtools
```
Module.setValue(0, 1111, 'i32');
Module.ccall('test01', 'number', ['number'], [0])
Module.getValue(0, 1111, 'i32');
```
Module.setValue(0, 1111, 'i32');
Module.setValue(4, 2222, 'i32');
Module.ccall('test02', 'number', ['number', 'number'], [0, 4])
```
```
```
Module.UTF8ToString(1);
Module.stringToUTF8("abcdefghijklmn", 4, 20);
Module.UTF8ToString(4);
```
