def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    if n == 1:
        return "YES"
    elif n == 2:
        return "NO"
    else:
        lsum = a[0]
        rsum = sum(a[2:])
        #print(rsum)
        for i in range(0,len(a)-2):
            if lsum == rsum:
                return "YES"
            rsum -= a[i+2]
            lsum += a[i+1]
        return "NO"

for _ in range(int(input().strip())):
    print(fn())
