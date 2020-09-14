def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    sum_list = list(a)
    ord_list = list(i for i in range(0,len(a)))
    for i in range(1,len(a)):
        for j in range(i):
            if a[j] < a[i]:
                if (sum_list[j] + a[i]) > sum_list[i]:
                    sum_list[i] = sum_list[j] + a[i]
                    ord_list[i] = j
    #print(sum_list)
    print(max(sum_list))

for _ in range(int(input().strip())):
    fn()
