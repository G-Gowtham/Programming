def fn():
    x,y = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    b = list(map(int,input().strip().split()))
    n = len(a)
    m = len(b)
    index1 = 0
    index2 = 0
    remain = 0
    for i in range(n+m):
        if index1 == n:
            remain = 1
            break
        if index2 == m:
            remain = 2
            break
        if a[index1] < b[index2]:
            print(a[index1],"",end = '')
            index1 += 1
        else:
            print(b[index2],"",end = '')
            index2 += 1
    if remain == 1:
        while index2 != 3:
            print(b[index2],"",end = '')
            index2 += 1
    elif remain == 2:
        while index1 != n:
            print(a[index1],"",end = '')
            index1 += 1
    print()
for _ in range(int(input().strip())):
    fn()

