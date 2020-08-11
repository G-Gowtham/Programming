mini = float('inf')
ans = ""

def lcs(a,b,i,j,n,m,s,l):
    global mini,ans

    if i == n:
        if l+m-j <= mini:
            mini = l+m-j
            ans = s+b[j:]
        return

    elif j == m:
        if l+n-i <= mini:
            mini = l+n-i
            ans = s+a[i:]
        return
    
    if(a[i] == b[j]):
        lcs(a,b,i+1,j+1,n,m,s+a[i],l+1)
    else:
        lcs(a,b,i+1,j,n,m,s+a[i],l+1)
        lcs(a,b,i,j+1,n,m,s+b[j],l+1)

def fn():
    a = input().strip()
    b = input().strip()

    lcs(a,b,0,0,len(a),len(b),"",0)
    print(ans)

fn()

#AGXGTXAYB