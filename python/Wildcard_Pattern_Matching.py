def fn():
    pat = input().strip()
    s = input().strip()

    if (s == "" and (pat == "*" or pat == "")):
        return 1
    if (pat == "" and s != ""):
        return 0

    tmp = pat[0]
    for i in range(1,len(pat)):
        if(pat[i] == '*' and tmp[len(tmp)-1] == '*'):
            continue
        else:
            tmp += pat[i]

    pat = tmp

    #print(pat)

    dp = [[0]*(len(pat)+1) for i in range(len(s)+1)]
    dp[0][0] = 1

    for i in range(1,len(pat)+1):
        if pat[i-1] == '*':
            dp[0][i] = dp[i-1]


    for i in range(1,len(s)+1):
        for j in range(1,len(pat)+1):
            if(pat[j-1]=='*'):
                dp[i][j] = dp[i-1][j] or dp[i][j-1]
            elif(pat[j-1] == '?' or pat[j-1] == s[i-1] ):
                dp[i][j] = dp[i-1][j-1]
            else:
                dp[i][j] = 0
    
    return dp[len(s)][len(pat)]
    print(dp)
for _ in range(int(input().strip())):
    print(fn())