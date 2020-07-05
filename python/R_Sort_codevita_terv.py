def fn():
    n = int(input().strip())
    a = []

    for _ in range(n):
        a.append(list(map(int,input().strip().split())))
    
    for i in range(n):
        a[i].sort()
    
    for i in range(n):
        print(*a[i])

    #print(a)

fn()