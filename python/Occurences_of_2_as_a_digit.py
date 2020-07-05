def numberOf2sinRange(n):
    if n < 100:
        count = 0
        for i in range(1,n+1):
            count += str(i).count('2')
        return count

    x = (n//100)
    count = x*10*2
    x = x*100
    y = str(x)
    s = str(n)
    l = len(s)
    pow = 1
    
    if l > 2:
        for i in range(l-3,0,-1):
            pow += 1
            if int(s[i]) > 2:
                count += (int(s[:i])+1)*(10**pow)
            else:
                count += (int(s[:i]))*(10**pow)
    
    if(int(s[0])>2):
        count += 10**(l-1)
    bal = 0

    for i in range(l):
        if(int(y[i]) == 2):
            count += int(y[i+1:])

    for i in range(x,n+1):
        bal += str(i).count('2')

    count += bal

    return count




#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == "__main__":
    t=int(input())
    for i in range(t):
        n=int(input())
        print(numberOf2sinRange(n))
# } Driver Code Ends