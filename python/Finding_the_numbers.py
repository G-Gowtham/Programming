def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    dic = {}
    ans = []
    for i in range(len(a)):
        if a[i] in dic:
            dic[a[i]]+=1
        else:
            dic[a[i]] = 1

    for i in dic:
        if dic[i]&1:
            ans.append(i)
    #print(dic)
    print(min(ans),max(ans))
    #print(ans)

for _ in range(int(input().strip())):
    fn()