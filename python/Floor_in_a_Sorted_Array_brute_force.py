def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))



    for i in range(n-1,-1,-1):
        if a[i]<=k:
            return i
    return -1

for  _ in range(int(input().strip())):
    print(fn())