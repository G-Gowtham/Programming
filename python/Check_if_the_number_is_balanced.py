#User function Template for python3
class Solution:
	def balancedNumber(self, s):
		lhs = rhs = 0
		n = len(s)
		for i in range(n):
			if i < n//2:
				lhs += int(s[i])
			elif i > n//2:
				rhs += int(s[i])

		#print(lhs,rhs)
		if lhs == rhs:
			return 1
		return 0

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
	t = int (input ())
	for tc in range (t):
		N = input ()
		ob = Solution()
		if ob.balancedNumber(N):
			print (1)
		else:
			print (0) 
# } Driver Code Ends