def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    b = []
    for i in range(len(a)):
        if a[i] != 0:
            b.append(a[i])
    #print(b)
    for i in range(len(a)):
        if i > len(b)-1:
            print("0",end = ' ')
        else:
            print(b[i],end = ' ')
    print()
for _ in range(int(input().strip())):
    fn()