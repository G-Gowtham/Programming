def fn():
    a = ['7','2','3','5']
    n = int(input().strip())
    ans = ""

    while n:
        ans = a[n%4] + ans
        if(n%4 == 0):
            n= n//4-1
        else:
            n//=4
    
    print(ans)

fn()