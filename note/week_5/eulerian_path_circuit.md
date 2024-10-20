Eulerian path
a path that visits each edge exactly once

Eulerian circuit
an Eulerian path that starts and ends at the same vertex

Theorems:
A graph has Eulerian path iff exactly zero or two vertices have odd degree
all vertices with non-zero degree belong to the same connected components (connected)

A graph has Eulerian circuit iff every vertex has even degree and
all vertices with non zero degree belong to the same connected component (connected)

Why
> all vertices with non zero degree belong to the same connected component 

Analysis
degree of every vertex O(V+E)
connectivity requires DFS is O(V+E)
Therefore, worst-case time complexity is O(V+E)

can be solved in polynomial time
