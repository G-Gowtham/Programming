from collections import OrderedDict
def fn():
    n = int(input().strip())
    d = int(input().strip())
    ans = str(n//d)

    if(n%d == 0 and d<n):
        return ans

    r = n%d;
    dic = OrderedDict()
    tmp = ""
    count = 0

    while(r != 0 and (r not in dic)):
        #print(r)
        dic[r] = count;
        r = r*10;
        tmp += str(r//d)
        r = r%d;
        count += 1

    if(r==0):
        ans = ans + '.' + tmp;
    else:
        ans = ans + '.' + tmp[:dic[r]] + "(" + tmp[dic[r]:] + ")";
        
    return ans


for _ in range(int(input().strip())):
    print(fn())