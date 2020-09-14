def fn():
    x,y,z = map(int,input().strip().split())
    ans = 0
    while(x<y):
        x += int((z/100)*x)
        ans += 1
    print(ans)

fn()