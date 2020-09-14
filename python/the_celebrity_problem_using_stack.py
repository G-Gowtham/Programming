def fn():
    n = int(input().strip())
    tmp = list(map(int,input().strip().split()))
    m = [[0]*n for i in range(n)]
    count = 0
    for i in range(n):
        for j in range(n):
            m[i][j] = tmp[count]
            count += 1
    stack = []

    for i in range(n):
        stack.append(i)

    while len(stack) != 1:
        a = stack.pop()
        b = stack.pop()
        if(m[a][b] == 1):
            stack.append(b)
        else:
            stack.append(a)
    
    row = stack.pop()

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


