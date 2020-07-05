
def fn():
    s = input().strip()
    ans = ""

    for i in range(len(s)-1,-1,-1):
        if(ord(s[i])-48 >= 0 and ord(s[i])-48<=9):
            ans = ans*int(s[i])
        else:
            ans = s[i]+ans
        
    print(ans)

fn()

