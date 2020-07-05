def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    flag = 0
    index = 0
    for i in range(n-1,0,-1):
        if(a[i-1]<a[i]):
            index = i-1
            flag = 1
            break
    if(flag == 0):
        a[::-1]
    else:
        for j in range(n-1,index,-1):
            if(a[index] < a[j]):
                a[index],a[j] = a[j],a[index]
                break
        a = a[:index+1]+a[index+1:][::-1]

    print(*a)


for _ in range(int(input().strip())):
    fn()