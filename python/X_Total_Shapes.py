def fn():
    n,m = map(int,input().strip().split())
    a = list(input().strip().split())
    dp = [[0]*m for i in range(n)]
    count = 1
    error = 0

    for i in range(n):
        for j in range(m):
            if a[i][j] == 'X' :
                if((j>0 and dp[i][j-1] != 0) and (i>0 and dp[i-1][j] != 0)):
                    if(dp[i][j-1] != dp[i-1][j] != 0):
                        error += 1
                        index = j-1
                        while(index != -1):
                            if(dp[i][index] == 0):
                                break
                            dp[i][index] = dp[i-1][j]
                            index -= 1
                            
                if(j>0 and dp[i][j-1] != 0):
                    dp[i][j] = dp[i][j-1]
                elif(i>0 and dp[i-1][j] != 0):
                    dp[i][j] = dp[i-1][j]
                else:
                    dp[i][j] = count;
                    count += 1
            else:
                dp[i][j] = 0

    #print(dp)
    print(count-error-1)


for _ in range(int(input().strip())):
    fn()