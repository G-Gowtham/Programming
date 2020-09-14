def fn():
    s = input().strip()
    n = 0
    count = 0
    for i in range(len(s)-1,-1,-1):
        n += (26**count) * (ord(s[i])-64)
        count += 1
    print(n)

for _ in range(int(input().strip())):
    fn()