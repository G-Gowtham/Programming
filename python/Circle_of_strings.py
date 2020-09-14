def fn():
    n = int(input().strip())
    s = list(input().split())
    flag = 0
    
    if n == 1:
        if s[0][0] == s[0][-1]:
            return 1
        else:
            return 0

    alpha = [0]*26
    alpha_count = [0]*26
    ones = []
    loop = [] 

    for i in s:
        if i[0] == i[-1]:
            ones.append(i[0])

        else:
            flag = 1
            alpha[ord(i[0])-97] += 1
            alpha[ord(i[-1])-97] -= 1
            alpha_count[ord(i[0])-97] += 1
            alpha_count[ord(i[-1])-97] += 1

    ones = list(set(ones))
    
    if flag == 0 and len(ones) == 1:
        return 1
        
    for i in ones:
        if(alpha_count[ord(i[0])-97]&1 or alpha_count[ord(i[0])-97] == 0):
            return 0
            
    #print(alpha)

    for i in alpha:
        if i != 0:
            return 0
    
    return 1
for _ in range(int(input().strip())):
    print(fn())