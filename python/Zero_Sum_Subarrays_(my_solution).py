from collections import defaultdict

def fact(n):
    if n == 1:
        return 1
    if n == 0:
        return 0

    return n+fact(n-1)

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    d = defaultdict(list)
    s = 0
    count = 0

    for i in range(n):
        s += a[i]
        d[s].append(i)
    

    for i in d:
        if i == 0:
            count += fact(len(d[i]))
            #print(len(d[i]))
        else:
            count += fact(len(d[i])-1)

    print(count)

for _ in range(int(input().strip())):
    fn()