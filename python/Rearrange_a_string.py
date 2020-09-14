def fn():
    s = input().strip()
    ans = ""
    add = 0


    for i in s:
        if i.isalpha():
            ans += i
        else:
            add += int(i)

    ans = sorted(ans)
    print(''.join(ans),end="")
    print(add)
    
for _ in range(int(input().strip())):
    fn()