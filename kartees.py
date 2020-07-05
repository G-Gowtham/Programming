
#a = [0,3,6,12,3,6,-12,3,-3]
a = [-5,-3,-6,-12,-3,-6,-12,-3,-12]
#a = [0,3,6,1,12,3,6,2,-12,3,-3,3,7,6,5,4]
#a = [1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,-200]
#a = list(map(int,input().strip().split(",")))
#g_max = a[0]
n = int(len(a)**(1/2))
#print("n =",n)
gap = 1
length = n-1
local_sum = 0
rcount = 0
q1 = []
q2 = []
lcount = 0
tmp_gap1 = 0
tmp_gap2 = 0
local_sum = 0
outer_skip = 2
tmp = n-3
count = 0
q3 = []
test = []
for i in range(len(a)):
    local_sum += a[i]
g_max = local_sum
q3.append(a)
local_sum = 0
#print(g_max)
q1.append(str(len(a)-1))
q2.append(str(n))

for k in range(n):
    if length > 1:
        #yoyo = len(a)-((length*length)+gap)
        for i in range(len(a)-(length*length)+gap):
            if rcount < outer_skip:
                for j in range(i,i+(length*length)+gap+tmp):#can goto n incase of error
                    if j >= len(a):
                        break
                    if lcount < length :
                        count += 1  
                        local_sum += a[j]
                        test.append(a[j])
                        #print(a[j],"",end = '')
                        lcount += 1
                    else:
                        tmp_gap1 += 1
                        if gap == tmp_gap1:
                            tmp_gap1 = 0
                            lcount = 0

                if g_max < local_sum and count == length*length:                   
                    q1.clear()
                    q2.clear()
                    q3.clear()
                    g_max = local_sum
                    q1.append(str(j))
                    q2.append(str(length))
                    q3.append(test)
                elif g_max == local_sum and count == length*length:
                    #print(local_sum)
                    q1.append(str(j))
                    q2.append(str(length))
                    q3.append(test)
                else:
                    None

                rcount += 1
                #print()
                local_sum = 0
                lcount = 0
                tmp_gap1 = 0
                count = 0
                test = []
            else:
                tmp_gap2 +=1
                if length - 1 == tmp_gap2:
                    tmp_gap2 = 0
                    rcount = 0
    outer_skip += 1
    gap += 1
    length -= 1
test = []
for i in range(len(a)):
    #print(a[i],"",end = '')
    test.append(a[i])
    if g_max < a[i] :                   
        q1.clear()
        q2.clear()
        q3.clear()
        g_max = a[i]
        q1.append(str(i))
        q2.append("1")
        q3.append(test)
    elif g_max == a[i]:
        #print(local_sum)
        q1.append(str(i))
        q2.append("1")
        q3.append(test)
    else:
        None
    test = []
 
print(g_max)                
#q1 index i = (num)//n , j = (num)%n
print(q1) 
# q2 matrx size
print(q2)
#q3
print(q3)
l = 0
for i in range(len(q3)):
    for j in range(len(q3[i])):
        if j % int(q2[i]) == 0:
            if l == 0:
                l = 1
            else:
                print()
        print(q3[i][j],"",end = '')


