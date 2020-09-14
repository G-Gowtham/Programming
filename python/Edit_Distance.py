def fn():
    p,q = map(int,input().strip().split())
    s1,s2 = input().strip().split()
    dp = [[0]*(q+1) for i in range(p+1)]
    for i in range(1,p+1):
        dp[i][0] = i

    for i in range(1,q+1):
        dp[0][i] = i

    for i in range(1,p+1):
        for j in range(1,q+1):
            if(s1[i-1] == s2[j-1]):
                dp[i][j] = min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1])
            else:
                dp[i][j] = min(dp[i][j-1],dp[i-1][j],dp[i-1][j-1])+1

    #print(dp)
    print(dp[p][q])

for _ in range(int(input().strip())):
    fn()
