def fn():
    n = int(input().strip())
    tmp = list(map(int,input().strip().split()))
    m = [[0]*n for i in range(n)]
    count = 0
    for i in range(n):
        for j in range(n):
            m[i][j] = tmp[count]
            count += 1
    
    a = 0
    b = n - 1

    while a != b:
        if m[a][b]:
            a += 1
        else:
            b -= 1
    
    row = a

    for i in range(n):
        if m[row][i] != 0:
            return -1
        if i != row:
            if m[i][row] == 0:
                return -1
    return row







for _ in range(int(input().strip())):
    if(fn()):
        print("1")
    else:
        print("-1")


