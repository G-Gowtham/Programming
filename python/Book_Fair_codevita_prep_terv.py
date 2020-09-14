mod = 1000000007

maxi = float("-inf")

def find(n,k,a,i,sumi):
    global maxi
    maxi = max(maxi,sumi)
    #print(path)

    if(i>n-1):
        return

    find(n,k,a,i+1,sumi)
    find(n,k,a,i+k+1,sumi+a[i])
    

def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    find(n,k,a,0,0)
    print(maxi)

fn()