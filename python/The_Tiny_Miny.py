def fn():
    a,n = map(int,input().strip().split())
    ans = []
    for i in range(1,n+1):
        n = a ** i
        while(n):
            x = n % 10
            if(x != 0):
                ans.append(x)
            n = n//10
    
    ans.sort()
    
    for i in ans:
        print(i,end = "")
    print()

for _ in range(int(input().strip())):
    fn()