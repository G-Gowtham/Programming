def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    for i in range(0,n-1,2):
        #print(i,i+1)
        a[i],a[i+1] = a[i+1],a[i]

    print(*a)
for _ in range(int(input().strip())):
    fn()