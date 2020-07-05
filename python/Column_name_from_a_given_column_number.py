
def fn():
    n = int(input())
    ans = ""
    while(n):
        if n%26==0:
            ans = "Z" + ans
            n = n//26 -1
        else:
            ans = chr(n%26 +64) + ans
            n = n//26
            
    print(ans)

for i in range(int(input().strip())):
    fn()

