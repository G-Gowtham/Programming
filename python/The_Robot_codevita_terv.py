
def rotate(a,n):
    b = [[0]*n for i in range(n)]

    if(n&1):
        x = n//2
        b[x][x] = a[x][x]

    for i in range(n):
        for j in range(n):
            if(i>j and i+j<=n-1):
                b[i][j] = a[i-1][j]
            if(i>=j and i+j>n-1):
                b[i][j] = a[i][j-1]
            if(i<j and i+j>=n-1):
                b[i][j] = a[i+1][j]
            if(i<=j and i+j<n-1):
                b[i][j] = a[i][j+1] 
    return b

def fn():
    n,r = map(int,input().strip().split())
    a = []
    for _ in range(n):
        a.append(list(map(int,input().strip().split())))
    #r = r%((n-1)*4)
    
    for i in range(r):
        a = rotate(a,n)

    for i in range(n):
        print(*a[i])

fn()

