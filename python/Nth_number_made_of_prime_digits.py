mod = 1000000007

def fn():
    n = int(input().strip())
    prime = ['7','2','3','5']
    if(n<=4):
        return prime[n%4]
    
    ans = ""
    
    while(n):
        #print(n,n%4)
        ans = prime[n%4] + ans

        if n%4 == 0:
            n= n-4
        n//=4

    return(ans)


for _ in range(int(input().strip())):
    print(fn())