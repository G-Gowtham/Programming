def fn():
    x,y = map(int,input().strip().split())
    z = 1
    for i in range(2,y+1):
        z *= i
    ans = 0
    while(z%x == 0):
        ans += 1
        z//=x
    print(ans)

fn()