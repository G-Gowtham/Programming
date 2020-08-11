def fn():
    n = int(input().strip())
    s = input().strip()
    count = 0

    for i in range(len(s)):
        if int(s[i])%2 == 0:
            count += i+1

    print(count)

fn()