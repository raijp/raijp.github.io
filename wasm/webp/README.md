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
  -o dist/index.js
```
```
cat << EOF > dist/index.html
<script src="./index.js"></script>
<script>
  Module.onRuntimeInitialized = async () => {
    const api = {
      version: Module.cwrap('version', 'number', []),
    };
    console.log(api.version());
  };
</script>
EOF
```
