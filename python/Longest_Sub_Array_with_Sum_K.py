def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))

    maxi = 0
    d = {}
    s = 0

    for i in range(n):
        s += a[i]
        if(s==k):
            maxi = i+1
        
        if((s-k) in d):
            maxi = max(maxi,i-d[(s-k)])

        if s not in d:
            d[s] = i

    #print(d)
    print(maxi)



for _ in range(int(input().strip())):
    fn()