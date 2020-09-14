from math import ceil
def fn():
    n,k = map(int,input().strip().split())
    x = ceil(n/2)

    if(x<k):
        print(2*(k-x))
    else:
        print((2*k)-1)
        
fn()
