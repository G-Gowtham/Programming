def fn():
    a = [0,1,2,3,4,5,6,7,8,9,10]
    b = []
    n = int(input().strip())
    k = 0
    for i in range(n+1):
        if i <= 10:
            b.append(a[i])
        else:
            for j in range(len(str(i))-1):
                if int(str(i)[j]) - int(str(i)[j-1]) == -1 or int(str(i)[j]) - int(str(i)[j-1]) == 1:
                    k += 1
            if k == len(str(i))-1:
                b.append(i)
            k = 0

    for i in b:
        print(i,"",end = '')
    print()

for _ in range(int(input().strip())):
    fn()


# def fn():
#     a = [0,1,2,3,4,5,6,7,8,9,10]
#     b = []
#     n = int(input().strip())
#     k = 0
#     for i in range(n+1):
#         if i <= 10:
#             print(a[i],"",end = '')
#         else:
#             for j in range(len(str(i))-1):
#                 if int(str(i)[j]) - int(str(i)[j-1]) == -1 or int(str(i)[j]) - int(str(i)[j-1]) == 1:
#                     k += 1
#             if k == len(str(i))-1:
#                 print(i,"",end = '')
#             k = 0
#     print()

# for _ in range(int(input().strip())):
#     fn()
