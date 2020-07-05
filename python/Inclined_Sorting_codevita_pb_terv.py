def diagonal_ele(a,i,j,n):
    ans = []
    while(i>= 0 and j<n):
        ans.append(a[i][j])
        i -= 1
        j += 1
    ans.sort()
    return ans

def fn():
    n = int(input().strip())
    a = []
    s = []

    for i in range(n):
        a.append(list(map(int,input().strip().split())))
    
    for i in range(1,n):
        s += diagonal_ele(a,i,0,n);
    for i in range(1,n-1):
        s += diagonal_ele(a,n-1,i,n);

    i = j = k = 0

    for i in range(1,n):
        j = 0
        while(i>= 0 and j<n):
            a[i][j] = s[k]
            i -= 1
            j += 1
            k += 1
    
    for j in range(1,n-1):
        i = n-1
        while(i>= 0 and j<n):
            a[i][j] = s[k]
            i -= 1
            j += 1
            k += 1

    for i in range(n):
        print(*a[i])

fn()