def fn():
    n = int(input().strip())
    a = list(input().strip().split())
    out = []
    l = 4

    for i in a:
        tmp = i * l
        out.append([tmp[:l],i])
    
    out.sort(reverse = True)


    #print(out)

    for i in out:
        print(i[1],end = "")
    
    print()
    

for _ in range(int(input().strip())):
    fn()