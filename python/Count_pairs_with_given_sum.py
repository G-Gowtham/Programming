def fn():
    count = 0
    x,y = map(int,input().split())
    a = list(map(int,input().split()))
    for i in range(len(a)-1):
        for j in range(i+1,len(a)):
            #print(i,j,y)
            if a[i]+a[j] == y:
                count += 1
    print(count)

for _ in range(int(input())):
    fn()