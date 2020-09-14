def fn():
    n = int(input())
    a = list(input().strip().split())
    contact = input().strip()
    test = list(a)
    tmp = ""
    flag = 0
    a_set = set(a)
    a = list(a_set)
    a.sort()
    for i in range(0,len(contact)):
        tmp += contact[i]
        for k in range(len(a)):
            if len(a[k]) >= len(tmp):
                if tmp == str(a[k])[:len(tmp)]:
                    print(a[k],"",end = '')
                    flag = 1
        if flag == 0:
            print(0)
        else:
            print()
            flag = 0
        
for _ in range(int(input())):
    fn()