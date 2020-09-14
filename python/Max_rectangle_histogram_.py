#User function Template for python3

def maxRectangle(a,r,c):
    hist = [0]*c
    maxi = 0
    area = 0

    for i in range(r):
        s = [0]
        if a[i][0] == 0:
            hist[0] = 0
        else:
            hist[0] = hist[0]+1

        for j in range(1,c): 
            if(a[i][j] == 0):
                hist[j] = 0
            else:
                hist[j] += 1

            if(hist[s[-1]]<=hist[j]):
                s.append(j)
            
            else:
                while(len(s)!= 0 and hist[s[-1]]>hist[j]):
                    index = s.pop()
                    if(len(s)!=0):
                        area = max(area,(j-s[-1]-1)*hist[index])
                    else:
                        area = max(area,j*hist[index])

                s.append(j)
        
        while(len(s)!=0):
            index = s.pop()
            if(len(s)!=0):
                area = max(area,(c-s[-1]-1)*hist[index])
            else:
                area = max(area,c*hist[index])


        maxi = max(maxi,area)
        area = 0

    return maxi

# Driver Code 
if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        R, C = input().split()
        a=list(map(int,input().split()))
        j=0
        A=[]
        R=int(R)
        C=int(C)
        for i in range(0,R):
            A.append(a[j:j+C])
            j=j+C
        # print(A)
        print(maxRectangle(A, R, C)) 
	
# This code is contributed 
# by SHUBHAMSINGH10 

# } Driver Code Ends