def fn():
    string = input().strip()
    stack = []
    count = 0
    stack.append(-1)
    for i in range(len(string)):
        if string[i] == "(":
            stack.append(i)
        else:
            stack.pop()
            if len(stack) == 0:
                stack.append(i)
            else:

                count = max(count,i - stack[len(stack)-1])
    print(count)
for _ in range(int(input().strip())):
    fn()
