def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    s = n*(n+1)//2
    sum_sq = n*(n+1)*(2*n+1)//6

    for i in range(n):
        s -= a[i]
        sum_sq -= a[i]**2
    
    miss = (s + (sum_sq // s)) // 2

    rep = miss - s

    print(rep,miss)

for _ in range(int(input().strip())):
    fn()