dijkstraSSSP(G, src):
  Input: graph G, source vertex src

  create dist array, default infinity
  create pred array, default -1
  create vSet containing all vertices of G

dist[src] = 0 
while vSet is not empty:
  find vertex in v in vSet such that dist[v] is minimal
  remove v from vSet

  for each edge (v, w, weight) in G:
    relax along (v, w, weight)
