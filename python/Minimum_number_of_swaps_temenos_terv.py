def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    count = 0

    for i in range(n):
        while i+1 != a[i]:
            count += 1
            x = a[i]
            a[i] = a[x-1]
            a[x-1] = x  
    
    print(count)
fn()