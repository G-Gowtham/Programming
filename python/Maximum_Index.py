def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    l_min = [0]*n
    r_max = [0]*n
    l_min[0] = a[0]
    r_max[n-1] = a[n-1]

    for i in range(1,n):
        l_min[i] = min(a[i],l_min[i-1])

    for i in range(n-2,-1,-1):
        r_max[i] = max(a[i],r_max[i+1])

    i = j = 0
    maxi = 0

    while(i<n and j<n):
        #print(i,j)
        if(l_min[i]<=r_max[j]):
            maxi = max(maxi,j-i)
            j +=1
        else:
            i += 1

    return maxi

    

for _ in range(int(input().strip())):
    print(fn())