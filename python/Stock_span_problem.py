def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    out = [1]
    for i in range(1,n):
        if(a[i]<a[i-1]):
            out.append(1)
        else:
            count = 0
            for j in range(i-1,-1,-1):
                if(a[i]>=a[j]):
                    count += 1
                else:
                    break
            out.append(count+1)

    print(*out)

for _ in range(int(input().strip())):
    fn()


