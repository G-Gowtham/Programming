def prime_check(x):
    #flag = 0
    for i in range(2,int(x/2)+1):
        if x % i == 0:
            #flag = 1
            return 0
    #print(flag)
    return 1
for _ in range(int(input().strip())):
    n = int(input().strip())
    for i in range(2,n):
        if prime_check(i) and prime_check(n-i):
            print(i,"",n-i)
            break
#print(prime_check(4))