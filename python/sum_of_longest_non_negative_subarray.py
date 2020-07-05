#a = [1,2,3] -2 -4 -5 0 -1
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    l_sum = 0
    start = 0
    flag = 0
    g_sum = 0
    tmp_start = 0
    for i in range(len(a)):
        if a[i] < 0:
            if l_sum >= g_sum:
                g_sum = l_sum
                start = tmp_start
            lsum = 0
            flag = 1     
        elif flag == 1:
            tmp_start = i
            flag = 0
            l_sum = a[i]
        else:
            l_sum += a[i]
        if i == len(a)-1:
            if l_sum > g_sum:
                g_sum = l_sum
                start = tmp_start

    for i in range(start,len(a)):
        if a[i] < 0:
            break
        else:
            print(a[i],"",end = '')
    print()

for _ in range(int(input().strip())):
    fn()