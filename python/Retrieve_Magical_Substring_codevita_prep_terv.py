
tc = 1
sub = []

def pre(s):
    global sub
    sub = [[] for i in range(len(s))]
    for i in range(len(s)):
        tmp = ""
        for j in range(i,len(s)):
            tmp += s[j]
            sub[j-i].append(tmp)
def fn(s):
    global tc
    l,p = map(int,input().strip().split())
    d = {}
    out = []
    for i in sub[l-1]:
        if i in d:
            d[i]+=1
        else:
            d[i] = 1
    
    print(tc)
    tc += 1

    #print(d)

    for i in d:
        if d[i] == p:
            out.append(i)
    out.sort()

    for i in out:
        print(i)  
    
    
s = input().strip()
pre(s)
for _ in range(int(input().strip())):
    fn(s)
