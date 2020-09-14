def fn():
    ilist = []
    jlist = []
    a = []
    flag = 0
    tmp = 0
    m,n = map(int,input().strip().split())
    for j in range(n):
        jlist.append(0)
    for i in range(m):
        a.append(list(input().strip().split()))
    for i in range(m):
        for j in range(n):
            if a[i][j] == "1":
                flag = 1
                jlist[j] = 1
                break       
        if flag:
            flag = 0
            ilist.append(1)
        else:
            ilist.append(0)
    for i in range(m):
        for j in range(n):
            if ilist[i] or jlist[j]:
                print("1 ",end = "")
            else:
                 print("0 ",end = "")  
        print()
    #print(ilist)
    #print(jlist)
for _ in range(int(input().strip())):
    fn()

