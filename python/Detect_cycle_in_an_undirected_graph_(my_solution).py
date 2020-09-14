#User function Template for python3
def dfs(i,directed_graph,visited,loop,flag):
    
    #print(i)

    if loop[i] == 1:
        #print(i)
        return 1

    loop[i] = 1

    if visited[i] == 0:
        if i in directed_graph:
            for j in directed_graph[i]:
                flag = dfs(j,directed_graph,visited,loop,flag)


    visited[i] = 1
    return flag  

def isCyclic(graph,n):
    directed_graph = defaultdict(list)  
    print(graph)

    for i in graph:
        for j in graph[i]:
            if i <= j:
                directed_graph[i].append(j)
            
    visited = [0]*n
    
    print(directed_graph)

    for i in directed_graph:
        if(visited[i] == 0):
            loop = [0]*n
            if dfs(i,directed_graph,visited,loop,0) == 1:
                return 1
    return 0

#{ 
#  Driver Code Starts
#Initial Template for Python 3
import atexit
import io
import sys
from collections import defaultdict

#Contributed by : Nagendra Jha

#Graph Class:
class Graph():
    def __init__(self,vertices):
        self.graph = defaultdict(list)
        self.V = vertices

    def addEdge(self,u,v): # add directed edge from u to v.
        self.graph[u].append(v)

if __name__ == '__main__':
    test_cases = int(input())
    for cases in range(test_cases) :
        N,E = map(int,input().strip().split())
        g = Graph(N)
        edges = list(map(int,input().strip().split()))

        for i in range(0,len(edges),2):
            u,v = edges[i],edges[i+1]
            g.addEdge(u,v) # add an undirected edge from u to v
            g.addEdge(v,u)
        print(isCyclic(g.graph,N))
# } Driver Code Ends