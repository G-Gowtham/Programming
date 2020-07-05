def fn():
    n = int(input().strip())
    tmp = list(map(int,input().strip().split()))
    dp = [[0]*(n) for i in range(n)]
    a = list(dp)
    print(a) 
    for i in range(n):
        for j in range(n):
            #print(tmp[(i*n)+j])
            a[i][j] = tmp[(i*n)+j]
    
    for i in range(n):
        for j in range(n):
            if i == 0:
                dp[i][j] = a[i][j]
            else:
                n2 = a[i-1][j]
                n3 = a[i-1][j]
                if j != 0:
                    n2 = a[i-1][j-1]
                if j != n-1:
                    n3 = a[i-1][j+1]

                #print(i,j)
                dp[i][j] = max(a[i-1][j],n2,n3)+a[i][j]
    maxi = 0
    for i in range(n):
        if dp[n-1][i] > maxi:
            maxi = dp[n-1][i]
    print(maxi)

for _ in range(int(input().strip())):
    fn()