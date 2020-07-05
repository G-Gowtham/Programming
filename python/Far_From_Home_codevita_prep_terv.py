def fn():
    s  = input().strip()
    tmp = ""
    d = []
    hor = 0
    ver = 0

    for i in s:
        if ord(i)-48>=0 and ord(i)-48<=9:
            tmp += i
        else:
            n = int(tmp)
            if i == 'N':
                ver += n
            elif i == 'S':
                ver -= n
            elif i == 'E':
                hor += n
            else:
                hor -= n
    
            tmp = ""


    ans = ""

    if ver < 0 :
        ans += 'N'
    elif ver>0:
        ans += 'S'

    if hor<0 :
        ans += 'E'
    elif hor>0:
        ans += 'W'

    x = abs(ver)
    y = abs(hor)
    
    z = round(((x**2)+(y**2))**(1/2),2)

    print(ans+" %0.2f"%z)

fn()

