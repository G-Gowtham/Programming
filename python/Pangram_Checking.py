
def checkPanagram(s):
    
    alpha = [0]*26
    s = s.lower()

    for i in s:
        if(97<=ord(i)<=122):
            alpha[ord(i)-97] += 1
    
    for i in alpha:
        if(i==0):
            return False
    return True




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

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        s=str(input())
        if(checkPanagram(s)):
            print(1)
        else:
            print(0)
# } Driver Code Ends