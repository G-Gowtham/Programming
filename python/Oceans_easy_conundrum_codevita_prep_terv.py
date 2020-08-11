
def mindiff(a,n,k): 
    a.sort()
    i = 0
    j = k-1
    mini = float('inf')

    while j != n:
        diff = a[j]-a[i]
        mini = min(mini,diff)
        j += 1
        i += 1
	
    return mini

n = int(input().strip())
a = list(map(int,input().strip().split()))  
k = int(input().strip())
print(mindiff(a, n, k)) 
 
