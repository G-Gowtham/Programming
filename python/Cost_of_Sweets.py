def fn():
    n = int(input().strip())

    if(n&1):
        n = n + 1
        if(n%4 == 0):
            return (n//2)-1
        else:
            return n//2
    else:
        if(n%4 == 0):
            return n//2
        else:
            return (n-2)//2

for _ in range(int(input().strip())):
    print(fn())