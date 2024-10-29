warshall(A):
  Input: n x n adjacency matrix A
  Output: n x n reachability matrix 

  create tc matrix which is a copy of A

  for each vertex k in G:
    for each vertex s in G
      for each vertex t in G:
        if tc[s][k] and tc[k][t]:
          tc[s][t] = true

  return tc

Strongly connected components
Kosaraju's algorithm
Targan's algorithm
