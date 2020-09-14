def fn():
    l,m,n = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    b = list(map(int,input().strip().split()))
    c = list(map(int,input().strip().split()))
    a1 = set(a)
    b1 = set(b)
    c1 = set(c)
    out1 = {}
    out2 = {}
    out1 = a1.intersection(b1)
    out2 = out1.intersection(c1)

    if len(out2) != 0:
        print(*sorted(out2))
    else:
        print("-1")

for _ in range(int(input().strip())):
    fn()
