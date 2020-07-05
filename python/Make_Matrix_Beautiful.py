def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    mat = []
    row = []
    col = []
    count = -1

    for i in range(n):
        s = 0
        tmp = []
        for j in range(n):
            count += 1
            s += a[count]
            tmp.append(a[count])
        mat.append(tmp)
        row.append(s)

    for i in range(n):
        s = 0
        for j in range(n):
            s += mat[j][i]
        col.append(s)

    maxi = max(max(row),max(col))
    ans = 0

    for i in range(n):
        if row[i] != maxi:
            ans += maxi - row[i]

    print(ans)

for _ in range(int(input().strip())):
    fn()