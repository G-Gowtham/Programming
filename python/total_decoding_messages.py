flag = 0
def find(s,i):
    global flag  
    if i == len(s):
        return 1
    if s[i] == '0':
        return 0
    if(i <= len(s)-2 and s[i+1] == '0' and int(s[i])>2):
        flag = 1
        return 0

    result = find(s,i+1)
    
    if(i <= len(s)-2 and int(s[i]+s[i+1]) < 27):
        result += find(s,i+2)

    if flag == 0:
        return result
    else:
        return 0


def fn():
    global flag
    n = int(input().strip())
    s = input().strip()
    flag = 0
    return find(s,0)


for _ in range(int(input().strip())):
    print(fn())
