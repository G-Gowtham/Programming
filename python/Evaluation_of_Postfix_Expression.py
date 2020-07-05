def add(a,b):
    return b+a

def sub(a,b):
    return b-a

def mul(a,b):
    return b*a

def div(a,b):
    return b//a

def fn():
    s = input().strip()
    st = []
    for i in range(len(s)):
        if(s[i] == '+'):
            st.append(add(st.pop(),st.pop()))
        elif(s[i] == '-'):
            st.append(sub(st.pop(),st.pop()))
        elif(s[i] == '*'):
            st.append(mul(st.pop(),st.pop()))
        elif(s[i] == '/'):
            st.append(div(st.pop(),st.pop()))
        else:
            st.append(int(s[i]))

    print(st[0])

for i in range(int(input().strip())):
    fn()
    