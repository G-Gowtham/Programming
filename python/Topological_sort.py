
from collections import defaultdict

def topoSort(n, graph):
    #print(graph)
    visited = [0]*n
    stack = []

    def find(visited,graph,stack,j):

        visited[j] = 1
        
        for i in graph[j]:
            if visited[i] == 0:
                find(visited,graph,stack,i)
        
        stack.insert(0,j)
                
    #print(graph)

    for i in range(n):
        if(visited[i] == 0):
            find(visited,graph,stack,i)

    print(*stack)            
    return stack #[0, 2, 5, 1, 3, 4, 7, 6]#


def creategraph(e, n, arr, graph):
    i = 0
    while i<2*e:
        graph[arr[i]].append(arr[i+1])
        i+=2



if __name__=='__main__':
    t = int(input())
    for i in range(t):
        e,N = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        graph = defaultdict(list)
        creategraph(e, N, arr, graph)
        res = topoSort(N, graph)
        # print res
        valid=True
        for i in range(N):
            n = len(graph[res[i]])
            for j in range(len(graph[res[i]])):
                for k in range(i+1, N):
                    if res[k]==graph[res[i]][j]:
                        n-=1
            # print n
            if n!=0:
                valid=False
                break
        if valid:
            print(1)
        else:
            print(0)
