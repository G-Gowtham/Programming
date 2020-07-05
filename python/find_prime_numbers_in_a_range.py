a = [True] * 100001
a [0] = False
a [1] = False

for i in range(3,100001,2):
    if a[i]:
        j = 2
        while(i*j < 100001):
            a[i*j] = False
            j += 1

def fn():
    n,m = map(int,input().strip().split())
    if n <= 2:
        print('2',end = ' ')
    for i in range(n,m+1):
        if i % 2 != 0:
            if a[i] == True:
                print(i,end = ' ')
    print()
for _ in range(int(input().strip())):
    fn()
    
