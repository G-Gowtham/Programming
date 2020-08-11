
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    ans = [0]*n

    for i in range(n):
        count = 0
        for j in a:
            if(a[i]<j):
                count += 1
        ans[i] = count
    print(*ans)
        
fn()


