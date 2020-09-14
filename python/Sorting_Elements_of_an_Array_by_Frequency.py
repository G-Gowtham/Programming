
def fn():
    
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    out = []
    s = list(set(a))
    s.sort()
    for i in s:
        tmp = []
        tmp.append(i)
        tmp.append(a.count(i))
        out.append(tmp)

    out.sort(key= lambda x: x[1],reverse = True)
    
    for i in out:
        for j in range(i[1]):
            print(i[0],end = " ")
    
    print()

for _ in range(int(input().strip())):
    fn()