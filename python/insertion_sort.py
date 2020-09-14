def insertion_sort(a):
    for i in range(1,len(a)):
        key = a[i]
        j = i - 1
        while j >= 0 and key < a[j]:
            a[j+1] = a[j]
            j -= 1;
        a[j+1] = key;
    print(*a)




a = [5,4,6,2,8,4,5]
insertion_sort(a)