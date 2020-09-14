# Your task is to complete this function
# Function should return True/False or 1/0
# Graph(graph) is a defaultict of type List
# n is no of Vertices

#white = visited,  grey = loop
def dfs(i,graph,white,grey,flag):
    
    if grey[i] == 1:
        return 1

    grey[i] = 1

    if white[i] == 0:
        if i in graph:
            for j in graph[i]:
                flag = dfs(j,graph,white,grey,flag)


    grey[i] = 0
    white[i] = 1
    return flag

def isCyclic(n, graph):
    white = [0]*n
    grey = [0]*n
    #print(graph)
    for i in graph:
        if(white[i] == 0):
            if dfs(i,graph,white,grey,0) == 1:
                return 1
    return 0


def creategraph(n, arr, graph):
    i = 0
    while i < 2 * e:
        graph[arr[i]].append(arr[i + 1])
        # graph[arr[i + 1]].append(arr[i])
        i += 2

from collections import defaultdict
if __name__ == '__main__':
    t = int(input())
    for i in range(t):
        n,e = list(map(int, input().strip().split()))
        arr = list(map(int, input().strip().split()))
        graph = defaultdict(list)
        creategraph(e, arr, graph)
        if isCyclic(n, graph):
            print(1)
        else:
            print(0)
# Contributed By: Harshit Sidhwa
# } Driver Code Ends