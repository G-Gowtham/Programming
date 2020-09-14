used = [0]*6
flag = 0

def print_ans(base1,col1,col2,base2,col3,base3):

    h = len(col2)
    w = len(base2)

    #print(base1,col1,col2,base2,col3,base3)

    grid = [['.']*w for i in range(h)]

    for i in range(len(base1)):
        grid[0][i] = base1[i]
    
    for i in range(len(col1)):
        grid[i][0] = col1[i]
    
    for i in range(len(col2)):
        grid[i][len(base1)-1] = col2[i]

    for i in range(len(base2)):
        grid[len(col1)-1][i] = base2[i]

    for i in range(len(col3)):
        grid[len(col1)-1+i][w-1] = col3[i]
    
    for i in range(len(base3)):
        grid[h-1][w-i-1] = base3[len(base3)-1-i]

    for i in grid:
        for j in i:
            print(j,end = " ")
        print()
        

#last row
def find_6(base1,col1,col2,base2,col3):
    global used,flag
    #print(base1,col1,col2,base2,col3)

    for i in range(6):
        
        if(used[i] == 0):
            if(col2[len(col2)-1] == words[i][0] and col3[len(col3)-1] == words[i][len(words[i])-1]): #and len(words[i])>= len(col3) 
                flag = 1
                print_ans(base1,col1,col2,base2,col3,words[i])
                return

#last col
def find_5(base1,col1,col2,base2):
    global used

    #print(base1,col1,col2,base2)
    for i in range(6):
        if(flag == 1):
            return

        if(used[i] == 0):
            if(base2[len(base2)-1] == words[i][0]):
                used[i] = 1
                find_6(base1,col1,col2,base2,words[i])
                used[i] = 0


#2nd col the base or breath
def find_4(base1,col1,col2):
    global used

    #print(base1,col1,col2)

    for i in range(6):
        if(flag == 1):
            return

        if(used[i] == 0):
            #print(words[i])
            if(col1[len(col1)-1]==words[i][0] and len(words[i]) >= len(base1) and col2[len(col1)-1]== words[i][len(base1)-1]):
                used[i] = 1
                find_5(base1,col1,col2,words[i])
                used[i] = 0

#2nd row the long row
def find_3(n,base1,col1):
    global used

    #print(base1)
    for i in range(6):
        if(flag == 1):
            return 

        if(used[i] == 0 and len(words[i]) == maxi):
            if(base1[n-1] == words[i][0]):
                used[i] = 1
                find_4(base1,col1,words[i])
                used[i] = 0

#1 st row
def find_2(n,base1):
    global used

    #print("hi")
    for i in range(6):
        if(flag == 1):
            return

        if(used[i] == 0):
            if(base1[0] == words[i][0]):
                used[i] = 1
                find_3(n,base1,words[i])
                used[i] = 0


#1 st row
def find_1():
    global used
    for i in range(6):
        if(flag == 1):
            return

        used[i] = 1
        # for j in range(len(words[i]),i):
        #     grid[0][j] = words[i][j]
        find_2(len(words[i]),words[i])

        used[i] = 0



words = []
for i in range(6):
    words.append(input().strip())

words.sort()
max_height = []
maxi = -1
for i in words:
    if(len(i)>maxi):
        maxi = len(i)

print()
find_1()

if(flag == 0):
    print("Impossible")
