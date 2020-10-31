mod = 1000000007

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    a.sort()
    count = 1

    for i in range(1,n):
        if(a[i]-1 != a[i-1]):
            count += 1
            #print(a[i])
    
    print(count)

for _ in range(int(input().strip())):
    fn()