def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))

    d = {}
    s = 0
    
    for i in range(n):
        s += a[i]
        if(s==k):
            return 0,i
        
        if((s-k) in d):
            return d[(s-k)]+1,i 

        if s not in d:
            d[s] = i

    return -1,-1


for _ in range(int(input().strip())):
    start,end = fn()
    if(start == -1):
        print(-1)
    else:
        print(start+1,end+1)