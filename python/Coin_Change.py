
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    val = int(input().strip())
    
    #a.sort()
    
    dp = [[0]*(val+1) for i in range(n+1)]

    for i in range(1,n+1):
        dp[i][0] = 1

    for i in range(1,n+1):
        for j in range(1,val+1):
            if(a[i-1]>j):
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = dp[i-1][j] + dp[i][j-a[i-1]]
    print(dp)
    

for _ in range(int(input().strip())):
    fn()
