#User function Template for python3

class Solution:
    def closing (self,s, pos):
        i = pos+1
        n = 0

        while i < len(s):
            if s[i] == "]" and n == 0:
                return i

            if s[i] == "[":
                n += 1
            elif s[i] == "]":
                n -= 1
            
            i += 1



#{ 
#  Driver Code Starts
#Initial Template for Python 3

t = int (input ())
for tc in range (t):
    s = input ()
    pos = int (input ())
    ob = Solution()
    print (ob.closing (s, pos))
    
# Contributed By: Pranay Bansal

# } Driver Code Ends