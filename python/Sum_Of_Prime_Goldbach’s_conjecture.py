a = [1]*1000001
count = 2
a[1] = 0
for i in range(3,1000001//2,2):
    while(i*count < 1000001):
        a[i*count] = 0
        count += 1
    count = 2

def isprime(n):
    return a[n]

def fn():
    n = int(input().strip())
    if(n%2 != 0):
        if(n == 3):
            print(-1)
        elif(isprime(n-2)):
            print(2,n-2)
        else:
            print(-1)
    else:
        if n != 4:
            start = 3
            end = n-3
            while(start <= n//2):
                if(isprime(start) and isprime(end)):
                    break
                start += 2
                end -= 2
        else:
            start = 2
            end = 2
        print(start,end)


for _ in range(int(input().strip())):
    fn()