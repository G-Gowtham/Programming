def rearrange(arr, n): 
    
    for i in range(0, n): 
        print(arr[arr[i]])
        arr[i] += (arr[arr[i]] % n) * n 
    print(arr)
    for i in range(0, n): 
        arr[i] = int(arr[i] / n) 

arr = [3,2,0,1]
rearrange(arr,len(arr))
print(arr)