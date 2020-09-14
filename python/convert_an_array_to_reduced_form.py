def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    b = sorted(a)
    out = [0 for i in range(len(a))]
    c = 0
    for i in b:
        out[a.index(i)] = c
        c += 1
    print(*out)

for _ in range(int(input().strip())):
    fn() 