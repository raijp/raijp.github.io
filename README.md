# Demo page :
https://raijp.github.io or http://localhost/raijp.github.io

# Run:
```
git clone https://github.com/raijp/raijp.github.io.git
```
```
cd raijp.github.io
```
```
docker run -d \
  -p 80:80 \
  --restart unless-stopped \
  --log-opt max-size=10m \
  --log-opt max-file=3 \
  -v $(pwd):/usr/share/nginx/html/raijp.github.io \
  nginx
```
# libgd
```
cd raijp.github.io
```
```
docker run -dit \
  --name raijp-libdg \
  --restart unless-stopped \
  --log-opt max-size=10m \
  --log-opt max-file=3 \
  -v $(pwd):/root/raijp.github.io \
  raijp/libdg
```
```
# How to use
docker exec -it raijp-libdg /bin/bash
clang /root/libgd-2.3.3/examples/arc.c /usr/local/lib/libgd.so -o output.o && ./output.o
```
