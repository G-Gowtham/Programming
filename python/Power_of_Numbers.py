def fn():
    n = int(input().strip())
    rev = int(str(n)[::-1])

    def ans(n,power):
        if power == 0:
            return 1
        elif(power&1):
            x = ans(n,power//2)
            return (n*x*x)%1000000007
        else:
            x = ans(n,power//2)
            return (x*x)%1000000007

    print(ans(n,rev))

    
for _ in range(int(input().strip())):
    fn()