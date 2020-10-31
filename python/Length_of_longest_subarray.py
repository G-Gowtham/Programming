mod = 1000000007

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    maxi = 0
    count = 0

    for i in a:
        if i < 0:
            count = 0
        else:
            count += 1
            maxi = max(count,maxi)
    
    print(maxi)

for _ in range(int(input().strip())):
    fn()