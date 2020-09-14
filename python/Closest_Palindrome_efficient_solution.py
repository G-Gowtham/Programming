def fn():
    n = int(input().strip())
    if(n<10):
        print(n)
    elif(n==10):
        print(9)
    else:
        if(str(n)==str(n)[::-1]):
            print(n)
        else:
            n_str = str(n)
            left = ""
            extra = ""
            p1 = ""
            p2 = ""
            p3 = ""
            if(len(n_str)&1):
                extra = n_str[len(n_str)//2]

            left = n_str[:len(n_str)//2]
            
            p1 = left+extra+left[::-1]

            if(len(n_str)&1):
                p2 = str(int(left+extra)-1)
                p2 = p2 + p2[:-1][::-1]
                p3 = str(int(left+extra)+1) 
                p3 = p3 + p3[:-1][::-1]
            else:
                p2 = str(int(left)-1)
                p2 = p2 + p2[::-1]
                p3 = str(int(left)+1) 
                p3 = p3 + p3[::-1]
                
            #print(p1,p2,p3)
            tmp = [[int(p1),abs(int(p1)-n)],[int(p2),abs(int(p2)-n)],[int(p3),abs(int(p3)-n)]]
            tmp.sort()
            tmp.sort(key = lambda x : x[1])
            print(tmp[0][0])

for _ in range(int(input().strip())):
    fn()

                    