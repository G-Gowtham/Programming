def fn():
    n,m = map(int,input().strip().split())
    line = list(map(int,input().strip().split()))
    a = [[0]*m for i in range(n)]
    dp = [[0]*m for i in range(n)]
    for i in range(n):
        for j in range(m):
            a[i][j] = line[(i*m)+j]
            if(i == 0 or j == 0):
                dp[i][j] = a[i][j]
    
    for i in range(1,n):
        for j in range(1,m):
            if(a[i][j] == 1):
                dp[i][j] = min(dp[i-1][j],dp[i][j-1],dp[i-1][j-1])+1
    
    maxi = 0
    
    for i in range(n):
        for j in range(m):
            maxi = max(maxi,dp[i][j])
    
    print(maxi)

for _ in range(int(input().strip())):
    fn()