def fn():
    n = input().strip()
    a = list(n)
    flag = 0

    for i in range(len(a)-2,-1,-1):
        if(a[i]<a[i+1]):
            j = i+1
            while(j<len(a) and a[i]<a[j]):
                j += 1
            a[i],a[j-1] = a[j-1],a[i]
            a[i+1:] = sorted(a[i+1:])
            (a[i+1:]).sort()
            flag = 1
            break

    if(flag == 0):
        print('not possible')
    else:
        print(''.join(a))

for _ in range(int(input().strip())):
    fn()