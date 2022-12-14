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
  index.c -o dist/index.js \
  -sEXPORTED_RUNTIME_METHODS=cwrap
```
```
cat << EOF > dist/index.html
<script src="./index.js"></script>
EOF
```

# Copy and paste below into devtools
```
(() => {
  const _ = Module.cwrap('test01', 'number', ['number']);
  console.log(_(1));
})();
```
```
(() => {
  const _ = Module.cwrap('test02', 'number', ['number', 'number']);
  console.log(_(1, 2));
})();
```
```
(() => {
  const _ = Module.cwrap('test03', 'string', []);
  console.log(_());
})();
```
```
(() => {
  const _ = Module.cwrap('test04', 'string', ['string', 'string']);
  console.log(_('a-string', '100'));
})();
```
