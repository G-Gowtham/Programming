def fn():
    n = int(input().strip())
    w = int(input().strip()) 
    val = list(map(int,input().strip().split()))
    wei = list(map(int,input().strip().split()))
    dp = [[0]*(w+1) for i in range(n+1)]
    for i in range(1,n+1):
        for j in range(1,w+1):
            if wei[i-1] <= j:
                dp[i][j] = max(val[i-1]+dp[i-1][j-wei[i-1]],dp[i-1][j])
            else:
                dp[i][j] = dp[i-1][j] 
    print(dp[n][w])

for _ in range(int(input().strip())):
    fn()
