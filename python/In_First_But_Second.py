def fn():

    m,n = input().strip().split()
    a = list(input().strip().split())
    b = list(input().strip().split())
    
    for i in range(int(m)):
        a[i] = int(a[i])
    
    d = {}

    for i in b:
        d[int(i)] = 1     

    for i in a:
        if i not in d:
            print(i,end = " ")
    
            
    print()

for _ in range(int(input().strip())):
    fn()