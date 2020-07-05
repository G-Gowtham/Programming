
def exp(x,y,m):
    if y == 0:
        return 1
    
    if y&1:
        ans = exp(x,y//2,m)
        res = (ans*ans*x)
    else:
        ans = exp(x,y//2,m)
        res = (ans * ans) 
    return res%m

for _ in range(int(input().strip())):
    x,y,m = map(int,input().strip().split())
    print(exp(x,y,m))