
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    
    mini = float("inf")
    ans_i = ans_j = 0
    
    for i in range(n):
        for j in range(i+1,n):
            if mini>abs(a[i]+a[j]):
                mini = abs(a[i]+a[j])
                ans_i = i
                ans_j = j
            
        
        
    print("[%d %d]"%(a[ans_i],a[ans_j]))

     
fn()


