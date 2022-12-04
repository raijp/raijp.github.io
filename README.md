```
docker run -d \
  -p 80:80 \
  --restart unless-stopped \
  --log-opt max-size=10m \
  --log-opt max-file=3 \
  -v $(pwd):/usr/share/nginx/html/tmp \
  nginx
```
