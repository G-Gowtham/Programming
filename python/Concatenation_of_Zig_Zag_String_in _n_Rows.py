def fn():
    s = input().strip()
    n =  int(input().strip())
    a = [""]*n
    count = 0
    dir_up = 0
    if(len(s) == 0):
        print('')
    elif(n==1):
        print(s)
    else:
        for i in range(len(s)):
            if(dir_up == 0):
                a[count]+=s[i]
                count += 1
                if(count == n):
                    dir_up = 1
                    count -= 2
            else:
                a[count]+=s[i]
                count -= 1
                if(count == -1):
                    dir_up = 0
                    count += 2
        print(''.join(a))

for _ in range(int(input().strip())):
    fn()

