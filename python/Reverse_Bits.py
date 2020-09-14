def fn():
    n = int(input().strip())
    rev = 0
    pos = 31
    while n:
        if(n & 1):
            rev |= 1 << pos
        pos -= 1
        n >>=1
    print(rev)

for _ in range(int(input().strip())):
    fn()
        

    