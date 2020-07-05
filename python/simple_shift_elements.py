def fn():
    n= int(input().strip())
    a = list(map(int,input().strip().split()))
    tmp = a[len(a)-1]
    for i in range(len(a)-1,-1,-1):
        a[i] = a[i-1]
    a[0] = tmp
    for i in range(len(a)):
        print(a[i],"",end = '')
    print()
for _ in range(int(input())):
    fn()
