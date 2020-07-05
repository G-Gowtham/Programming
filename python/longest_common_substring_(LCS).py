def fn():
    n,m = map(int,input().strip().split())
    s1 = input().strip()
    s2 = input().strip()
    dp = [[0]*(m+1) for i in range(n+1)]
    for i in range(1,n+1):
        for j in range(1,m+1):
            if s1[i-1] == s2[j-1]:
                dp[i][j] = 1 + dp[i-1][j-1]
    #print(dp)

    maxi = 0
    for i in range(1,n+1):
        for j in range(1,m+1):
            maxi = max(maxi,dp[i][j])
    print(maxi)

for _ in range(int(input().strip())):
    fn()