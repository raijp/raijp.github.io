# Demo(Memory inspect) page
https://raijp.github.io/wasm/tmp01/dist/ or http://localhost/raijp.github.io/wasm/tmp01/dist/

# Run:
```
cd raijp.github.io/wasm/tmp01
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' \
  -sEXPORTED_RUNTIME_METHODS=cwrap \
  index.c -o dist/index.js
```
```
cat << EOF > dist/index.html
<script src="./index.js"></script>
EOF
```

# Copy and paste below into devtools
```
(() => {
  const _ = Module.cwrap('test', 'number', ['number'], [0]);
  console.log(_());
})();
```
```
(() => {
  const _ = Module.cwrap('test01', 'string', []);
  console.log(_());
})();
```
