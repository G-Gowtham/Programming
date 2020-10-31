mod = 1000000007

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    small = large = ""

    for i in a:
        if i<small:
            small = i
        if i>large:
            large = i
    
    print(small,large)
for _ in range(int(input().strip())):
    fn()