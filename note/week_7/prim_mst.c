primMst(G):
  Input: graph G with V vertices
  Output: minimum spanning tree of G

  mst = empty graph with V vertoces
  usedV = {0}
  unusedE = edges of G

  while |usedV| < V:
    find cheapest edge e (s, t, weight) in unusedE such that 
     s in usedV and t is not in usedV
    
    add e to mst
    add t to usedV
    remove e from unusedE

  return mst
