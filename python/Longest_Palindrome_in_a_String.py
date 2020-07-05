def fn():
    s = input().strip()
    ans = []
    for i in range(len(s)+1):
        for j in range(i+1,len(s)+1):
            if(s[i:j] == s[i:j][::-1]):
                ans.append(s[i:j])
    
    out = ans[0]

    for i in ans:
        if len(i)>len(out):
            out = i
    
    print(out)
    
for _ in range(int(input().strip())):
    fn()