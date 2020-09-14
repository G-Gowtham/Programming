def fn():
    n,m = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    b = list(map(int,input().strip().split()))
    d =  {}

    for i in a:
        d[i] = 1
    
    for i in b:
        if i not in d:
            return "No"

    return "Yes"

for _ in range(int(input().strip())):
    print(fn())