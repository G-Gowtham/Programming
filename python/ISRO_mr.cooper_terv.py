def fn():
    n = int(input().strip())
    i = 1
    q = ['1','9']

    while i<=n:
        tmp = q.pop(0)
        print(tmp)
        q.append(tmp+'1')
        q.append(tmp+'9')

        i += 1
      

fn()
