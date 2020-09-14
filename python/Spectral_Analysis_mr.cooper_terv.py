def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    a.sort(reverse = True)
    print(a[k-1])

for _ in range(int(input().strip())):       
    fn()