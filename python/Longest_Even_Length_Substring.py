def fn():

    s = input().strip()
    n = len(s)
    maxi = 0

    for i in range(n-1):
        l_sum = 0
        r_sum = 0
        l = i
        r = i+1

        while(l != -1 and r != n):
            l_sum += int(s[l])
            r_sum += int(s[r])

            if l_sum == r_sum:

                maxi = max(maxi,r-i)
            l -= 1
            r += 1
    
    print(2*maxi)

for _ in range(int(input().strip())):
    fn()