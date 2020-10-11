mod = 1000000007

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    if n<3:
        return max(a)

    dp = [0 for i in range(n)]
    dp[0],dp[1] = a[0],a[1]
    dp[2] = a[0]+a[2]

    for i in range(3,n):
        dp[i] = max(dp[i-3],dp[i-2])+a[i]
    
    return max(dp[n-1],dp[n-2])

for _ in range(int(input().strip())):
    print(fn())