def fn():
    s = input().strip()
    org = s
    n = int(input().strip())
    d = []
    c = []
    z = len(s)
    ans = ""

    for i in range(n):
        x,y = input().strip().split()
        d.append(x)
        c.append(int(y))
    
    for i in range(n):
        c[i] = c[i]%z
        if(d[i] == "R"):   
            s = s[(-1)*c[i]:]+ s[:(-1)*c[i]]
            ans += s[0]
        else:
            s = s[c[i]:]+s[:c[i]]
            ans += s[0]
            
    flag = 0

    for l in range(len(s)):
        for m in range(i,len(s)):

            #print(org[l:m+1])
            if "".join(sorted(ans)) == "".join(sorted(org[l:m+1])):
                flag = 1
                break
            else:
                flag = 0
        if(flag):
            break

    if(flag):
        print("YES")
    else:
        print("NO")

fn()