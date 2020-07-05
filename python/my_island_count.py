#from time import sleep
"""a = [   [1, 1, 0, 0, 0], 
        [0, 1, 0, 0, 1], 
        [1, 0, 0, 1, 1], 
        [0, 0, 0, 0, 0], 
        [1, 0, 1, 0, 1]
    ]"""
a = [[0,0,0],[0,0,0],[1,0,1]]
b = []
stack = []
count = 0
def neibhours(i,j,l1,l2):
    global stack,count,b
    all_nei = [[i-1,j-1],[i-1,j],[i-1,j+1],[i,j-1],[i,j+1],[i+1,j-1],[i+1,j],[i+1,j+1]]
    b[i][j] = "t"
    for k in all_nei:
        if(k[0]>=0 and k[1]>=0 and k[0]<l1 and k[1]<l2):
            if(a[int(k[0])][int(k[1])]==1):
                if b[k[0]][k[1]] == "f":
                    #print("going to append",k)
                    stack.append(k)
                    b[k[0]][k[1]] = "t"
                    #sleep(3)
    if len(stack)!= 0 and len(stack[0])!=0:
        x = stack.pop()
        #print("poped",x)
        b[x[0]][x[1]] = "t"
        neibhours(x[0],x[1],l1,l2)
    #print(stack)
    
for i in range(0,len(a)):
    r = []
    for j in range(0,len(a[i])):
        r.append("f")
    b.append(r)
for i in range(len(a)):
    for j in range(len(a[i])):
        if b[i][j]=="f":
            if(a[i][j]):
                count += 1
            if a[i][j] == 0:
                None
            else:
                neibhours(i,j,len(a),len(a[i]))
                #print(b)
                stack = []
print("islands = ",count)
                
