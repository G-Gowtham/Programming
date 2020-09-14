def fn():
    n = int(input().strip())
    a = [False]*(n+1)
    arr = list(input().strip().split())
    for i in range(n):
        num = int(arr[i])
        if num > 0 and num < n:
            a[num] = True
    for i in range(1,n+1):
        if a[i] == False:
            print(i)
            break

for _ in range(int(input().strip())):
    fn()
