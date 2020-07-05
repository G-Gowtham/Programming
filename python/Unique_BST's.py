fact = [1]*23

for i in range(1,23):
    fact[i] = fact[i-1]*i

def fn():
    n = int(input().strip())
    print(fact[2*n]//(fact[n]*fact[n+1]))

for _ in range(int(input().strip())):
    fn()