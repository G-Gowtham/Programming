"""
N < 2K: The answer is “No”, because the sum of K primes is at least 2K.

N ≥ 2K and K = 1: The answer is “Yes” if N is prime, and “No” otherwise.

N ≥ 2K, K = 2 and N is even: The answer is “Yes” (by Goldbach’s conjecture).

N ≥ 2K, K = 2 and N is odd: The answer is “Yes” if N − 2 is prime, and “No” otherwise. This is because the sum of two odd primes is even, and the only even prime number is 2, so one of the prime numbers in the sum must be 2.

N ≥ 2K and K ≥ 3: The answer is “Yes”. This is because if N is even, then N − 2(K − 2) is also even, so it is the sum of two primes, say p and q (by Goldbach’s conjecture). Thus, N is the sum of the K primes 2, 2, 2, ..., p, q. And if N is odd, then N − 3 − 2(K − 3) is even, so it is the sum of two primes, say p and q. Thus, N is the sum of the K primes 3, 2, 2, ..., p, q.
"""
# def prime_check(x):
#     for i in range(2,int(x**(1/2))+1):
#         if x % i == 0:
#             return 0
#     return 1

# def prime_check(n) : 
#     if (n <= 1) : 
#         return False
#     if (n <= 3) : 
#         return True
#     if (n % 2 == 0 or n % 3 == 0) : 
#         return False
#     i = 5
#     while(i * i <= n) : 
#         if (n % i == 0 or n % (i + 2) == 0) : 
#             return False
#         i = i + 6
#     return True

def check_composite(n, s, d, a):
    x = pow(a, d, n)
    if x == 1 or x == n - 1:
        return False
    for y in range(1, s):
        x = x * x % n
        if x == 1:
            return True
        if x == n - 1:
            return False
    return True

small_primes = set([3,5,7,11,13,17,19,23,29,31,37])
small_is_prime = [s in small_primes for s in range(38)]
small_is_prime[2] = True
witnesses_bounds = [
    (341531, [9345883071009581737]),
    (716169301, [15, 13393019396194701]),
    (154639673381, [15, 176006322, 4221622697]),
    (47636622961201, [2, 2570940, 211991001, 3749873356]),
    (3770579582154547, [2, 2570940, 880937, 610386380, 4130785767]),
]
i64_witnesses = [2, 325, 9375, 28178, 450775, 9780504, 1795265022]

def is_prime(n):
    if n < 38:
        return small_is_prime[n]
    for s in small_primes:
        if n % s == 0:
            return False
    d = n - 1
    s = 0
    while not d & 1:
        d >>= 1
        s += 1
    best_witnesses = i64_witnesses
    for bound, bound_ws in witnesses_bounds:
        if n < bound:
            best_witnesses = bound_ws
            break
    for a in best_witnesses:
        a %= n
        if a and check_composite(n, s, d, a):
            return False
    return True


def fn():
    n,k = map(int,input().strip().split())
    if n < 2*k:
        print("No")
    elif n >= 2*k and k == 1:
        if is_prime(n):
            print("Yes")
        else:
            print("No")
    elif n >=  2 * k and k == 2 and n % 2 == 0:
        print("Yes")
    elif n >=  2 * k and k == 2:
        if is_prime(n-2):
            print("Yes")
        else:
            print("No")
    elif n >= 2 *k and k >= 3:
        print("Yes")

for _ in range(int(input().strip())):
    fn()
