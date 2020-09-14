

def fn():
    n = int(input().strip())
    a = [[" "]*(2*n+1) for i in range(2*n+1)]
    k = 1

    for i in range(2*n+1):
        for j in range(2*n+1):
            m = 2*k+1
            if(i == 0 or i == m-1):
                a[i][j] = "*"
                a[j][i] = "*"
            if(i == m-1 and j == m-1):
                k += 1

    for i in range(2*n+1):
        print(*a[i])

fn()
