def frequencycount(a,n):
    

    for i in range(len(a)):
        a[i] -= 1

    for i in a:
        a[i%n] += n

    for i in range(n):
        a[i] = a[i]//n
               




#{ 
#  Driver Code Starts
#Initial Template for Python 3

import math
if __name__=="__main__":
	T=int(input())
	while(T>0):
		N=int(input())
		A=[int(x) for x in input().strip().split()]
		frequencycount(A,N)
		for i in range (len (A)):
			print(A[i], end=" ")
		print()
		T-=1



# } Driver Code Ends