def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    a.sort()
    count = 0
    for i in a:
        if k - i < 0:
            break
        else:
            count += 1
            k -= i
    print(count)

for _ in range(int(input().strip())):
    fn()