fact = [1]*201

for i in range(1,201):
    fact[i] = fact[i-1]*i

def fn():
    n = int(input().strip())
    print(fact[2*n]//(fact[n]*fact[n+1]))

for _ in range(int(input().strip())):
    fn()