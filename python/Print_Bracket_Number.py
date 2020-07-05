def fn():
    s = input().strip()
    ans = []
    st = []
    count = 0
    for i in range(len(s)):
        if(s[i] == "("):
            count += 1
            ans.append(count)
            st.append(count)
        elif(s[i] == ")"):
            ans.append(st.pop())

    print(*ans)

for i in range(int(input().strip())):
    fn()
    