
ldiag = []
rdiag = []
ilist = []
jlist = []
possible = []
tmp = []
flag = 0
count = 0
out_list = []

def issafe(i,j):
    if i in ilist:
        return False
    elif j in jlist:
        return False
    elif i+j in ldiag:
        return False
    elif i-j in rdiag:
        return False
    else:
        #print("safe",i,j)
        return True

def fn(n,i,j):
    global possible,out_list
    if i == 0:
        ilist.append(i)
        jlist.append(j)
        ldiag.append(i+j)
        rdiag.append(i-j)
        tmp.append(str(i)+","+str(j))
        fn(n,i+1,j)
    if j == n and i == n:
        ilist.pop()
        jlist.pop()
        ldiag.pop()
        rdiag.pop()
        tmp.pop()
        return False
    else:
        for k in range(n):
            if i == n-1 and issafe(i,k):
                ilist.append(i)
                jlist.append(k)
                ldiag.append(i+k)
                rdiag.append(i-k)
                tmp.append(str(i)+","+str(k))
                out_list.append(list(jlist))
                possible.append(list(tmp))
                ilist.pop()
                jlist.pop()
                ldiag.pop()
                rdiag.pop()
                tmp.pop()
                return True
            elif i != n-1 and issafe(i,k):
                ilist.append(i)
                jlist.append(k)
                ldiag.append(i+k)
                rdiag.append(i-k)
                tmp.append(str(i)+","+str(k))
                fn(n,i+1,k)
                ilist.pop()
                jlist.pop()
                ldiag.pop()
                rdiag.pop()
                tmp.pop()


for _ in range(int(input().strip())):
    n = int(input().strip()) 
    for head in range(n):
        ilist.clear()
        jlist.clear()
        ldiag.clear()
        rdiag.clear()
        tmp.clear()

        fn(n,0,head)

    #print(out_list)
    if n == 1:
        print("[1 ]")
    else:
        if len(out_list) == 0:
            print("-1")
        else:
            for i in range(len(out_list)):
                print("[",end = '')
                for j in range(len(out_list[i])):
                    print(out_list[i][j]+1,"",end= '')
                print("] ",end = '')
            print()
            possible.clear()
            out_list.clear()
