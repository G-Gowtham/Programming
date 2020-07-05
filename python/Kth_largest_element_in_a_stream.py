from heapq import heappush,heappop,heapify

def fn():
    
    k,n = map(int,input().strip().split())
    a = list(map(int,input().strip().split()))
    pq = []
    #heapify(pq)

    for i in range(n):

        if(i>k-1):
            heappush(pq,a[i])
            heappop(pq)
            tmp = heappop(pq)
            print(tmp,end=" ")
            heappush(pq,tmp)

        elif(i==k-1):
            heappush(pq,a[i])
            tmp = heappop(pq)
            print(tmp,end=" ")
            heappush(pq,tmp)

        else:
            heappush(pq,a[i])
            print(-1,end=" ")
    print()
    
for _ in range(int(input().strip())):
    fn()