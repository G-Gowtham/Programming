
def find_power(a,b,c):
    if b == 0:
        return 1
    
    x = find_power(a,b//2,c)
    ans = (x*x)%c

    if b&1:
        ans = (ans*a)%c
    
    return ans

def fn():
    a,b,c = map(int,input().strip().split())
    print(find_power(a,b,c))

fn()


