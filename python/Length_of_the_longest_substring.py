def fn():
    alpha = [-1]*26
    s = input().strip()
    l_max = 0
    g_max = 0
    start = 0

    for i in range(len(s)):
        if(alpha[ord(s[i])-97]>=start):
            l_max = i - start
            g_max = max(g_max,l_max)
            start = alpha[ord(s[i])-97]+1
            
        alpha[ord(s[i])-97] = i

        if i == len(s)-1:
            g_max = max(g_max,i-start+1)

    print(g_max)

for _ in range(int(input().strip())):
    fn()