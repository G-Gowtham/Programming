def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    a = a + a
    out = []
    

    for i in range(n):
        g_max = a[i]
        l_max = a[i]

        for j in range(i+1,i+n):
            l_max = max(l_max+a[j],a[j])
            g_max = max(g_max,l_max)

        out.append(g_max)

    print(max(out))

for _ in range(int(input().strip())):
    fn()