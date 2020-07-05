def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    i = 1
    j = len(a)-2
    l_sum = a[0]
    r_sum  = a[len(a)-1]
    flag = 0

    while(i<j):
        if(l_sum == r_sum):
            if(l_sum == sum(a[i+1:j])):
                flag  = 1
                break
        else:
            if(l_sum<r_sum):
                l_sum += a[i]
                i += 1
            else:
                r_sum += a[j]
                j -= 1

    if(flag):
        print("Indices which form equi pair ( %d,%d )" % (i, j))
        print("slices are ( %d,%d ),( %d,%d ),( %s,%d )"%(0,i-1,i+1,j-1,j+1,len(a)-1))
    else:
        print("Array does not contain any equi pair")

fn()