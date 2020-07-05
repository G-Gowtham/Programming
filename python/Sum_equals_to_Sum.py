def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    flag = 0
    d = {}
    for i in range(n-1):
        for j in range(i+1,n):
            if a[i]+a[j] not in d:
                d[a[i]+a[j]] = 1
            else:
                flag = 1;
                break;

    if flag == 1:
        print(1)
    else:
        print(0)


            


for _ in range(int(input().strip())):
    fn()