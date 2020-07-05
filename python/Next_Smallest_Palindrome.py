def fn():
    n = int(input().strip())
    a = list(input().strip().split())
    s1 = ""
    s2 = ""
    s3 = ''.join(a)
    
    if(n == 1):
        print(int(s3)+1)
        return

    if(n&1):
        s1 = ''.join(a[:n//2+1])
        s2 = ''.join(a[n//2+1:])
        tmp = int(s1)
        if int(s1[::-1][1:]) > int(s2):
            s1 = s1 + s1[:-1][::-1]
        else:
            while(True):
                tmp += 1
                if int(str(tmp)+str(tmp)[:-1][::-1]) > int(s3):
                    break;
            s1 = str(tmp) +  str(tmp)[:-1][::-1]

    else:
        s1 = ''.join(a[:n//2])
        s2 = ''.join(a[n//2:])
        tmp = int(s1)
        if int(s1[::-1]) > int(s2):
            s1 = s1 + s1[::-1]
        else:
            while(True):
                tmp += 1
                if int(str(tmp)+str(tmp)[::-1]) > int(s3):
                    break;
            s1 = str(tmp) + str(tmp)[::-1]
            

    for i in s1:
        print(i,end = " ")
    print()
    
for _ in range(int(input().strip())):
    fn()
