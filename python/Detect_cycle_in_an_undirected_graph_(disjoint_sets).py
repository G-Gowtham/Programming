#User function Template for python3

def find_parent(parent,i):
    if parent[i] == -1:
        return i
    else:
        return find_parent(parent,parent[i])

def union(parent,x,y):
    parent[x] = y



def isCyclic(graph,n):
    parent = [-1]*n

    directed_graph = defaultdict(list)  
    print(graph)

    for i in graph:
        for j in graph[i]:
            if i <= j:
                directed_graph[i].append(j)


    for i in directed_graph:
        for j in directed_graph[i]:
            x = find_parent(parent,i)
            y = find_parent(parent,j)

            if(x==y):
                return 1
            
            union(parent,x,y)
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