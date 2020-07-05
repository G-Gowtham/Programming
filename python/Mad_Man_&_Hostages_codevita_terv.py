def fn():
    n = int(input().strip())
    while(str(n) != str(n)[::-1]):
        n = n + int(str(n)[::-1])

    print(n)

fn()