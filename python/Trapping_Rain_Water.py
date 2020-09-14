def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    left = [0]*n
    right = [0]*n

    water = 0 

    left[0] = a[0]

    for i in range(1,n):
        left[i] = max(left[i-1],a[i])
    
    right[n-1] = a[n-1]


    for j in range(n-2,-1,-1):
        right[j] = max(right[j+1],a[j])

    #print(left,right)

    for i in range(1,n-1):
        water += min(left[i],right[i])-a[i]
        
    print(water)
    
for _ in range(int(input().strip())):
    fn()