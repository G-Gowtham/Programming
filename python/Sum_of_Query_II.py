def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    q = int(input().strip())
    query_list = list(map(int,input().strip().split()))
    count = 0
    for i in range(q):
        l = query_list[count]
        r = query_list[count+1]
        print(sum(a[l-1:r]),end = ' ')
        count += 2
    print()

for _ in range(int(input().strip())):
    fn()