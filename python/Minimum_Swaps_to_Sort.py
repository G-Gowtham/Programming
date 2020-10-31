# Your task is to complete this function

# return the minimum number of swaps required to sort the arra
def minSwaps(arr, n):
    
    b= []
    for i in range(n):
        b.append([arr[i],i])
    
    b.sort()
    count = 0

    for i in range(n):
        while b[i][1] != i:
            count+=1
            x = b[i][1]
            b[i],b[x] = b[x],b[i]

            #print(b)
            
    return count






import atexit
import io
import sys

if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        print(minSwaps(arr, n))

