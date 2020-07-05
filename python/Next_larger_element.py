def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    out = [-1]
    stack = [a[n-1]]
    flag = 0
    for i in range(n-2,-1,-1):
    
        while(len(stack)!=0):
            if(a[i]<stack[0]):
                out.append(stack[0])
                stack.insert(0,a[i])
                flag = 1
                break
            else:
                stack.pop(0)

            
        if(flag == 0):
            stack = []
            stack.append(a[i])
            out.append(-1)
            
        flag = 0
    
    for i in range(n-1,-1,-1):
        print(out[i],end = ' ')
    print()

for _ in range(int(input().strip())):
    fn()