# Demo page
https://raijp.github.io
<br>or
<br>http://localhost/raijp.github.io

# Run
```
git clone https://github.com/raijp/raijp.github.io.git && cd raijp.github.io
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
