def fn():
    n = int(input().strip())
    a = list(input().strip().split())
    
    if(n == 0):
        for i in a:
            print(i[::-1],end = " ")
    elif(n==2):
        for i in a:
            print(i.swapcase()[::-1],end = " ")
    else:
    
        for i in a:
            x = []

            for j in i:

                if(j.isupper()):
                    x.append(1)
                else:
                    x.append(0)

            i = i[::-1]
            l = len(x)
            for j in range(len(i)):
                if(i[j].isalpha() or i[j].isupper()!=i[x-j-1].isupper()):
                    x[j],x[len(x)-j-1] = x[len(x)-j-1],x[j]
                if(x[j] == 0):
                    print(i[j].lower(),end="")
                else:
                    print(i[j].upper(),end="")
            print(" ",end="")


fn()