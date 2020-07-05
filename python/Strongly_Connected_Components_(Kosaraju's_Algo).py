#User function Template for python3

# Graph (graph) is a default dict of type list
# V is the number of vertices in the graph
def countSCCs (graph, v):
    visited = [0]*v
    s = []
    rev_graph = defaultdict(list)

    def topo_sort(graph,visited,s,k):
        visited[k] = 1

        if k in graph:
            for i in graph[k]:
                if(visited[i] == 0):
                    topo_sort(graph,visited,s,i)
        
        s.append(k)

    
    for j in range(v):
        if(visited[j] == 0):
            topo_sort(graph,visited,s,j)

    #print(s)

    def reverse_graph(graph,rev_graph):
        for i in graph:
            for j in graph[i]:
                rev_graph[j].append(i)
    
    reverse_graph(graph,rev_graph)

    #print(rev_graph)
    visited = [0]*v

    def dfs(visited,rev_graph,k):
        visited[k] = 1
        if(k in rev_graph):
            for i in rev_graph[k]:
                if(visited[i] == 0):
                    dfs(visited,rev_graph,i)

    count = 0

    while s:
        x = s.pop()
        if(visited[x] == 0):
            count += 1
            dfs(visited,rev_graph,x)
    
    return (count)

#{ 
#  Driver Code Starts
#Initial Template for Python 3

def creategraph(n, arr, graph):
    i = 0
    while i < 2 * e:
        graph[arr[i]].append(arr[i + 1])
        i += 2


from collections import defaultdict
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n,e = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        graph = defaultdict(list)
        creategraph(e, arr, graph)
        print (countSCCs(graph, n))
        
# Contributed By: Pranay Bansal
# } Driver Code Ends