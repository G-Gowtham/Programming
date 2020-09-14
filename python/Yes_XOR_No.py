
def binarySearch (arr, l, r, x):
    if r >= l: 
        mid = l + (r - l) // 2
        if arr[mid] == x: 
            return mid 
        elif arr[mid] > x: 
            return binarySearch(arr, l, mid-1, x) 
        else: 
            return binarySearch(arr, mid + 1, r, x) 
    else: 
        return -1

def fn():
    n = int(input().strip())
    a = list(map(int,input().strip().split()))
    b = list(map(int,input().strip().split()))
    xor = []
    flag = 0
    count = 0
    c = list(a) + list(b)

    for i in range(n):
        for j in range(n):
            xor.append(a[i]^b[j])

    xor.sort()
    c = list(set(c))
    c.sort()

    # for i in range(len(xor)):
    #     for j in range(len(c)):
    #         if(xor[i] == c[j]):
    #             count += 1
    #             break

    for i in range(len(xor)):
        if(binarySearch(c,0,2*n-1,xor[i]) != -1):
            count += 1
  

    if(count%2==0):
        print("Yes")
    else:
        print("No")


for _ in range(int(input().strip())):
    fn()