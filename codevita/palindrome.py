def fn():
    n,m = map(int,input().strip().split())
    count = 0

    s = ""

    for i in range(n,m+1):
        for j in range(24):
            for k  in range(60):
                for l in range(60):

                    s = str(i)

                    if j<10:
                        s+='0'+str(j)
                    else:
                        s += str(j)

                    if k<10:
                        s+='0'+str(k)
                    else:
                        s += str(k)

                    if l<10:
                        s+='0'+str(l)
                    else:
                        s += str(l)


                    if s == s[::-1]:
                        count += 1 
                        print(s)

    print(count)

fn()