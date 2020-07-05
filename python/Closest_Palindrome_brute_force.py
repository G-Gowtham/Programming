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
            n1,n2 = n-1,n+1
            while(True):
                if(str(n1)==str(n1)[::-1]):
                    print(n1)
                    break
                elif(str(n2)==str(n2)[::-1]):
                    print(n2)
                    break
                n1 -= 1
                n2 += 1

for _ in range(int(input().strip())):
    fn()
 
                    