# Demo page
https://raijp.github.io/wasm/fetch/dist/test01.html

# Compilation:
```
cd raijp.github.io/wasm/fetch/
```
```
docker run \
  --rm \
  -v $(pwd):/src \
  -u $(id -u):$(id -g) \
  emscripten/emsdk \
  emcc -g -s ALLOW_MEMORY_GROWTH -fdebug-compilation-dir='..' -sFETCH test01.c -o dist/test01.html
```
```
cat << EOF > dist/myfile.dat
Hellow there!
This is content of myfile.dat
EOF
```
