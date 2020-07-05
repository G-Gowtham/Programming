#User function Template for python3
'''
	Your task is to return the case sorted string
	as described in the problem statement above.
	
	Function Arguments: string s and size n. 
	Return Type: string
'''
def caseSort(s,n):
    upper = ""
    lower = ""
    out = ""
    for i in range(n):
        if (64 < ord(s[i]) < 91):
            upper += s[i]
        else:
            lower += s[i]

    upper = sorted(upper)
    lower = sorted(lower)

    for i in range(n):
        if (64 < ord(s[i]) < 91):
            out += upper[0]
            upper = upper[1:]
        else:
            out += lower[0]
            lower = lower[1:]
    
    return out





#{ 
#  Driver Code Starts
#Initial Template for Python 3

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    t = int(input())
    for tt in range(t):
        n=int(input())
        s=str(input())
        print(caseSort(s,n))
# } Driver Code Ends