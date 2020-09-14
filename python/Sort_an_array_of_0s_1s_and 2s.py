def fn():
    count0 = 0
    count1 = 0
    count2 = 0

    n = int(input().strip())
    a = list(input().strip().split())

    for i in a:
        if i == '0':
            count0 += 1
        elif i == '1':
            count1 += 1
        else:
            count2 += 1

    for i in range(count0):
        print(0,end = " ")
    for i in range(count1):
        print(1,end = " ")
    for i in range(count2):
        print(2,end = " ")

    print()

for _ in range(int(input().strip())):
    fn()