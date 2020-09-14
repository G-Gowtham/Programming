def fn():
    flag = 0
    a = []
    string = input().strip()
    for i in range(len(string)):
        if string[i] == "{":
            a.append("{")
        elif string[i] == "(":
            a.append("(")
        elif string[i] == "[":
            a.append("[")
        elif string[i] == "]":
            if len(a) == 0 or a.pop() != "[":
                flag = 1
                break
        elif string[i] == ")":
            if len(a) == 0 or a.pop() != "(":
                flag = 1
                break
        elif string[i] == "}":
            if len(a) == 0 or a.pop() != "{":
                flag = 1
                break

    if flag == 1:
        print("not balanced")
    else:
        if len(a) == 0:
            print("balanced")
        else:
            print("not balanced")

for _ in range(int(input().strip())):
    fn()

        
        

