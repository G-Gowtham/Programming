def fn():
    count = 1
    n = int(input().strip())
    string = '1'
    ans = ""

    for i in range(n-1):
        count = 1
        for j in range(1,len(string)):
            if(string[j-1] != string[j]):
                ans += str(count)+string[j-1]
                count = 0
            count += 1
        ans += str(count)+string[len(string)-1]
        string = ans
        ans = ""

    print(string)
for _ in range(int(input().strip())):
    fn()