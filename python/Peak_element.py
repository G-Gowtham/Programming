# your task is to complete this function
# function should return index to the any valid peak element
def peakElement(a, n):
    if n == 1:
        return 0
    if a[0]>a[1]:
        return 0
    if a[n-1]>a[n-2]:
        return n-1
    
    for i in range(1,n-1):
        if(a[i-1]<a[i]>a[i+1]):
            return i




#{ 
#  Driver Code Starts
if __name__=='__main__':
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        index = peakElement(arr, n)
        flag = False
        if index == 0 and n==1:
            flag = True
        elif index==0 and arr[index]>=arr[index+1]:
            flag = True
        elif index==n-1 and arr[index]>=arr[index-1]:
            flag = True
        elif arr[index-1] <= arr[index] and arr[index] >= arr[index+1]:
            flag = True
        else:
            flag = False

        if flag:
            print(1)
        else:
            print(0)
# Contributed by: Harshit Sidhwa

# } Driver Code Ends