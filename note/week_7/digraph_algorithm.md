Directed grapgs edge (v,w) has source v and destination w.

Revamping dfs cycle check for directed

Problem:
Is vertex t reachable from vertex s?

Use BFS or DFS starting at s
O(V + E), only feasible if reachability is an infreqeuent operation

Idea
Construct a V x V matrix
tells us whether is a path from s to t for s, t in V

This matrix is called the transitive closure matrix

tc[s][t] is true if there is a path from s to t, false otherwise

to computer reachability matrix:
perform BFS/DFS from every vertex or Warshall's algorithm

Does not require grapgh traversal

Time complexity: O(V^3)
Space complexity: O(V^2)

