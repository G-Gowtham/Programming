def fn():
    s = input().strip()
    k,n,c = input().strip().split()
    k = int(k)
    n = int(n)
    ans = 0

    count = s.count(c)
    x = len(s)
    ans = n//x * count

    for i in range(n%x):
        if s[i] == c:
            ans += 1
    
    print(ans)


for _ in range(int(input().strip())):
    fn()