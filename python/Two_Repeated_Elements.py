def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    dp = [0]*(n+3);
    count = 0
    ans = []
    for i in range(len(a)):
        dp[a[i]] += 1;
        if(count == 2):
            break;
        if(a[i]<n+1 and dp[a[i]] == 2):
            ans.append(a[i]);
            count += 1;

    print(*ans)
    
for _ in range(int(input().strip())):
    fn()