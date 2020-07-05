def fn():
    n,k = input().strip().split()
    a  = list(input().strip().split())
    
    n = int(n)
    k = int(k)
    for i in range(n):
        a[i] = int(a[i])
        
    dq = []
    dq_index = []
    
    for i in range(0,n):
        
        if(len(dq) == 0):
            dq.append(a[i])
            dq_index.append(i)
            
        if(i - dq_index[0] >= k):      
            dq.pop(0)
            dq_index.pop(0)
            
        if(len(dq) == 0):
            dq.append(a[i])
            dq_index.append(i)
            
        elif(dq[len(dq)-1] > a[i]):
            dq.append(a[i])
            dq_index.append(i)
            
        else:
            while(True):
                dq.pop()
                dq_index.pop()
                if(len(dq)==0):
                    dq.append(a[i])
                    dq_index.append(i)
                    break;
                if(dq[len(dq)-1] > a[i]):
                    dq.append(a[i])
                    dq_index.append(i)
                    break;
        if(i>=k-1):
            print(dq[0],end = ' ')
    print()

for _ in range(int(input().strip())):
    fn()