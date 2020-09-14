from collections import defaultdict

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    d = defaultdict(list)
    s = 0
    count = 0

    for i in range(n):
        s += a[i]

        if s == 0:
            count += 1
        
        if s in d:
            for j in d[s]:
                count += 1

        d[s].append(i)
    
    print(d,count)



for _ in range(int(input().strip())):
    fn()