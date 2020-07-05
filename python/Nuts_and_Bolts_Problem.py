

def fn():
    nuts = [0]*9
    bolts = [0]*9
    sym = ['!' ,'#', '$', '%', '&', '*', '@','^', '~']
    
    n = int(input().strip())
    nu = list(input().strip().split())
    bo = list(input().strip().split())

    for i in nu:
        nuts[sym.index(i)] += 1
    
    for j in bo:
        bolts[sym.index(j)] += 1

    #print(nuts,bolts)

    ans = ""
    
    for i in range(9):
        ans += sym[i]*min(nuts[i],bolts[i])
    
    out = ""

    for i in ans:
        if i != " ":
            out += i+" "
        
    print(out)
    print(out)

for _ in range(int(input().strip())):
    fn()