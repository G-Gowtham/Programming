#User function Template for python3

def isValidIP(s):
    a = list(s.split('.'))
    flag = 0
    if(a.len() != 4):
        return 0;
        
    for i in a:
        if i == "":
            return 0;
        if(len(i)>3):
            return 0;
        for j in i:
            if(j == '0' and flag == 0 and len(i)>1):
                return 0;
            if(j.isalpha()):
                return 0;
            flag = 1
        flag = 0
        if(int(i)>255):
            return 0

    return 1
        



#{ 
#  Driver Code Starts
#Initial Template for Python 3

    
if __name__=="__main__":
    t=int(input())
    for _ in range(0,t):
        s=input()
        if(isValidIP(s)):
            print(1)
        else:
            print(0)
    

# } Driver Code Ends