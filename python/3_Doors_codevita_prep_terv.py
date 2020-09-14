def fn():
    s = input().strip()
    st = []
    flag = 0

    for i in s:
        if(i == '(' or i == '[' or i == '{'):
            st.append(i)

        else:
            l = len(st)
            if l == 0:
                flag = 1
                break

            if  i == ')' and st[-1] == '(':
                st.pop(l-1)
            elif  i == ']' and st[-1] == '[':
                st.pop(l-1)
            elif  i == '}' and st[-1] == '{':
                st.pop(l-1)
            else:
                flag = 1
                break
    if flag:
        print("NO")
    else:
        print("YES")

fn()