
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    k = int(input().strip())

    for i in range(n):
        a[i] = a[i]^k
    
    even = odd = 0

    for i in range(n):
        if bin(a[i]).count('1') & 1:
            odd += 1
        else:
            even += 1
    
    print("Even = %d, Odd = %d"%(even,odd))
fn()


