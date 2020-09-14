def fn():
    n = int(input())
    a = list(map(int,input().strip().split()))
    n = len(a)
    max_index = len(a)-1
    min_index = 0
    for i in range(n): 
        if i % 2 == 0: 
            print(a[max_index],"",end = '') 
            max_index -= 1
        else: 
            print(a[min_index],"",end = '')
            min_index += 1

    print()
x = int(input().strip())
for i in range(x):
    fn()
