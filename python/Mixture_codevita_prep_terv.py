def fn():
    n = int(input().strip())

    if n&1:
        print(2**(n//2))
    else:
        print(3**(n//2-1))
    
fn()

#1 1 2 3 4 6