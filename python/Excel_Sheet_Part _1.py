def fn():
    n = int(input().strip())
    s = ''
    while(n):
        #print((n % 26) + 64)
        if(n%26 == 0):
            s = 'Z' + s
            n = n//26-1
        else:
            s = chr((n % 26) + 64) + s
            n //= 26;

    print(s)

for _ in range(int(input().strip())):
    fn()