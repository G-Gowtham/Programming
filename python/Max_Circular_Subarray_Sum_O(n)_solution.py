
def kadane(a,n):
    l_max = a[0]
    k_max = a[0]

    for i in range(1,n):
        l_max = max(a[i],l_max+a[i])
        k_max = max(k_max,l_max)

    return k_max

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    neg = 0

    k_max = kadane(a,n)
    t_sum = 0

    for i in range(n):
        if(a[i] < 0):
            neg += 1
        t_sum += a[i]
        a[i] = -a[i]

    if(neg == n):
        return k_max

    c_max = t_sum + kadane(a,n)

    return(max(c_max,k_max))
    
    
for _ in range(int(input().strip())):
    print(fn())
