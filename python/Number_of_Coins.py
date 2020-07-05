
def fn():
    val,n = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    
    
    #a.sort()
    
    dp = [[1000001]*(val+1) for i in range(n+1)]

    for i in range(1,n+1):
        dp[i][0] = 0

    for i in range(1,n+1):
        for j in range(1,val+1):
            if a[i-1]>j:
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = min(dp[i-1][j] , dp[i][j-a[i-1]]+1)

    #print(dp)

    if(dp[n][val] == 1000001):
        print(-1)
    else:
        print(dp[n][val])
    

for _ in range(int(input().strip())):
    fn()
