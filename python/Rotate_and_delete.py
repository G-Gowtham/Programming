def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    
    if(n==1):
        print(a[0])
    elif(n&1):
        print(a[((n+1)//4)+1])
    else:
        if(n%4 == 0):
            print(a[(n//4)])
        else:
            print(a[(n//4)+1])

for _ in range(int(input().strip())):
    fn()
