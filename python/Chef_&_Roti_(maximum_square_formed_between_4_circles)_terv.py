def fn(n):
    # (2*((2^(1/2))-1)*(n/4)))^2
    # (2*(0.414213562373095*(n/4)))^2
    # (2*(y*(n/4)))^2
    y = 0.414213562373095
    x = ((2**(1/2))-1)*(n/4)
    ans = (2*x)**2
    print(int(ans),end = " ")

n = input().strip()
a = list(map(int,input().strip().split()))

for i in a:
    fn(i)
