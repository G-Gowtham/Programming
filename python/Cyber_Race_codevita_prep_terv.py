def fn():
    n = int(input().strip())
    start = list(map(int,input().strip().split()))
    end =  list(map(int,input().strip().split()))
    count = 0


    for i in range(n):
        flag = 0
        j = i
        tmp1 = start[i]

        while(start[j] != end[i]):
            flag = 1
            j += 1
        
        start.insert(i,start.pop(j))

        if(flag):
            count += 1 

    
    print(count)
   
fn()