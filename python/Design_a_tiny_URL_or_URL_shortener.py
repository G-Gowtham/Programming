def fn():
    n = int(input().strip())
    a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"
    url = ''
    while(n):
        url = a[n%62] + url
        n //=62
    print(url)

for _ in range(int(input().strip())):
    fn()