def fn():
    s = input().strip()
    oe = -1
    even = 0
    odd = 0
    for i in range(len(s)-1,-1,-1):
        if(oe == -1):
            if(s[i]=='1'):
                odd += 1
        else:
            if(s[i]=='1'):
                even += 1
        oe *= -1;
    if(abs(odd-even)%3 == 0):
        print("1")
    else:
        print("0")

for _ in range(int(input())):
    fn()