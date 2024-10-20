Is there a cycle in the graph?
How many connected components are there in the graph?
Is there a path that passes through all vertices?
is there a path that passes through all edges?

Cycle checking: A path of length > 0
start = end vertex
two cycles are distinct if they have different sets of edges

How to check for a cycle?
1. Perform DFS start any vertex
2. If current vertex has an edge to an already visited vertex then there is a cycle

Cons: Does not check whether the neighbour w is the vertex that it just came from
Can be moving back and ford along a single edge to be a cycle

1. Perform DFS from any vertex
2. Keep track of previous vertex during DFS
3. If current vertex has edge to an already visited which is not a the previous vertex,
then there is a cycle

Cons: Algorithm only checks one connected component, the connected component
that the initially chosen vertex belongs to

Fix: dfs again until unvisited node are visited

time complexity O(V+E) because DFS traversal

Definitions
subgraph: a subset of vertices and edges of original graph
connected subgraph: there is path between every pair of vertices in the subgraph
maximally connected subgraph: no way to include more edges from original graph into the
subgraph such that subgraph is still connected

Problems:
How many connected components are there?
Are two vertices in the same connected component?

Goal:
- Compute an arary which indicates which connected component each vertex is in
- let this array be called componentOf
- componentOf[v] contains the component number of vertex v

Idea:
Choose a vertex and perform DFS at that vertex
 - assign all visited vertices to component 0
After the DFS, if any vertex has no been assigned a component,
perform a DFS starting at that vertex
 - Repeat until all vertices are assigned a component, increasing the component number each time

O(V+E)

store components array in wrapper
- number of connected components
- componentOf array

Insertion an edge may reduce nC
Deletion an edge may increase nC



