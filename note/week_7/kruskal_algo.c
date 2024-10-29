kruskalMst(G):
  Input: graph G with V vertices
  Output: minimum spanning tree of G

  mst = empty graph with V vertices

  sortedEdges = sort edges of G by weight
  for each edge e in sortedEdges:
    add e to mst
    if mst has a cycle:
      remove e from mst
    if mst has V - 1 edges
      return mst

// alternative

kruskalMst(G):
  Input: graph G with V vertices
  Output: minimum spanning tree of G

  mst = empty graph with V vertices

  sortedEdges = sort edges of G by weight
  for each edge (v, w, weight) in sortedEdges:
    if there is not path between v and w in mst:
      add edge (v, w, weight) to mst

    if mst has V-1 edges:
      return mst
