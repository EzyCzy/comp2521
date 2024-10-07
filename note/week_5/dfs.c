dfs(G, src):
  Input: graph G, starting vertex src

  create visited array, initialised to false
  dfsRec(G, src, visited)

dfsRec(G, v, visited):
  Input: graph G, vertex v, visited array

  visited[v] = true
  for each neighbour w of v in G:
    if visited[w] = false:
      dfsRec(G,w,visited)
