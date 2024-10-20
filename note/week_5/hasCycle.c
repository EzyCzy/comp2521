hasCycle(G):
  Input: graph G
  Output: true if G has a cycle, false otherwise

  pick any vertex v in G
  create visited array, initialised to false
  return dfsHasCycle(G, v, prev, visited)

dfsHasCycle(G, v, prev, visited):
  visited[v] = true

  for each neighbour w of v in G:
    if visited[w] = true:
      return true
    else if dfsHasCycle(G,w,visited):
      return true
return false

// keep track of previous node

hasCycle(G):
  Input: graph G
  Output: true if G has a cycle, false otherwise

  pick any vertex v in G
  create visited array, initialised to false
  return dfsHasCycle(G, v, prev, visited)

dfsHasCycle(G, v, prev, visited):
  visited[v] = true

  for each neighbour w of v in G:
    if w = prev:
      continue
    if visited[w] = true:
      return true
    else if dfsHasCycle(G,w,prev,visited):
      return true
return false

// allow forest 

hasCycle(G):
  Input: graph G
  Output: true if G has a cycle, false otherwise

  pick any vertex v in G
  create visited array, initialised to false

  for each vertex v in G:
    if visited[v] = false:
      if dfsHasCycle(G, v, prev, visited)
          return true

dfsHasCycle(G, v, prev, visited):
  visited[v] = true

  for each neighbour w of v in G:
    if w = prev:
      continue
    if visited[w] = true:
      return true
    else if dfsHasCycle(G,w, prev,visited):
      return true
return false
