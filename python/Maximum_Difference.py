def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    max_diff = a[1]-a[0]
    mini = a[0]

    for i in range(1,n):
        if a[i]-mini > max_diff:
            max_diff = a[i]-mini
        if a[i] < mini:
            mini = a[i]

    print(max_diff) 
    
for _ in range(int(input().strip())):
    fn()