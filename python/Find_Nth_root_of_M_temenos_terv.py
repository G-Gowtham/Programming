def fn():
    n,m = map(int,input().strip().split())
    ans = m**(1/n)
    
    if ans-int(ans) == 0:
        print(int(ans))
    else:
        print("%0.1f"%ans)

fn()