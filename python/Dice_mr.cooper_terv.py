def fn():
    s = input().strip()
    count = 0

    for i in s:
        if i != '6':
            count += 1
    if(s[len(s)-1] == '6'):
        count = -1

    print(count)

fn()