bfs (G, src):
  Input: graph G, starting vertex src

  create visited array, initlaised to false
  create predecessor array, initialised to -1
  create queue Q

  visited[src] = true
  enqueue src into Q

  while Q is not empty:
    v = dequeue from Q
    for each neighbour w of v in G where visited[w] = false:
        visited[w] = true
        predecessor[w] = v
        enqueue w into Q

bfsFindPath (G, src, dest):
  Input: graph G, vertices src and dest

  ... BFS starting from src ...
  if predecessor[dest] != -1:
    v = dest
    while v != src:
      print v, "<-"
      v = predecessor[v]
    print src
