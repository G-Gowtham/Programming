def fn():
    n = int(input().strip())
    b = []
    q = []
    for i in range(1,10):
        q.append(i)
        while len(q) != 0:
            tmp = q.pop(0)
            if tmp > n:
                continue
            b.append(tmp)
            left = tmp % 10
            if left > 0:
                q.append(tmp * 10 + (left-1) )
            if left < 9:
                q.append(tmp * 10 + (left+1) )
    b.sort()
    print("0 ",end = '')
    for i in b:
        print(i,"",end = '')
    print()

for _ in range(int(input().strip())):
    fn()