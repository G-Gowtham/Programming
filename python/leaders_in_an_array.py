def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    maxi = -1
    out = []
    for i in range(len(a)-1,-1,-1):
        if a[i] >= maxi:
            maxi = a[i]
            out.append(a[i])
    for i in range(len(out)-1,-1,-1):
        print(out[i],end = ' ')
    print()
    
for _ in range(int(input())):
    fn()