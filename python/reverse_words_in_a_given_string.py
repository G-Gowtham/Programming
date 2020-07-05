def fn():
    x = list(input().strip().split("."))
    for i in range(len(x)-1,-1,-1):
        if i == 0:
            print(x[i],end = '')
        else:
            print(x[i]+".",end = '')
    print()

for _ in range(int(input())):
    fn()