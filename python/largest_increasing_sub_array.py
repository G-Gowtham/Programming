def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    g_sum = 0
    l_sum = 0
    pre = a[0]
    for i in range(1,len(a)):
        if a[i] > pre:
            l_sum += pre
        else:
            l_sum += pre
            if l_sum > g_sum:
                g_sum = l_sum
            l_sum = 0
        pre = a[i]
        if i == len(a)-1:
            if l_sum > g_sum:
                g_sum = l_sum

    print(g_sum)

for _ in range(int(input().strip())):
    fn()


