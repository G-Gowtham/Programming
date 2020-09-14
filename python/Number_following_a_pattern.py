def fn():
    s = input().strip()
    a = ['1','2','3','4','5','6','7','8','9']
    index = 0
    n = len(s)
    d_count = 0
    ans = ['1']
    flag = 0
    
    for i in range(n):
        if (s[i] == 'D'):
            d_count += 1
            flag = 1

        else:
            if(flag == 1):
                ans.pop()
                ans += a[index:index+d_count+1][::-1]
                flag = 0
                index += d_count
                d_count = 0

            index += 1
            ans.append(a[index])

    if(flag == 1):
        ans.pop()
        ans += a[index:index+d_count+1][::-1]

    for i in ans:
        print(i,end='')
    print()   


for _ in range(int(input().strip())):
    fn()