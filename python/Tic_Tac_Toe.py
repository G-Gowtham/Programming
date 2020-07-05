def fn():
    a = list(input().strip().split())
    t = []
    count = x = o = 0
    row_valid = x_valid = o_valid = 0

    for i in range(3):
        tmp = []
        for j in range(3):
            tmp.append(a[count])
            if a[count] == 'O':
                row_valid -= 1
                o += 1
            elif a[count] == 'X':
                row_valid += 1
                x += 1
            count += 1
        if row_valid == -3:
            o_valid += 1
        if row_valid == 3:
            x_valid += 1
        
        row_valid = 0

        t.append(tmp)


    for i in range(3):
        for j in range(3):
            if t[j][i] == 'O':
                row_valid -= 1
            elif t[j][i] == 'X':
                row_valid += 1
        if row_valid == -3:
            o_valid += 1
        if row_valid == 3:
            x_valid += 1
        row_valid = 0

    j = 0
    row_valid = 0

    for i in range(3):
        if t[i][j] == 'O':
            row_valid -= 1
        elif t[i][j] == 'X':
            row_valid += 1
        j += 1
    if row_valid == -3:
        o_valid += 1
    if row_valid == 3:
        x_valid += 1

    row_valid = 0
    j = 0

    for i in range(2,-1,-1):
        if t[i][j] == 'O':
            row_valid -= 1
        elif t[i][j] == 'X':
            row_valid += 1
        j += 1
    if row_valid == -3:
        o_valid += 1
    if row_valid == 3:
        x_valid += 1

    if(x-o != 1):
        return "Invalid"
    if(x_valid < 3 and o_valid == 0):
        return "Valid";
    # if(x_valid == 0 and o_valid == 1) 
    return "Invalid"


for _ in range(int(input().strip())):
    print(fn())