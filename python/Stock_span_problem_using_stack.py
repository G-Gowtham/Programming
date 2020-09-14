def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    out = [1]
    stack = [0]
    for i in range(1,n):

        while(len(stack)>0 and a[i]>a[stack[-1]]):
            stack.pop()

        if(len(stack)==0):
            out.append(i+1)
        else:
            out.append(i-stack[-1])
    
        stack.append(i)
            
        

    print(*out)

for _ in range(int(input().strip())):
    fn()


