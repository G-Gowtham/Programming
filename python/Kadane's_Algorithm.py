def fn():
    a = list(map(int,input().strip().split()))
    g_sum = a[0]
    l_sum = a[0]
    for i in range(1,len(a)):
        l_sum = max(a[i],l_sum+a[i])
        g_sum = max(g_sum,l_sum)
    print(g_sum)
    
n = int(input().strip())
for i in range(n):
    x = int(input())
    fn()