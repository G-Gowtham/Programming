def fn():
    s = input().strip()
    ans = []
    for i in range(len(s)+1):
        for j in range(i+1,len(s)+1):
            if(s[i:j] == s[i:j][::-1]):
                ans.append(s[i:j])
    
    ans = list(set(ans))
    print(len(ans))

for _ in range(int(input().strip())):
    fn()