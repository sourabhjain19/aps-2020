from collections import defaultdict

count = 1

def DFS(graph, v, visited):
    global count

    visited[v] = True
    print(v, end=' ')

    for i in sorted(graph[v]):
        if visited[i] == False:
            DFS(graph, i, visited)
 
graph = defaultdict(list)

n = int(input())

for _ in range(n):
    n1, n2 = input().split()
    graph[n1].append(n2)
    graph[n2].append(n1)

source = input()

visited = {}
for i in sorted(graph):
    visited[i] = False

DFS(graph, source, visited)
