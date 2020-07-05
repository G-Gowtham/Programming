
def mini(a,skip):
    small = float('inf')
    for i in range(3):
        if(i == skip):
            continue
        if(a[i]<small):
            small = a[i]
    return small

def fn():
    n = int(input().strip())

    a = []

    for i in range(n):
        a.append(list(map(int,input().strip().split())))
    
    dp = [[0]*3 for i in range(n)]

    print(a)

    dp[0][0] = a[0][0]
    dp[0][1] = a[0][1]
    dp[0][2] = a[0][2]

    for i in range(1,n):
        for j in range(3):
            dp[i][j] = mini(dp[i-1],j)+a[i][j]

    small = float('inf')

    for i in range(3):
        if(dp[n-1][i] < small):
            small = dp[n-1][i]
    
    return small

for _ in range(int(input().strip())):
    print(fn())
