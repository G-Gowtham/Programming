def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    ans = [0]
    dq = [a[len(a)-1]]

    for i in range(n-2,-1,-1):
        if a[i] >= dq[len(dq)-1]:
            ans.insert(0,0)
            dq = [a[i]]
        else:
            while(a[i]>=dq[0]):
                dq.pop(0)
            
            ans.insert(0,dq[0])
            dq.insert(0,a[i])

    print((sum(ans))%1000000001)

    
for _ in range(int(input().strip())):
    fn()
