def fn():
    n,m = map(int,input().strip().split())
    a = []
    count = 0
    for i in range(n):
        a.append(list(map(int,input().strip().split())))
    for i in range(n):
        for j in range(m):
            if a[i][j] == 1:
                #print(i,j)
                #if j >= len(a[i])-1 or a[i][j+1] == 0:
                    #print("hi")
                if (i <= 0 or a[i-1][j] == 0) and (j >= len(a[i])-1 or a[i][j+1] == 0):
                    count += 1
    print(count)
fn()

