def rotate(j,n,a):
    b = list(a)

    for k in range(n):
        tmp = [b[0][j],b[1][j],b[2][j]]

        for i in range(3,12):
            b[i-3][j] = a[i][j]

        b[9][j] = tmp[0]
        b[10][j] = tmp[1]
        b[11][j] = tmp[2]


    return b

def fn():
    a = []
    for i in range(12):
        a.append(list(map(int,input().strip().split())))
    s = input().strip()

    n = ""
    for i in range(len(s)-1,-1,-1):
        if(ord(s[i])-48>=0 and ord(s[i])-48<=9):
            n = s[i] +n
        else:
            x = int(n)%12
            n = ""
            if(s[i] == 'L'):
                a = rotate(0,x,a)
            elif(s[i] == 'M'):
                a = rotate(1,x,a)
            else:
                a = rotate(2,x,a)

    for i in range(12):
        print(*a[i])

fn()
