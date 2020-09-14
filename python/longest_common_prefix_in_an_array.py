def fn():
    n = int(input().strip())
    a = list(input().strip().split())
    mini = len(a[0])
    pre = ""
    
    for i in range(1,len(a)):
        mini = min(mini,len(a[i])) 
    for i in range(mini):
        count = 0
        for j in range(1,len(a)):
            if a[0][i] == a[j][i]:
                count += 1
        if count == len(a)-1:
            pre += a[0][i]
        else:
            break
    if len(pre) != 0:
        print(pre)
    else:
        print("-1")


for _ in range(int(input().strip())):
    fn()