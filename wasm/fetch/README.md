# Demo page
https://raijp.github.io/wasm/fetch/dist/ or  http://localhost/raijp.github.io/wasm/fetch/dist/

# Run:
```
cd raijp.github.io/wasm/fetch/
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' -sFETCH index.c -o dist/index.html
```
```
cat << EOF > dist/myfile.dat
Hellow there!
This is content of myfile.dat
EOF
```
