def fn():
    n = int(input().strip())
    a = list(input().strip().split())
    distinct = []
    alpha = [0]*26
    count = 1

    for i in range(len(a)):
        alpha[ord(a[i])-97] += 1
        distinct.append(a[i])
        if(len(distinct) == 0):
            print(-1,end = ' ')
        elif(a[i] == distinct[0] and alpha[ord(a[i])-97] <= 1):
            print(distinct[0],end = ' ')
        elif(a[i] == distinct[0]):
            while(len(distinct) != 0 and alpha[ord(distinct[0])-97] > 1):
                distinct.pop(0)
            if len(distinct) == 0:
                print(-1,end = ' ')
            else:
                print(distinct[0],end = ' ')
        else:
            print(distinct[0], end = ' ')
    print()

for _ in range(int(input().strip())):
    fn()
