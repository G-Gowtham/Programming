def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    s = [0]
    area = 0
    maxi = 0

    for i in range(1,n):
        if(a[s[-1]] <= a[i]):
            s.append(i)
        else:
            while(len(s)!=0 and a[s[-1]] > a[i]):
                index = s.pop()
                if(len(s)!=0):
                    area = (i-s[-1]-1)*a[index]
                else:
                    area = i*a[index]

                maxi = max(maxi,area)
            s.append(i)
    
    i = n

    while(len(s)!=0):
        index = s.pop()
        if(len(s)==0):
            maxi = max(maxi,a[index]*n)
        else:
            maxi = max(maxi,(i-s[-1]-1)*a[index])

    print(maxi)

for _ in range(int(input().strip())):
    fn()