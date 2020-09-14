a = [0]*101
a[0] = 1
a[1] = 2
for i in range(2,101):
    a[i] = a[i-1]+a[i-2]
def fn():
    n = int(input().strip())
    print(a[n]%((10**9)+7))

for _ in range(int(input().strip())):
    fn()
