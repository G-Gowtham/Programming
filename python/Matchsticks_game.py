def fn():
    n = int(input().strip())
    ans = n % 5
    if ans == 0:
        print(-1)
    else:
        print(ans)

for _ in range(int(input().strip())):
    fn()