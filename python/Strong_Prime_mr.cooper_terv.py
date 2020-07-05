primes = [1]*100000
primes[0] = primes[1] = 0
ans = []
def pre():
    global primes,ans

    for i in range(2,int(100000**(1/2))):
        if(primes[i] == 0):
            continue

        count = 2
        while(i*count<100000):
            primes[(i*count)] = 0
            count += 1

    for i in range(2,100000):
        if primes[i]:
            ans.append(i) 


def fn():
    pre()
    n = int(input().strip())
    a = []

    for i in range(n):
        a.append(list(map(int,input().strip().split())))
    
    
    for q in a:

        i = 0
        count = 0
        while(ans[i]<q[0]):
            i += 1
        
        while ans[i]<=q[1]:
            if(2*ans[i] > ans[i-1]+ans[i+1]):
                #print(ans[i])
                count += 1
            i += 1

        print(count)

   
fn()
