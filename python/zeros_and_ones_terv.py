def fn():
    s =list(input().strip().split())
    m = int(input().strip())
    n = int(input().strip())

    s.sort(key = lambda x : len(x))

    ans = 0

    for i in s:
        count_0 = 0
        count_1 = 0
        for j in i:
            if(j == '0'):
                count_0 += 1
            else:
                count_1 += 1
        if(m>=count_0 and n>= count_1):
            m -= count_0
            n -= count_1
            ans += 1

    print(ans)


fn()