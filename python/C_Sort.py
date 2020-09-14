def fn():
    n = int(input().strip())
    a = []

    for _ in range(n):
        a.append(list(map(int,input().strip().split())))
    
    for i in range(n):
        for j in range(i):
            a[i][j],a[j][i] = a[j][i],a[i][j] 

    for i in range(n):
        a[i].sort()

    for i in range(n):
        for j in range(i):
            a[i][j],a[j][i] = a[j][i],a[i][j] 
    
    for i in range(n):
        print(*a[i])

fn()