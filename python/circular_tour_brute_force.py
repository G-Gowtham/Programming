'''
    lis[][0]:Petrol
    lis[][1]:Distance
'''
#Your task isto complete this function
#Your function should return the starting point
def tour(lis, n):
    i = 0
    j = 0
    petrol = 0
    flag = 0

    for i in range(n):
        petrol = lis[i][0] - lis[i][1]
        j = i + 1
        while(True):
            if(petrol<0):
                break
            if(j == n):
                j = 0
            if(i==j):
                return i

            petrol += lis[j][0] - lis[j][1]
            j += 1
    return -1




t = int(input())
for i in range(t):
    n = int(input())
    arr=list(map(int, input().strip().split()))
    lis=[]
    for i in range(1, 2*n, 2):
        lis.append([ arr[i-1], arr[i] ])
    #print n, arr
    print(tour(lis, n))
