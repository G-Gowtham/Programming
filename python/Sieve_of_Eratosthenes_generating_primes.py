def fn():
    n = int(input().strip())
    primes = [1]*(n+1)
    primes[0] = primes[1] = 0

    for i in range(2,int(n**(1/2))+1):
        k = 2
        
        if primes[i] == 1:
            while i*k <= n:
                #print(i*k)
                primes[i*k] = 0
                k += 1

    for i in range(n+1):
        if primes[i]:
            print(i,end = " ")
    print()

fn()