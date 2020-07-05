def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))

    pro = 1

    for i in range(n):
        pro *= a[i]

    for i in range(n):
        print(pro//a[i],end = ' ')

    print() 
    
for _ in range(int(input().strip())):
    fn()