
b = []
stack = []
count = 1

def neibhours(i,j,n,m,a):
    global stack,count,b
    all_nei = [[i-1,j-1],[i-1,j],[i-1,j+1],[i,j-1],[i,j+1],[i+1,j-1],[i+1,j],[i+1,j+1]]
    b[i][j] = "t"
    for k in all_nei:
        if(k[0]>=0 and k[1]>=0 and k[0]<n and k[1]<m):
            if(a[int(k[0])][int(k[1])]==1):
                if b[k[0]][k[1]] == "f":
                    count += 1
                    stack.append(k)
                    b[k[0]][k[1]] = "t"
    if len(stack)!= 0 and len(stack[0])!=0:
        x = stack.pop()
        b[x[0]][x[1]] = "t"
        neibhours(x[0],x[1],n,m,a)
        
def largestIsland(a):
    global stack,count,b
    n = len(a)
    m = len(a[0])
    count = 1
    b = []
    stack = []
    maxi = 0
    


    for i in range(0,n):
        r = []
        for j in range(0,m):
            r.append("f")
        b.append(r)

    for i in range(n):
        for j in range(m):
            #print(i,j)
            if b[i][j]=="f":
                if a[i][j] != 0:
                    count = 1
                    neibhours(i,j,n,m,a)
                    #print(b)
                    maxi = max(maxi,count)
                    stack = []
    
    return maxi




#{ 
#  Driver Code Starts
#Initial Template for Python 3

t=int(input())
for _ in range(t):
    line=input().strip().split()
    r=int(line[0])
    c=int(line[1])
    line=input().strip().split()
    matrix=[ [0 for _ in range(c)] for _ in range(r)]
    for i in range(r):
        for j in range(c):
            matrix[i][j] = int( line[i*c+j] )
    print(largestIsland(matrix))
# } Driver Code Ends