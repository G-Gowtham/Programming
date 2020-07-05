def fn():
    a = ['2','3','5','7']
    n = int(input().strip())
    i = 5
    flag = 0
    q = ['2','3','5','7']

    flag = 0
    while i<=n:
        tmp = q.pop(0)
        for j in a:
            q.append(tmp+j)
            print(i,q[-1])
            i += 1
            if(i>n):
                flag = 1
                break
        if(flag):
            break

    # print(q)
    if(n<5):
        print(q[n-1])
    else:
        print(q[-1])
        

fn()
