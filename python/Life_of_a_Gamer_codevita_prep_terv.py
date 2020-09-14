def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    a = a*2

    count = 0
    maxi = float('-inf')
    #print(type(maxi))

    for i in range(2*n):
        if a[i] == 1:
            count += 1
        else:
            count = 0
        if count>maxi:
            maxi = count
    
    print(maxi%n)
    

fn()
