def fn():
    s = input().strip()
    n = len(s)
    sub = ""
    s1 = s 

    for i in range(0,n//2):
        sub += s[i]
        s1 = s1.replace(sub,"")
        if s1 == "":
            return "True"
        s1 = s

    return "False"
    


for _ in range(int(input().strip())):
    print(fn())