
def fn(a, n, m) : 
    maxi = 0
    index = 0
    count = 0

    for i in range(n):
        count = 0
        for j in range(i,n):         
            if(a[j] == 0):
                count += 1

            if(count<=m):
                if(maxi<j-i+1):
                    maxi = j-i+1
                    index = i

    #print(maxi,index)
    for i in range(index,index+maxi):
        if(a[i] == 0):
            print(i,end = " ")
	

n = int(input().strip())
a = list(input().strip().split())
m = int(input().strip())
b = []

for i in a:
    if len(i) > 1:
        for j in i:
            b.append(int(j))
    else:
        b.append(int(i))


fn(b,n,m) 
