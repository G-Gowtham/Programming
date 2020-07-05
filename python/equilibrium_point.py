def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    if n == 1:
        return 1
    elif n == 2:
        return -1
    else:
        lsum = a[0]
        rsum = sum(a[2:])
        #print(rsum)
        for i in range(0,len(a)-2):
            if lsum == rsum:
                return i+2
            rsum -= a[i+2]
            lsum += a[i+1]
        return -1

for _ in range(int(input().strip())):
    print(fn())
