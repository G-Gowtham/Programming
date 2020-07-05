def fn():
    n = int(input().strip())
    i = n+1

    while 1:
        if str(i) == str(i)[::-1]:
            print(i)
            break
        i += 1
        
fn()