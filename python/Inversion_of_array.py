inv = 0

def merge_sort(arr):
    global inv 

    if len(arr) > 1:
        mid = len(arr)//2
        L = arr[:mid]
        R = arr[mid:]
        merge_sort(L)
        merge_sort(R)

        i = j = k = 0
        while i < len(L) and j < len(R):
            if L[i] <= R[j]:
                arr[k] = L[i]
                i += 1
                k += 1
            else:
                inv += len(L)-i
                arr[k] = R[j]
                j += 1
                k += 1


        while i < len(L):
            arr[k] = L[i]
            i += 1
            k += 1
        while j < len(R):
            arr[k] = R[j]
            j += 1
            k += 1

for _ in range(int(input())):
    inv = 0
    n = int(input())
    arr = list(map(int,input().strip().split()))
    merge_sort(arr)
    print(inv)            
