def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    ans = 1
    count = 1

    for i in range(1,len(a)):
        if(a[i-1] == a[i]):
            count += 1
            ans = max(ans,count)
        else:
            count = 1
    print(ans)

fn()