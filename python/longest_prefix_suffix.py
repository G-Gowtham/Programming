def fn():
    s = input().strip()
    pre = s[:-1]
    suf = s[1:]
    for i in range(len(s)-1):
        if pre == suf:
            break
        pre = pre[:-1]
        suf = suf[1:]
    print(len(pre))

for _ in range(int(input().strip())):
    fn()