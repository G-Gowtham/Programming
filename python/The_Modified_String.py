def fn():
    string = input().strip()
    ans = 0
    count = 1
    for i in range(1,len(string)):
        if(string[i-1]!=string[i]):
            if(count>2):
                ans += (count-1)//2
            count = 0
        count += 1

    if(count>2):
        ans += (count-1)//2

    return ans
    
for _ in range(int(input().strip())):
    print(fn())