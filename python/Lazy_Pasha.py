def fn():
    n,q = map(int,input().strip().split())
    s = input().strip()
    query = []
    move = 0
    l = len(s)

    for i in range(q):
        x,y = map(int,input().strip().split())
        query.append(x)
        query.append(y)
    
    for i in range(0,q*2,2):
        if(query[i] == 1):
            move += query[i+1]
        else:
            s = s[(-1*move%l):]+s[:(-1*move%l)]
            print(s[query[i+1]])
            move = 0

            
for _ in range(int(input().strip())):
    fn()