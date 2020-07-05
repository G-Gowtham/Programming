def fn():
    index = 0
    count = 1
    loc_index = 0 
    x = int(input())
    a = list(map(int,input().strip().split()))
    n = len(a)
    n = int(n**(1/2))
    for i in range(n+(n-1)):
        if i >= n:          
            index += n 
            loc_index = index
            count -= 1
            for j in range(count):
                print(a[loc_index],"",end = '')
                loc_index += n-1
            
        else:           
            loc_index = index
            for j in range(count):
                print(a[loc_index],"",end = '')
                loc_index += n-1
            if index != n-1:
                index += 1
                count += 1
    print()
fn()