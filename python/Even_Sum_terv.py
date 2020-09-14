def fn():
    n = int(input().strip())
    x = 1
    z = 3
    sumi = 0

    while(z<n):
        y = x
        count = 0

        while(y):
            if(y&1):
                count += 1
            y = y>>1

        if(count == 2):
            sumi += x
            z += 1

        x += 1
    print(sumi%100000007)

for i in range(int(input().strip())):
    fn()