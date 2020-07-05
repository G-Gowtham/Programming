def fn():
    s1,s2,s3 = input().strip().split()
    
    n1 = len(s1)
    n3 = len(s3)
    n2 = len(s2)

    if(n1+n2!=n3):
        return 0

    dp = [[0]*(n1+1) for i in range((n2+1))]
    dp[0][0] = 1

    for i in range(1,n1+1):
        if(s3[i-1]==s1[i-1]):
            dp[0][i] = dp[0][i-1]

    for i in range(1,n2+1):
        if(s3[i-1]==s2[i-1]):
            dp[i][0] = dp[i-1][0]

    for i in range(1,n2+1):
        for j in range(1,n1+1):
            if(s1[j-1] == s3[i+j-1] and s2[i-1] == s3[i+j-1]):
                dp[i][j] = max(dp[i][j-1],dp[i-1][j])
            elif(s2[i-1] == s3[i+j-1]):
                dp[i][j] = dp[i-1][j]
            elif(s1[j-1] == s3[i+j-1]):
                dp[i][j] = dp[i][j-1]
            
    
    print(dp)
    return dp[n2][n1]

for _ in range(int(input().strip())):
    print(fn())