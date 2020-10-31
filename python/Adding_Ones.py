mod = 1000000007

def fn():
    n,k = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))

    ans = [0]*(n+1)

    for i in a:
        ans[i]+=1    

        #print(ans)

    for i in range(1,n+1):
        ans[i] = ans[i-1]+ans[i]
        print(ans[i],end=" ")
    print()    

for _ in range(int(input().strip())):
    fn()