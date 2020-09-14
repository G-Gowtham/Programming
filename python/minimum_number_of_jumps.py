def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    jumps = [0 for i in range(n)]
    jumps[0] = 0
    if n == 0 or a[0] == 0:
        return -1
    for i in range(1,n):
        jumps[i] = float('inf')
        for j in range(i):
            if a[j]+j >= i and a[j] != float('inf'):
                jumps[i] = min(a[i],a[j]+1)

    return jumps[n]

for _ in range(int(input().strip())):
    out = fn()
    if out == float('inf'):
        print("-1")
    else:
        print(out)

