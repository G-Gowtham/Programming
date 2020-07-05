def fn():
    s = input().strip()

    def priority(c):
        if(c == '+' or c == '-'):
            return 1
        elif(c == '*' or c == '/'):
            return 2
        else:
            return 3

    ans = ""
    stack = []

    for i in s:
        if i.isalpha():
            ans += i
        elif(i == '('):
            stack.append(i)
        elif(i == ')'):
            while(stack[-1] != '('):
                ans+=stack.pop()
            stack.pop()
        else:
            while(len(stack) != 0 and stack[-1] != '(' and priority(stack[-1])>=priority(i)):
                ans += stack.pop()
            stack.append(i)

    while(len(stack)!=0):
        ans += stack.pop()
    
    print(ans)


        
for  _ in range(int(input().strip())):
    fn()