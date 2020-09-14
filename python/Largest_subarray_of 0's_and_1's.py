#User function Template for python3


def maxLen(a):
    
    n = len(a)
    
    for i in range(n):
        if(a[i] == 0):
            a[i] = -1
    
    maxi = 0
    d = {}
    s = 0
    k = 0

    for i in range(n):
        s += a[i]
        if(s==k):
            maxi = i+1
        
        if((s-k) in d):
            maxi = max(maxi,i-d[(s-k)])

        if s not in d:
            d[s] = i

    return maxi



#{ 
#  Driver Code Starts
#Initial Template for Python 3


t=int(input())
for _ in range(0,t):
    n=int(input())
    a=list(map(int,input().split()))
    s=maxLen(a)
    print(s)
# } Driver Code Ends