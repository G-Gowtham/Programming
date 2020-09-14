'''
    lis[][0]:Petrol
    lis[][1]:Distance
'''
#Your task isto complete this function
#Your function should return the starting point
def tour(lis, n):
    i = 0
    index = 0
    petrol = 0
    pre = 0
    
    for i in range(n):
        petrol += lis[i][0] - lis[i][1]
        if(petrol < 0):
            index = i+1
            pre += petrol
            petrol = 0
    
    if(petrol + pre >= 0):
        return index
    else:
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
