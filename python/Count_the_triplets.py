def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    a.sort()
    count = 0

    for k in range(n-2,0,-1):
        key = a[k+1]
        j = k
        i = 0
        while(True):
            if(i>=j):
                break
            if(a[i]+a[j]==key):
                count += 1
                i += 1
                j -= 1
            elif(a[i]+a[j]<key):
                i += 1
            else:
                j -= 1
    
    if(count != 0):
        print(count)
    else:
        print(-1)
        
for  _ in range(int(input().strip())):
    fn()