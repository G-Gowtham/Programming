
def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    
    a.sort()
    mini = float("inf")
    i = 0
    j = n-1
    ans_i = ans_j = 0

    while(i<j):
        sumi = a[i] + a[j]

        if abs(sumi)<mini:
            mini = abs(sumi)
            ans_i = i
            ans_j = j

        if sumi<0:
            i+=1
        else:
            j-=1
        
        
    print("[%d %d]"%(a[ans_i],a[ans_j]))

     
fn()


