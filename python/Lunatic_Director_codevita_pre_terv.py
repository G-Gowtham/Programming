def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
	
    sumi = sum(a)
    x = sumi//2
    flag = 0

    for i in range(n):
        if a[i]>x:
            flag = 1
            break

    if(flag or sumi&1):
        print("Die")
    else:
        print("Live")
       
    

fn()