def fn():
    s = input().strip()
    alpha = [0]*26
    n = len(s)
    maxi = 0

    for i in s:
        alpha[ord(i)-97] += 1
        maxi = max(maxi,alpha[ord(i)-97])
    
    #print(alpha)
    #print(n)

    if(n-maxi<maxi-1):
        return 0
    
    return 1
    
    
for _ in range(int(input().strip())):
    print(fn())