def fn():
    n = int(input())
    ans = 0
    x = 5

    while(n//x):
        ans += n//x
        x *= 5

    print(ans)

fn()