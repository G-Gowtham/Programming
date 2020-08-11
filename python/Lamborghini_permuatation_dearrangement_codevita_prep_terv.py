mod = 1000000007

def fn():
    n = int(input().strip())
    a = [1,0]

    for i in range(2,n+1):
        a.append(((i-1)*(a[0]+a[1]))%mod)
        a.pop(0)
    
    print(a[1])


fn()
